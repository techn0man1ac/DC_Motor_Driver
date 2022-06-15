/*
  DC_Motor_Driver
  https://github.com/techn0man1ac/DC_Motor_Driver
  by Techn0man1ac Labs, 2022
*/

#define EN0 9
#define REV0 7
#define FW0 8

#define EN1 10
#define REV1 5
#define FW1 6

int RightMotor = 0; 
int LeftMotor = 0;

void setup() {
  pinMode(EN0, OUTPUT);
  digitalWrite(EN0, HIGH);
  pinMode(EN1, OUTPUT);
  digitalWrite(EN1, HIGH);
  pinMode(REV0, OUTPUT);
  digitalWrite(REV0, LOW);
  pinMode(REV1, OUTPUT);
  digitalWrite(REV1, LOW);
  pinMode(FW0, OUTPUT);
  digitalWrite(FW0, LOW);
  pinMode(FW1, OUTPUT);
  digitalWrite(FW1, LOW);


  MtrsSpdSet(64, -64);
  delay(500);
  MtrsSpdSet(-64, 64);
  delay(500);
  MtrsSpdSet(0, 0);

  Serial.begin(115200);
  Serial.setTimeout(5);  

  Serial.println(" Start "); 
}

void loop() {
  if (Serial.available() > 0) { //Если в буфере UART'а есть что-то
    char data = Serial.read();
    if (data == 'r') {
      RightMotor = Serial.parseInt();
    }
    if (data == 'l') {
      LeftMotor = Serial.parseInt();
    }
  }

  MtrsSpdSet(RightMotor, LeftMotor); //r -255..255, l -255..255
}

void MtrsSpdSet(int rMotor, int lMotor) {
  if (rMotor > 0) {
    rMotor = 255 - rMotor; // Inverse 255-245 -> 10, 255-100 -> 155
    digitalWrite(REV0, HIGH);
    digitalWrite(FW0, LOW);
  } else if (rMotor == 0) {
    digitalWrite(REV0, LOW);
    digitalWrite(FW0, LOW);
  } else if (rMotor < 0) {
    rMotor = abs(rMotor);
    rMotor = 255 - rMotor;
    digitalWrite(REV0, LOW);
    digitalWrite(FW0, HIGH);
  }

  if (lMotor > 0) {
    lMotor = 255 - lMotor;
    digitalWrite(REV1, HIGH);
    digitalWrite(FW1, LOW);
  } else if (lMotor == 0) {
    digitalWrite(REV1, LOW);
    digitalWrite(FW1, LOW);
  } else if (lMotor < 0) {
    lMotor = abs(lMotor);
    lMotor = 255 - lMotor;
    digitalWrite(REV1, LOW);
    digitalWrite(FW1, HIGH);
  }

  analogWrite(EN0, rMotor);
  analogWrite(EN1, lMotor);
}
