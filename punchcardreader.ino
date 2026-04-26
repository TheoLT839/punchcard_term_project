/*
Bryson Crader & Theodore Tran
CS 2810 Computer Architecture Sec. 001
Term Project - Punch Card Reader
Primary Author: Bryson Crader
*/
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4); // I2C address 0x27, 20 column and 4 rows


void setup() { 
    Serial.begin(9600); //initialize serial communication
    pinMode(A0, INPUT);
    pinMode(A1, INPUT);
    pinMode(A2, INPUT);
    pinMode(A3, INPUT);
    pinMode(A4, INPUT);
    pinMode(A5, INPUT);
    pinMode(A6, INPUT);
    pinMode(A7, INPUT);

    pinMode(A8, OUTPUT);
    pinMode(A9, OUTPUT);

    lcd.init(); // initialize the lcd
    lcd.backlight();

}

char readChar() {
    unsigned int val = 0;
    int thresholds[] = {20, 30, 25, 40, 10, 15, 30, 20};
    for (int i = 0; i < 8; i++) {
        lcd.setCursor(i, 3);
        int read = analogRead(i);
        int bit = (read > thresholds[i] ? 1 : 0) << i;
        lcd.print(bit>0?"1":"0");
        
        if (bit > 0){
            int bitVal = (int)(pow(2, abs(7-i))+0.5);
            val += bitVal;
        }
    }
    return (char)val;
}



char strBuffer[20];
int strPos = 0;
int sameCount;
int sameThreshold = 50;
char lastChar = ' ';

void loop() {
    char c = readChar();
    lcd.setCursor(0, 1);
    lcd.print(c);

    // by default, all reading true == -1, if this is true, there should be no card.
    // so we simple stall in this case until something is read.
    if (c < 0) {
        sameCount = 0;
    }

    // in any other case, if the reading is consistent between loops, record how long the character is the same
    if (lastChar == c) {
        sameCount++;
    }

    // if the letter has been the same for a while, toggle lights
    // Once the card moves again, write the previously read letter to a string
    if (sameCount > sameThreshold) {
        digitalWrite(A9, HIGH);
        digitalWrite(A8, LOW);
        if (lastChar != c) {
            // push last char to strBuffer
            strBuffer[strPos++] = lastChar;
            sameCount = 0;
        }
    } else {
        digitalWrite(A9, LOW);
        digitalWrite(A8, HIGH);
    }

    if (lastChar != c) {
        sameCount = 0;
    }

    // set the last nchar to the current char of this loop
    lastChar = c;

    // if the string is too long, clear it
    if (strPos > 19) {
        strPos = 0;
    }

    lcd.setCursor(0, 0);
    for (int i = 0; i < strPos; i++)
        lcd.print(strBuffer[i]);

    Serial.print(sameCount);
    Serial.print(" > ");
    Serial.println(sameThreshold);



    delay(10);
    lcd.clear();
}
