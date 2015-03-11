#define BUTTON_UP 10
#define BUTTON_DOWN 11

void setup(){
  Serial.begin(19200);
  pinMode(BUTTON_DOWN,INPUT_PULLUP);
  pinMode(BUTTON_UP,INPUT_PULLUP);
}

boolean upPressed, downPressed;

void loop(){
  upPressed = digitalRead(!BUTTON_UP);
  downPressed = digitalRead(!BUTTON_DOWN);

  Serial.print("UP =");
  Serial.println(!upPressed);
  Serial.print("DOWN =");
  Serial.println(!downPressed);
}
