#define shortLightTime 250 //短亮時間
#define longLightTime 500  //長亮時間
#define codeSpaceTime 250 //亮暗間格
#define letterSpaceTime 500 //字母間格

char input;// to save the input

void setup() {
  Serial.begin(115200);
  ledcSetup(0,2000,8);
  ledcAttachPin(13, 0);
}

void loop() {
  ledcWriteTone(0,2000);
   if (Serial.available()){
     input = Serial.read();//read the input
     Serial.println (input); 
       
      if (input == 'a' || input == 'A') {lA();}
      if (input == 'b' || input == 'B') {lB();}
      if (input == 'c' || input == 'C') {lC();}
      if (input == 'd' || input == 'D') {lD();}
      if (input == 'e' || input == 'E') {lE();}
      if (input == 'f' || input == 'F') {lF();}
      if (input == 'g' || input == 'G') {lG();}
      if (input == 'h' || input == 'H') {lH();}
      if (input == 'i' || input == 'I') {lI();}
      if (input == 'j' || input == 'J') {lJ();}
      if (input == 'k' || input == 'K') {lK();}
      if (input == 'l' || input == 'L') {lL();}
      if (input == 'm' || input == 'M') {lM();}
      if (input == 'n' || input == 'N') {lN();}
      if (input == 'o' || input == 'O') {lO();}
      if (input == 'p' || input == 'P') {lP();}
      if (input == 'q' || input == 'Q') {lQ();}
      if (input == 'r' || input == 'R') {lR();}
      if (input == 's' || input == 'S') {lS();}
      if (input == 't' || input == 'T') {lT();}
      if (input == 'u' || input == 'U') {lU();}
      if (input == 'v' || input == 'V') {lV();}
      if (input == 'w' || input == 'W') {lW();}
      if (input == 'x' || input == 'X') {lX();}
      if (input == 'y' || input == 'Y') {lY();}
      if (input == 'z' || input == 'Z') {lZ();}
      if (input == '1') {n1();}// the numbers
      if (input == '2') {n2();}
      if (input == '3') {n3();}
      if (input == '4') {n4();}
      if (input == '5') {n5();}
      if (input == '6') {n6();}
      if (input == '7') {n7();}
      if (input == '8') {n8();}
      if (input == '9') {n9();}
      if (input == '0') {n0();}
      if (input == ' ') {space();}//the space
   }
}


//字母及數字的摩斯
void lA () {Dot();Dash();LetterSpace();}//letter A in morse code!
void lB () {Dash();Dot();Dot();Dot();LetterSpace();}//same for B
void lC () {Dash();Dot();Dash();Dot();LetterSpace();}
void lD () {Dash();Dot();Dot();LetterSpace();}
void lE () {Dot();LetterSpace();}
void lF () {Dot();Dot();Dash();Dot();LetterSpace();}
void lG () {Dash();Dash();Dot();LetterSpace();}
void lH () {Dot();Dot();Dot();Dot();LetterSpace();}
void lI () {Dot();Dot();LetterSpace();}
void lJ () {Dot();Dash();Dash();Dash();LetterSpace();}
void lK () {Dash();Dot();Dash();LetterSpace();}
void lL () {Dot();Dash();Dot();Dot();LetterSpace();}
void lM () {Dash();Dash();LetterSpace();}
void lN () {Dash();Dot();LetterSpace();}
void lO () {Dash();Dash();Dash();LetterSpace();}
void lP () {Dot();Dash();Dash();Dot();LetterSpace();}
void lQ () {Dash();Dash();Dot();Dash();LetterSpace();}
void lR () {Dot();Dash();Dot();LetterSpace();}
void lS () {Dot();Dot();Dot();LetterSpace();}
void lT () {Dash();LetterSpace();}
void lU () {Dot();Dot();Dash();LetterSpace();}
void lV () {Dot();Dot();Dot();Dash();LetterSpace();}
void lW () {Dot();Dash();Dash();LetterSpace();}
void lX () {Dash();Dot();Dot();Dash();LetterSpace();}
void lY () {Dash();Dot();Dash();Dash();LetterSpace();}
void lZ () {Dash();Dash();Dot();Dot();LetterSpace();}
void n1 () {Dot();Dash();Dash();Dash();Dash();LetterSpace();}//number 1 in morse code
void n2 () {Dot();Dot();Dash();Dash();Dash();LetterSpace();}
void n3 () {Dot();Dot();Dot();Dash();Dash();LetterSpace();}
void n4 () {Dot();Dot();Dot();Dot();Dash();LetterSpace();}
void n5 () {Dot();Dot();Dot();Dot();Dot();LetterSpace();}
void n6 () {Dash();Dot();Dot();Dot();Dot();LetterSpace();}
void n7 () {Dash();Dash();Dot();Dot();Dot();LetterSpace();}
void n8 () {Dash();Dash();Dash();Dot();Dot();LetterSpace();}
void n9 () {Dash();Dash();Dash();Dash();Dot();LetterSpace();}
void n0 () {Dash();Dash();Dash();Dash();Dash();LetterSpace();}
void space () {delay (1200);}//space between words

void Dot () {ledcWriteTone(0,1000); delay (shortLightTime);ledcWriteTone(0,0); delay (codeSpaceTime);}
void Dash () {ledcWriteTone(0,1000); delay (longLightTime); ledcWriteTone(0,0);  delay (codeSpaceTime);}
void LetterSpace () {delay(letterSpaceTime);}
