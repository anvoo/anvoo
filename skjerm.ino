// importer lcd
#include <LiquidCrystal.h>

// setterpin verdiene for lcd skjermen
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//tegning av lyd-symbol
byte Sound[8] = {
0b00001,
0b00011,
0b00101,
0b01001,
0b01001,
0b01011,
0b11011,
0b11000
};

void setup() {
  // setter opp hvordan skjermen skal starte
  Serial.begin(9600);
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("      Hei!      ");
  lcd.setCursor(0,1);
  lcd.print("    Velkommen   ");
  delay(7000);
  lcd.clear();
}

void loop() {
  lcd.clear();
  delay(7000);
  //skriver ut lyd-symbol
  lcd.createChar(1,Sound);
  lcd.setCursor(0,0);
  lcd.write(1);
  //skriver ut tekst under symbolet
  lcd.setCursor(0,1);
  lcd.print("Trykk paa meg!");
  delay(7000);
  //reset skjermen
  lcd.clear();
  
  //1. oppgave
  //15 sekund per oppgave
  delay(7000);
  lcd.begin(16,2);
  lcd.print("   1.OPPGAVE:   ");
  lcd.setCursor(0,2);
  lcd.print("Strekk paa beina");
  delay(7000);
  lcd.clear();
  
  //skriver ut tekst under symbolet
  lcd.setCursor(0,1);
  lcd.print("Trykk paa meg!");
  delay(7000);
  //reset skjermen
  lcd.clear();
  
  //2. oppgave
  lcd.begin(16,2);
  lcd.print("   2.OPPGAVE:   ");
  lcd.setCursor(0,2);
  lcd.print(" Ta en dyp pust ");
  delay(7000);
  lcd.clear(); 
  
  //skriver ut tekst under symbolet
  lcd.setCursor(0,1);
  lcd.print("Trykk paa meg!");
  delay(7000);
  //reset skjermen
  lcd.clear();
  
  //3. oppgave
  lcd.begin(16,2);
  lcd.print("   GRATULERER!!   ");
  lcd.setCursor(0,2);
  lcd.print("   DU ER STRAALENDE   ");  
  delay(7000);
  lcd.clear();
  
  //Når brukeren er ferdig
  lcd.begin(16,2);
  lcd.print("  GRATULERER!!  ");
  lcd.setCursor(0,2);
  lcd.print("DU ER STRAALENDE");
  
}
