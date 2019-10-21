
// constants won't change. They're used here to set pin numbers:
const int buttonPin1 = 2;
const int buttonPin2 = 3;// the number of the pushbutton pin
      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin1);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13,LOW);
    delay(200);
    digitalWrite(12, HIGH);
    delay(200);
    digitalWrite(12,LOW);
    delay(200);
    digitalWrite(11, HIGH);
    delay(200);
    digitalWrite(11,LOW);
    delay(200);
    digitalWrite(10, HIGH);
    delay(200);
    digitalWrite(10,LOW);
    delay(200);
    digitalWrite(9, HIGH);
    delay(200);
    digitalWrite(9,LOW);
    delay(200);
    digitalWrite(8, HIGH);
    delay(200);
    digitalWrite(8,LOW);
    delay(200);
    
  } else {
    // turn LED off:
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }
  buttonState = digitalRead(buttonPin2);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13,LOW);
    delay(200);
    digitalWrite(11, HIGH);
    delay(200);
    digitalWrite(11,LOW);
    delay(200);
    digitalWrite(9, HIGH);
    delay(200);
    digitalWrite(9,LOW);
    delay(200);
    digitalWrite(12, HIGH);
    delay(200);
    digitalWrite(12,LOW);
    delay(200);
    digitalWrite(10, HIGH);
    delay(200);
    digitalWrite(10,LOW);
    delay(200);
    digitalWrite(8, HIGH);
    delay(200);
    digitalWrite(8,LOW);
    delay(200);
    
  } else {
    // turn LED off:
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }
}
