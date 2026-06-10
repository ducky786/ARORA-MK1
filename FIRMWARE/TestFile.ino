#include <Wire.h>
#include <Adafruit_BMP085.h>
#include <MPU6050.h>
#include <ESP32Servo.h>

// --- RGB LED PINS ---
const int R_LED = 27;
const int G_LED = 26;
const int B_LED = 25;

// --- Servo Objects ---
Servo servo1;
Servo servo2;
Servo servo3;

// --- Sensor Objects ---
Adafruit_BMP085 bmp;
MPU6050 mpu;

void setup() {
  Serial.begin(115200);
  delay(500);

  // RGB LED setup
  pinMode(R_LED, OUTPUT);
  pinMode(G_LED, OUTPUT);
  pinMode(B_LED, OUTPUT);

  // Servo setup
  servo1.attach(4);
  servo2.attach(16);
  servo3.attach(17);

  // BMP180 setup
  if (!bmp.begin()) {
    Serial.println("BMP180 NOT detected!");
  } else {
    Serial.println("BMP180 OK");
  }

  // MPU6050 setup
  Wire.begin();
  mpu.initialize();
  if (!mpu.testConnection()) {
    Serial.println("MPU6050 NOT detected!");
  } else {
    Serial.println("MPU6050 OK");
  }

  Serial.println("System Ready.");
}

void loop() {
  testRGB();
  testServos();
  readBMP180();
  readMPU6050();

  delay(2000);
}

// ------------------ RGB TEST ------------------
void testRGB() {
  Serial.println("Testing RGB LEDs...");
  flash(R_LED);
  flash(G_LED);
  flash(B_LED);
}

void flash(int pin) {
  digitalWrite(pin, HIGH);
  delay(300);
  digitalWrite(pin, LOW);
  delay(300);
}

// ------------------ SERVO TEST ------------------
void testServos() {
  Serial.println("Testing Servos...");

  for (int pos = 0; pos <= 180; pos += 10) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    delay(30);
  }

  for (int pos = 180; pos >= 0; pos -= 10) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    delay(30);
  }
}

// ------------------ BMP180 READ ------------------
void readBMP180() {
  Serial.print("Temperature: ");
  Serial.print(bmp.readTemperature());
  Serial.println(" C");

  Serial.print("Pressure: ");
  Serial.print(bmp.readPressure());
  Serial.println(" Pa");

  Serial.print("Altitude: ");
  Serial.print(bmp.readAltitude());
  Serial.println(" m");
}

// ------------------ MPU6050 READ ------------------
void readMPU6050() {
  int16_t ax, ay, az, gx, gy, gz;

  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  Serial.print("Accel (X,Y,Z): ");
  Serial.print(ax); Serial.print(", ");
  Serial.print(ay); Serial.print(", ");
  Serial.println(az);

  Serial.print("Gyro (X,Y,Z): ");
  Serial.print(gx); Serial.print(", ");
  Serial.print(gy); Serial.print(", ");
  Serial.println(gz);
}
