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
  //venter 15 sekunder
  delay(15000);
  //reset skjerm
  lcd.clear();
}
//kjører koden
void loop() {
  lcd.clear();
  //venter 15 sekunder
  delay(15000);
  //skriver ut lyd-symbol
  lcd.createChar(1,Sound);
  lcd.setCursor(0,0);
  lcd.write(1);
  //skriver ut tekst under symbolet
  lcd.setCursor(0,1);
  lcd.print("Trykk paa meg!");
  //venter 15 sekunder
  delay(15000);
  //reset skjermen
  lcd.clear();
  
  //1. oppgave
  //15 sekund per oppgave
  delay(15000);
  //skriver ut tekst på første linje
  lcd.begin(16,2);
  lcd.print("   1.OPPGAVE:   ");
  //skriver ut tekst på andre linje
  lcd.setCursor(0,2);
  lcd.print("Strekk paa beina");
  //venter 15 sekunder
  delay(15000);
  //reset skjermen
  lcd.clear();
  
  //skriver ut tekst under symbolet
  lcd.setCursor(0,1);
  lcd.print("Trykk paa meg!");
  //venter 15 sekunder
  delay(15000);
  //reset skjermen
  lcd.clear();
  
  //2. oppgave
  //skriver ut tekst på første linje
  lcd.begin(16,2);
  lcd.print("   2.OPPGAVE:   ");
  //skriver ut tekst på andre linje
  lcd.setCursor(0,2);
  lcd.print(" Ta en dyp pust ");
  //venter 15 sekunder
  delay(15000);
  lcd.clear(); 
  
  //skriver ut tekst under symbolet
  lcd.setCursor(0,1);
  lcd.print("Trykk paa meg!");
  //venter 15 sekunder
  delay(15000);
  //reset skjermen
  lcd.clear();
  
  //3. oppgave
  //skriver ut tekst på første linje
  lcd.begin(16,2);
  lcd.print("   GRATULERER!!   ");
  //skriver ut tekst på andre linje
  lcd.setCursor(0,2);
  lcd.print("   DU ER STRAALENDE   ");  
  //venter 15 sekunder
  delay(15000);
  //reset skjermen
  lcd.clear();
  
  //Når brukeren er ferdig
  //skriver ut tekst på første linje
  lcd.begin(16,2);
  lcd.print("  GRATULERER!!  ");
  //skriver ut tekst på andre linje
  lcd.setCursor(0,2);
  lcd.print("DU ER STRAALENDE");
  
}
