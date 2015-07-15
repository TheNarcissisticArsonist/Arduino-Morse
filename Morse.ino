int ledPin = 5;

void led(boolean on) {
  if(on) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}

void dot() {
  led(true);
  delay(100);
  led(false);
  delay(200);
}
void dash() {
  led(true);
  delay(500);
  led(false);
  delay(200);
}
void nextLetter() {
  delay(1000);
}
void nextWord() {
  delay(3000);
}

void morseLetter(char letter) {
  Serial.println("Running morse.");
  Serial.println(letter);
  switch(letter) {
    case 32: //space
      nextWord();
      break;
    case 34: //"
      //010010
      dot(); dash(); dot(); dot(); dash(); dot();
      break;
    case 39: //'
      //011110
      dot(); dash(); dash(); dash(); dash(); dot();
      break;
    case 40: //()
      //101101
      dash(); dot(); dash(); dash(); dot(); dash();
      break;
    case 41: //()
      //101101
      dash(); dot(); dash(); dash(); dot(); dash();
      break;
    case 44: //,
      //110011
      dash(); dash(); dot(); dot(); dash(); dash();
      break;
    case 45: //-
      //100001
      dash(); dot(); dot(); dot(); dot(); dash();
      break;
    case 46: //.
      //010101
      dot(); dash(); dot(); dash(); dot(); dash();
      break;
    case 47: ///
      //10010
      dash(); dot(); dot(); dash(); dot();
      break;
    case 48: //0
      //11111
      dash(); dash(); dash(); dash(); dash();
      break;
    case 49: //1
      //01111
      dot(); dash(); dash(); dash(); dash();
      break;
    case 50: //2
      //00111
      dot(); dot(); dash(); dash(); dash();
      break;
    case 51: //3
      //00011
      dot(); dot(); dot(); dash(); dash();
      break;
    case 52: //4
      //00001
      dot(); dot(); dot(); dot(); dash();
      break;
    case 53: //5
      //00000
      dot(); dot(); dot(); dot(); dot();
      break;
    case 54: //6
      //10000
      dash(); dot(); dot(); dot(); dot();
      break;
    case 55: //7
      //11000
      dash(); dash(); dot(); dot(); dot();
      break;
    case 56: //8
      //11100
      dash(); dash(); dash(); dot(); dot();
      break;
    case 57: //9
      //11110
      dash(); dash(); dash(); dash(); dot();
      break;
    case 59: //:
      //111000
      dash(); dash(); dash(); dot(); dot(); dot();
      break;
    case 61: //=
      //10001
      dash(); dot(); dot(); dot(); dash();
      break;
    case 63: //?
      //001100
      dot(); dot(); dash(); dash(); dot(); dot();
      break;
    case 64: //@
      //011010
      dot(); dash(); dash(); dot(); dash(); dot();
      break;
    case 65: //A
      //01
      dot(); dash();
      break;
    case 66: //B
      //1000
      dash(); dot(); dot(); dot();
      break;
    case 67: //C
      //1010
      dash(); dot(); dash(); dot();
      break;
    case 68: //D
      //100
      dash(); dot(); dot();
      break;
    case 69: //E
      //0
      dot();
      break;
    case 70: //F
      //0010
      dot(); dot(); dash(); dot();
      break;
    case 71: //G
      //110
      dash(); dash(); dot();
      break;
    case 72: //H
      //0000
      dot(); dot(); dot(); dot();
      break;
    case 73: //I
      //00
      dot(); dot();
      break;
    case 74: //J
      //0111
      dot(); dash(); dash(); dash();
      break;
    case 75: //K
      //101
      dash(); dot(); dash();
      break;
    case 76: //L
      //0100
      dot(); dash(); dot(); dot();
      break;
    case 77: //M
      //11
      dash(); dash();
      break;
    case 78: //N
      //10
      dash(); dot();
      break;
    case 79: //O
      //111
      dash(); dash(); dash();
      break;
    case 80: //P
      //0110
      dot(); dash(); dash(); dot();
      break;
    case 81: //Q
      //1101
      dash(); dash(); dot(); dash();
      break;
    case 82: //R
      //010
      dot(); dash(); dot();
      break;
    case 83: //S
      //000
      dot(); dot(); dot();
      break;
    case 84: //T
      //1
      dash();
      break;
    case 85: //U
      //001
      dot(); dot(); dash();
      break;
    case 86: //V
      //0001
      dot(); dot(); dot(); dash();
      break;
    case 87: //W
      //011
      dot(); dash(); dash();
      break;
    case 88: //X
      //1001
      dash(); dot(); dot(); dash();
      break;
    case 89: //Y
      //1011
      dash(); dot(); dash(); dash();
      break;
    case 90: //Z
      //1100
      dash(); dash(); dot(); dot();
      break;
  }
  nextLetter();
}

void message(String text) {
  int len = text.length();
  for(int i=0; i<len; ++i) {
    morseLetter(text[i]);
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}
void loop() {
  message("HELLO WORLD. ");
}
