//definerer all notene, slik at vi har et bibliotek
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

//oppretter ulike verdier og viser til hvilken PIN de tilhører
int LED1 = 9;
int LED2 = 8; 
int LED3 = 7;
int LED4 = 6;
int LED5 = 5;
int LED6 = 4;
int LED7 = 3;
int LED8 = 2;
int bryter = 13;
int buzzer= 10;

//sang
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};
int duration[] = {4, 8, 8, 4, 4, 4, 4, 4};

//metode som spiller sang
void lyd() {
  //for-loop som itererer gjennom notene i melodien

  for (int thisNote = 0; thisNote < 8; thisNote++) {

    int noteDuration = 1000 / duration[thisNote];

    tone(10, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.3;

    delay(pauseBetweenNotes);

    // stopper å spille sangen:
    if (digitalRead(bryter) == HIGH) {
      noTone(buzzer);
      
    }

  }

}
//metode for varsel-lyd
void varsel() {
    //spiller en tone 
    tone(buzzer, 1000);
    //venter 1 sekund
    delay(1000);
  tone(buzzer, 1500); 
    delay(1000);
    tone(buzzer, 2000); 
  delay(1000);
  tone(buzzer, 1500);
  //slutter å spille lyd
  noTone(10);
}
//metode som styrer hvordan lyset skal blinke
 void blinkLys() { 
  //alle lys skrus på
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, HIGH);
  //venter 1 sekund
  delay(1000);
  //alle lys skrus av
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  //venter 1 sekund
  delay(1000);
  //alle lys skrus på
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, HIGH);
  //venter 1 sekund
  delay(1000);
  //alle lys skrus av
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  //venter 1 sekund
  delay(1000);
  //alle lys skrus på
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, HIGH);
  //venter 1 sekund
  delay(1000);
  //alle lys skrus av
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
 }
//aktiverer LED-lys, piezo og bryter på INPUT siden vi skal lese inne signalene
void setup() {
  pinMode (LED2, OUTPUT);  
  pinMode (LED3, OUTPUT); 
  pinMode (LED1, OUTPUT);
  pinMode (LED4, OUTPUT); 
  pinMode (LED5, OUTPUT);
  pinMode (LED6, OUTPUT);
  pinMode (LED7, OUTPUT);
  pinMode (LED8, OUTPUT);
  pinMode (buzzer, OUTPUT);
  pinMode (bryter, INPUT_PULLUP); 

}
  //arduino kjører
  void loop() {
  //hvis knappen ikke er trykket på
  if (digitalRead(bryter) == LOW) {
    //venter 3 sekund
    delay(3000);
    //varsler brukeren
    varsel();
    
  }
    //hvis knappen trykkes på
    if (digitalRead(bryter) == HIGH) { //lager en loop som forteller hva programmet skal gjøre 
      //lyset blinker for å bekrefte input fra brukeren
      blinkLys();
      //lyd som også bekrefter input
      lyd();
    }
    
}

