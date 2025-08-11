#include <BleKeyboard.h>
#include <BleMouse.h>


/* 
Keyboard Layout:
    [kP2] [kP3] [kP4]
[kP1] [kP6] [kP7] [kP8]
[kP5]
*/
int kP1 = 13;
int kP2 = 12;
int kP3 = 14;
int kP4 = 27;
int kP5 = 15;
int kP6 = 2;
int kP7 = 0;
int kP8 = 4;

int directionSW = 23;

int mB1 = 5;
int mB2 = 18;
int mouseMillis;
int mouseDelay;

class Alphabet_1
{
  int buttonpin_11;

  int extra_11;
  int extra_12;
  int extra_13;
  int extra_14;
  int extra_15;
  int extra_16;
  int extra_17;

  char letter_10;

  int delayTime;
  unsigned long previousMillis;

  public:
  Alphabet_1(int pin_11, char key_10, int ext_11, int ext_12, int ext_13, int ext_14, int ext_15, int ext_16, int ext_17)
  {
    buttonpin_11 = pin_11;
    pinMode(buttonpin_11, INPUT_PULLUP);

    extra_11 = ext_11;
    pinMode(extra_11, INPUT_PULLUP);
    extra_12 = ext_12;
    pinMode(extra_12, INPUT_PULLUP);
    extra_13 = ext_13;
    pinMode(extra_13, INPUT_PULLUP);
    extra_14 = ext_14;
    pinMode(extra_14, INPUT_PULLUP);
    extra_15 = ext_15;
    pinMode(extra_15, INPUT_PULLUP);
    extra_16 = ext_16;
    pinMode(extra_16, INPUT_PULLUP);
    extra_17 = ext_17;
    pinMode(extra_17, INPUT_PULLUP);

    letter_10 = key_10;

    delayTime = 275;
    previousMillis = 0;
  }

  void Update()
  {
    unsigned long currentMillis = millis();

    if((digitalRead(buttonpin_11) == LOW)  && (digitalRead(extra_11) == HIGH) && (digitalRead(extra_12) == HIGH) && (digitalRead(extra_13) == HIGH) && (digitalRead(extra_14) == HIGH) && (digitalRead(extra_15) == HIGH) && (digitalRead(extra_16) == HIGH) && (digitalRead(extra_17) == HIGH) && (currentMillis - previousMillis >= delayTime))
    {
      Keyboard.write(letter_10);
    }
    
  }
};

class Alphabet_2 {
  int buttonpin_21;
  int buttonpin_22;

  int extra_21;
  int extra_22;
  int extra_23;
  int extra_24;
  int extra_25;
  int extra_26;

  char letter_20;

  int delayTime;
  unsigned long previousMillis;

  public:
  Alphabet_2(int pin_21, int pin_22, char key_20, int ext_21, int ext_22, int ext_23, int ext_24, int ext_25, int ext_26)
  {
    buttonpin_21 = pin_21;
    pinMode(buttonpin_21, INPUT_PULLUP);
    buttonpin_22 = pin_22;
    pinMode(buttonpin_22, INPUT_PULLUP);

    extra_21 = ext_21;
    pinMode(extra_21, INPUT_PULLUP);
    extra_22 = ext_22;
    pinMode(extra_22, INPUT_PULLUP);
    extra_23 = ext_23;
    pinMode(extra_23, INPUT_PULLUP);
    extra_24 = ext_24;
    pinMode(extra_24, INPUT_PULLUP);
    extra_25 = ext_25;
    pinMode(extra_25, INPUT_PULLUP);
    extra_26 = ext_26;
    pinMode(extra_26, INPUT_PULLUP);

    letter_20 = key_20;

    delayTime = 275;
    previousMillis = 0;
  }

  void Update() {
    unsigned long currentMillis = millis();

    while((digitalRead(buttonpin_21) == LOW) && (digitalRead(buttonpin_22) == LOW) && (digitalRead(extra_21) == HIGH) && (digitalRead(extra_22) == HIGH) && (digitalRead(extra_23) == HIGH) && (digitalRead(extra_24) == HIGH) && (digitalRead(extra_25) == HIGH) && (digitalRead(extra_26) == HIGH) && (currentMillis - previousMillis >= delayTime)) {
      Keyboard.write(letter_20);
      previousMillis = currentMillis;

   }
  }
};

class Alphabet_3 {
  int buttonpin_31;
  int buttonpin_32;
  int buttonpin_33;

  int extra_31;
  int extra_32;
  int extra_33;
  int extra_34;
  int extra_35;

  char letter_30;

  int delayTime;
  unsigned long previousMillis;

  public:
  Alphabet_3(int pin_31, int pin_32, int pin_33, char key_30, int ext_31, int ext_32, int ext_33, int ext_34, int ext_35)
  {
    buttonpin_31 = pin_31;
    pinMode(buttonpin_31, INPUT_PULLUP);
    buttonpin_32 = pin_32;
    pinMode(buttonpin_32, INPUT_PULLUP);
    buttonpin_33 = pin_33;
    pinMode(buttonpin_33, INPUT_PULLUP);

    extra_31 = ext_31;
    pinMode(extra_31, INPUT_PULLUP);
    extra_32 = ext_32;
    pinMode(extra_32, INPUT_PULLUP);
    extra_33 = ext_33;
    pinMode(extra_33, INPUT_PULLUP);
    extra_34 = ext_34;
    pinMode(extra_34, INPUT_PULLUP);
    extra_35 = ext_35;
    pinMode(extra_35, INPUT_PULLUP);

    letter_30 = key_30;

    delayTime = 275;
    previousMillis = 0;
  }

  void Update() {
    unsigned long currentMillis = millis();

    while((digitalRead(buttonpin_31) == LOW) && (digitalRead(buttonpin_32) == LOW) && (digitalRead(buttonpin_33) == LOW) && (digitalRead(extra_31) == HIGH) && (digitalRead(extra_32) == HIGH) && (digitalRead(extra_33) == HIGH) && (digitalRead(extra_34) == HIGH) && (digitalRead(extra_35) == HIGH) && (currentMillis - previousMillis >= delayTime)) {
      Keyboard.write(letter_30);
      previousMillis = currentMillis;
    }
  }
};

class Alphabet_4 {
  int buttonpin_41;
  int buttonpin_42;
  int buttonpin_43;
  int buttonpin_44;

  int extra_41;
  int extra_42;
  int extra_43;
  int extra_44;

  char letter_40;

  int delayTime;
  unsigned long previousMillis;

  public:
  Alphabet_4(int pin_41, int pin_42, int pin_43, int pin_44, char key_40, int ext_41, int ext_42, int ext_43, int ext_44)
  {
    buttonpin_41 = pin_41;
    pinMode(buttonpin_41, INPUT_PULLUP);
    buttonpin_42 = pin_42;
    pinMode(buttonpin_42, INPUT_PULLUP);
    buttonpin_43 = pin_43;
    pinMode(buttonpin_43, INPUT_PULLUP);
    buttonpin_44 = pin_44;
    pinMode(buttonpin_44, INPUT_PULLUP);

    extra_41 = ext_41;
    pinMode(extra_41, INPUT_PULLUP);
    extra_42 = ext_42;
    pinMode(extra_42, INPUT_PULLUP);
    extra_43 = ext_43;
    pinMode(extra_43, INPUT_PULLUP);
    extra_44 = ext_44;
    pinMode(extra_44, INPUT_PULLUP);

    letter_40 = key_40;

    delayTime = 275;
    previousMillis = 0;
  }

  void Update() {
    unsigned long currentMillis = millis();
    
    while((digitalRead(buttonpin_41) == LOW) && (digitalRead(buttonpin_42) == LOW) && (digitalRead(buttonpin_43) == LOW) && (digitalRead(buttonpin_44) == LOW) && (digitalRead(extra_41) == HIGH) && (digitalRead(extra_42) == HIGH) && (digitalRead(extra_43) == HIGH) && (digitalRead(extra_44) == HIGH) && (currentMillis - previousMillis >= delayTime)) {
      Keyboard.write(letter_40);
      previousMillis = currentMillis;
    }
  }
};

Alphabet_1 a1(kP1, 's', kP2, kP3, kP4, kP5, kP6, kP7, kP8);
Alphabet_1 a2(kP2, 't', kP1, kP3, kP4, kP5, kP6, kP7, kP8);
Alphabet_1 a3(kP3, 'r', kP1, kP2, kP4, kP5, kP6, kP7, kP8);
Alphabet_1 a4(kP4, 'a', kP1, kP2, kP3, kP5, kP6, kP7, kP8);
Alphabet_1 a5(kP5, 'o', kP1, kP2, kP3, kP4, kP6, kP7, kP8);
Alphabet_1 a6(kP6, 'i', kP1, kP2, kP3, kP4, kP5, kP7, kP8);
Alphabet_1 a7(kP7, 'y', kP1, kP2, kP3, kP4, kP5, kP6, kP8);
Alphabet_1 a8(kP8, 'e', kP1, kP2, kP3, kP4, kP5, kP6, kP7);

Alphabet_2 b1(kP5, kP8, 'b', kP1, kP2, kP3, kP4, kP6, kP7);
Alphabet_2 b2(kP7, kP8, 'c', kP1, kP2, kP3, kP4, kP5, kP6);
Alphabet_2 b3(kP3, kP4, 'f', kP1, kP2, kP5, kP6, kP6, kP8);
Alphabet_2 b4(kP2, kP3, 'g', kP1, kP4, kP5, kP6, kP7, kP8);
Alphabet_2 b5(kP6, kP8, 'h', kP1, kP2, kP3, kP4, kP5, kP7);
Alphabet_2 b6(kP1, kP2, 'j', kP3, kP4, kP5, kP6, kP7, kP8);
Alphabet_2 b7(kP5, kP7, 'k', kP1, kP2, kP3, kP4, kP6, kP8);
Alphabet_2 b8(kP5, kP6, 'n', kP1, kP2, kP3, kP4, kP7, kP8);
Alphabet_2 b9(kP6, kP7, 'u', kP1, kP2, kP3, kP4, kP5, kP8);
Alphabet_2 b10(kP1, kP3, 'v', kP2, kP4, kP5, kP6, kP7, kP8);
Alphabet_2 b11(kP1, kP4, 'w', kP2, kP3, kP5, kP6, kP7, kP8);
Alphabet_2 b12(kP4, kP8, KEY_RETURN, kP1, kP2, kP3, kP5, kP6, kP7);
Alphabet_2 b13(kP4, kP7, '.', kP1, kP2, kP3, kP5, kP6, kP8);
Alphabet_2 b14(kP4, kP6, ',', kP1, kP2, kP3, kP5, kP7, kP8);
Alphabet_2 b15(kP4, kP5, '/', kP1, kP2, kP3, kP6, kP7, kP8);
Alphabet_2 b16(kP2, kP6, '!', kP1, kP3, kP4, kP5, kP7, kP8);
Alphabet_2 b17(kP3, kP8, KEY_BACKSPACE, kP1, kP2, kP4, kP5, kP6, kP7);
Alphabet_2 b18(kP3, kP6, KEY_DELETE, kP1, kP2, kP4, kP5, kP7, kP8);

Alphabet_3 c1(kP2, kP3, kP4, 'd', kP1, kP5, kP6, kP7, kP8);
Alphabet_3 c2(kP6, kP7, kP8, 'l', kP1, kP2, kP3, kP4, kP5);
Alphabet_3 c3(kP5, kP6, kP7, 'm', kP1, kP2, kP3, kP4, kP8);
Alphabet_3 c4(kP5, kP6, kP8, 'p', kP1, kP2, kP3, kP4, kP7);
Alphabet_3 c5(kP1, kP2, kP4, 'q', kP3, kP5, kP6, kP7, kP8);
Alphabet_3 c6(kP1, kP2, kP3, 'x', kP4, kP5, kP6, kP7, kP8);
Alphabet_3 c7(kP3, kP4, kP5, KEY_ESC, kP1, kP2, kP6, kP7, kP8);
Alphabet_3 c8(kP4, kP6, kP7, '\'', kP1, kP2, kP3, kP5, kP8);

Alphabet_4 d1(kP1, kP2, kP3, kP4, 'z', kP5, kP6, kP7, kP8);
Alphabet_4 d2(kP2, kP3, kP4, kP5, KEY_TAB, kP1, kP6, kP7, kP8);
Alphabet_4 d3(kP5, kP6, kP7, kP8, KEY_SPACE, kP1, kP2, kP3, kP4);

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(directionSW, INPUT_PULLUP);

  pinMode(mB1, INPUT_PULLUP);
  pinMode(mB2, INPUT_PULLUP);
  mouseMillis = 0;
  mouseDelay = 250;

  Keyboard.begin();
}

void loop()
{
  // put your main code here, to run repeatedly:
  while(bleDevice.isConnected())
  {
    //Keyboard Updates
    d1.Update();
    d2.Update();
    d3.Update();

    c1.Update();
    c2.Update();
    c3.Update();
    c4.Update();
    c5.Update();
    c6.Update();
    c7.Update();
    c8.Update();

    b1.Update();
    b2.Update();
    b3.Update();
    b4.Update();
    b5.Update();
    b6.Update();
    b7.Update();
    b8.Update();
    b9.Update();
    b10.Update();
    b11.Update();
    b12.Update();
    b13.Update();
    b14.Update();
    b15.Update();
    b16.Update();
    b17.Update();
    b18.Update();

    a1.Update();
    a2.Update();
    a3.Update();
    a4.Update();
    a5.Update();
    a6.Update();
    a7.Update();
    a8.Update();

    //Mouse Functions
    unsigned long McurrentMillis = millis();
    if(digitalRead(directionSW) == LOW)
    {
      if((digitalRead(mB1) == LOW) && (McurrentMillis - mouseMillis >= mouseDelay))
      {
        Mouse.click(MOUSE_LEFT);
        mouseMillis = McurrentMillis;
      }

      if((digitalRead(mB2) == LOW) && (McurrentMillis - mouseMillis >= mouseDelay))
      {
        Mouse.click(MOUSE_RIGHT);
        mouseMillis = McurrentMillis;
      }
    }
    else if(digitalRead(directionSW) == HIGH)
    {
      if((digitalRead(mB2) == LOW) && (McurrentMillis - mouseMillis >= mouseDelay))
      {
        Mouse.click(MOUSE_LEFT);
        mouseMillis = McurrentMillis;
      }

      if((digitalRead(mB1) == LOW) && (McurrentMillis - mouseMillis >= mouseDelay))
      {
        Mouse.click(MOUSE_RIGHT);
        mouseMillis = McurrentMillis;
      }
    }
  }
}
