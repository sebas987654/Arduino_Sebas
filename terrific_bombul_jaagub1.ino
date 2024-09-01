// C++ code
const int greenLEDPin = 11;
const int redLEDPin = 12;
const int yellowLEDPin = 13;

void setup() {
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(yellowLEDPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("Home Automation Control Initialized.");
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();
    
    switch (command) {
      case '1':
        digitalWrite(greenLEDPin, HIGH);
        Serial.println("Green LED ON");
        break;
      case '2':
        digitalWrite(redLEDPin, HIGH);
        Serial.println("Red LED ON");
        break;
      case '3':
        digitalWrite(yellowLEDPin, HIGH);
        Serial.println("Yellow LED ON");
        break;
      case '4':
        digitalWrite(greenLEDPin, LOW);
        Serial.println("Green LED OFF");
        break;
      case '5':
        digitalWrite(redLEDPin, LOW);
        Serial.println("Red LED OFF");
        break;
      case '6':
        digitalWrite(yellowLEDPin, LOW); 
        Serial.println("Yellow LED OFF");
        break;
      case '7':
        digitalWrite(greenLEDPin, HIGH);
        digitalWrite(redLEDPin, HIGH);
        digitalWrite(yellowLEDPin, HIGH);
        Serial.println("All LEDs ON");
        break;
      case '8':
        digitalWrite(greenLEDPin, LOW);
        digitalWrite(redLEDPin, LOW);
        digitalWrite(yellowLEDPin, LOW);
        Serial.println("All LEDs OFF");
        break;
      default:
        Serial.println("Invalid Command");
        break;
    }
  }
}
