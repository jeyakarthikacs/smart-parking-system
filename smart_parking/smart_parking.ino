#define SENSOR1 12
#define SENSOR2 14
#define SENSOR3 10

#define LED1 0
#define LED2 5
#define LED3 4


void setup() {
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  
  pinMode(SENSOR1,INPUT); 
  pinMode(SENSOR2,INPUT);
  pinMode(SENSOR3,INPUT);
}

void checkSensor(int inputPin,int ledPin){
  int val = digitalRead(inputPin);
   if (val == LOW)
      digitalWrite(ledPin, LOW);
   else 
      digitalWrite(ledPin, HIGH);
}

void printStatus(){
  int p1,p2,p3;
  p1=digitalRead(LED1);
  p2=digitalRead(LED2);
  p3=digitalRead(LED3);
  Serial.print("Parking 1:");
  Serial.println(p1);
  Serial.print("Parking 2:");
  Serial.println(p2);
  Serial.print("Parking 3:");
  Serial.println(p3);
}

void loop() {
  checkSensor(SENSOR1,LED1);
  checkSensor(SENSOR2,LED2);
  checkSensor(SENSOR3,LED3);
  printStatus();
}