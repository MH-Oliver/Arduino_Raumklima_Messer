#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
#define PIN 8 // Hier wird angegeben, an welchem digitalen Pin die WS2812 LEDs bzw. NeoPixel angeschlossen sind
#define NUMPIXELS 40 // Hier wird die Anzahl der angeschlossenen WS2812 LEDs bzw. NeoPixel angegeben
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int pause=100; // 100 Millisekunden Pause bis zur Ansteuerung der nächsten LED.


#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#include "DHT.h" //DHT Bibliothek laden

#define DHTPIN A0 //Der Sensor wird an PIN 2 angeschlossen    

#define DHTTYPE DHT22    // Es handelt sich um den DHT22 Sensor

DHT dht(DHTPIN, DHTTYPE); //Der Sensor wird ab jetzt mit „dth“ angesprochen

void setup() {
  Serial.begin(9600); //Serielle Verbindung starten
  lcd.begin(16, 2);
  dht.begin(); //DHT22 Sensor starten
  pixels.begin(); // Initialisierung der NeoPixel
}

void loop() {
  
  
delay(2000);
  
  float Luftfeuchtigkeit = dht.readHumidity(); //die Luftfeuchtigkeit auslesen und unter „Luftfeutchtigkeit“ speichern
  
  float Temperatur = dht.readTemperature();//die Temperatur auslesen und unter „Temperatur“ speichern
  lcd.clear(); //Display löschen.
  lcd.setCursor(0, 0);
  lcd.print("LF: "); //Im seriellen Monitor den Text und 
  lcd.print(Luftfeuchtigkeit); //die Dazugehörigen Werte anzeigen
  lcd.print(" %");
  lcd.setCursor(0, 1);
  lcd.print("Temp.: ");
  lcd.print(Temperatur);
  lcd.print(" G.C.");

  if (Temperatur > 0)
  {
    pixels.setPixelColor(0, pixels.Color(50,0,0)); // Pixel1 leuchtet in der Farbe Grün
    pixels.show();

          if(Luftfeuchtigkeit >=60 & Luftfeuchtigkeit < 69)
      {
       pixels.setPixelColor(0, pixels.Color(50,10,0));
       pixels.show();
      }
      if(Luftfeuchtigkeit >=69 & Luftfeuchtigkeit < 78)
      {
       pixels.setPixelColor(0, pixels.Color(50,20,0));
       pixels.show();
      }

      if(Luftfeuchtigkeit >=78 & Luftfeuchtigkeit < 87)
      {
       pixels.setPixelColor(0, pixels.Color(50,30,0));
       pixels.show();
      }
      if(Luftfeuchtigkeit >=87 & Luftfeuchtigkeit < 96)
      {
       pixels.setPixelColor(0, pixels.Color(50,40,0));
       pixels.show();
      }

     if(Luftfeuchtigkeit >=96)
      {
       pixels.setPixelColor(0, pixels.Color(50,50,0));
       pixels.show();
      }
  }

  if (Temperatur > 6)
  {
    pixels.setPixelColor(1, pixels.Color(50,0,0)); // Pixel1 leuchtet in der Farbe Grün
    pixels.show();
      if(Luftfeuchtigkeit >=60 & Luftfeuchtigkeit < 69)
      {
       pixels.setPixelColor(1, pixels.Color(50,10,0));
       pixels.show();
      }
      if(Luftfeuchtigkeit >=69 & Luftfeuchtigkeit < 78)
      {
       pixels.setPixelColor(1, pixels.Color(50,20,0));
       pixels.show();
      }

      if(Luftfeuchtigkeit >=78 & Luftfeuchtigkeit < 87)
      {
       pixels.setPixelColor(1, pixels.Color(50,30,0));
       pixels.show();
      }
      if(Luftfeuchtigkeit >=87 & Luftfeuchtigkeit < 96)
      {
       pixels.setPixelColor(1, pixels.Color(50,40,0));
       pixels.show();
      }

     if(Luftfeuchtigkeit >=96)
      {
       pixels.setPixelColor(1, pixels.Color(50,50,0));
       pixels.show();
      }
      
  }
  if (Temperatur > 12)
  {
    pixels.setPixelColor(2, pixels.Color(50,0,0)); // Pixel1 leuchtet in der Farbe Grün
    pixels.show();

        if(Luftfeuchtigkeit >=60 & Luftfeuchtigkeit < 69)
      {
       pixels.setPixelColor(2, pixels.Color(50,10,0));
       pixels.show();
      }
      if(Luftfeuchtigkeit >=69 & Luftfeuchtigkeit < 78)
      {
       pixels.setPixelColor(2, pixels.Color(50,20,0));
       pixels.show();
      }

      if(Luftfeuchtigkeit >=78 & Luftfeuchtigkeit < 87)
      {
       pixels.setPixelColor(2, pixels.Color(50,30,0));
       pixels.show();
      }
      if(Luftfeuchtigkeit >=87 & Luftfeuchtigkeit < 96)
      {
       pixels.setPixelColor(2, pixels.Color(50,40,0));
       pixels.show();
      }

     if(Luftfeuchtigkeit >=96)
      {
       pixels.setPixelColor(2, pixels.Color(50,50,0));
       pixels.show();
      }
  }
  if (Temperatur > 18)
  {
    pixels.setPixelColor(3, pixels.Color(50,0,0)); // Pixel1 leuchtet in der Farbe Grün
    pixels.show();
        if(Luftfeuchtigkeit >=60 & Luftfeuchtigkeit < 69)
      {
       pixels.setPixelColor(3, pixels.Color(50,10,0));
       pixels.show();
      }
      if(Luftfeuchtigkeit >=69 & Luftfeuchtigkeit < 78)
      {
       pixels.setPixelColor(3, pixels.Color(50,20,0));
       pixels.show();
      }

      if(Luftfeuchtigkeit >=78 & Luftfeuchtigkeit < 87)
      {
       pixels.setPixelColor(3, pixels.Color(50,30,0));
       pixels.show();
      }
      if(Luftfeuchtigkeit >=87 & Luftfeuchtigkeit < 96)
      {
       pixels.setPixelColor(3, pixels.Color(50,40,0));
       pixels.show();
      }

     if(Luftfeuchtigkeit >=96)
      {
       pixels.setPixelColor(3, pixels.Color(50,50,0));
       pixels.show();
      }
  }
  if (Temperatur > 24)
  {
    pixels.setPixelColor(4, pixels.Color(50,0,0)); // Pixel1 leuchtet in der Farbe Grün
    pixels.show();
  }
  
if (Temperatur > 30)
  {
    pixels.setPixelColor(5, pixels.Color(50,0,0)); // Pixel1 leuchtet in der Farbe Grün
    pixels.show();

        if(Luftfeuchtigkeit >=60 & Luftfeuchtigkeit < 69)
      {
       pixels.setPixelColor(5, pixels.Color(50,10,0));
       pixels.show();
      }
      if(Luftfeuchtigkeit >=69 & Luftfeuchtigkeit < 78)
      {
       pixels.setPixelColor(5, pixels.Color(50,20,0));
       pixels.show();
      }

      if(Luftfeuchtigkeit >=78 & Luftfeuchtigkeit < 87)
      {
       pixels.setPixelColor(5, pixels.Color(50,30,0));
       pixels.show();
      }
      if(Luftfeuchtigkeit >=87 & Luftfeuchtigkeit < 96)
      {
       pixels.setPixelColor(5, pixels.Color(50,40,0));
       pixels.show();
      }

     if(Luftfeuchtigkeit >=96)
      {
       pixels.setPixelColor(5, pixels.Color(50,50,0));
       pixels.show();
      }
  }
  if (Temperatur > 36)
  {
    pixels.setPixelColor(6, pixels.Color(50,0,0)); // Pixel1 leuchtet in der Farbe Grün
    pixels.show();

        if(Luftfeuchtigkeit >=60 & Luftfeuchtigkeit < 69)
      {
       pixels.setPixelColor(6, pixels.Color(50,10,0));
       pixels.show();
      }
      if(Luftfeuchtigkeit >=69 & Luftfeuchtigkeit < 78)
      {
       pixels.setPixelColor(6, pixels.Color(50,20,0));
       pixels.show();
      }

      if(Luftfeuchtigkeit >=78 & Luftfeuchtigkeit < 87)
      {
       pixels.setPixelColor(6, pixels.Color(50,30,0));
       pixels.show();
      }
      if(Luftfeuchtigkeit >=87 & Luftfeuchtigkeit < 96)
      {
       pixels.setPixelColor(6, pixels.Color(50,40,0));
       pixels.show();
      }

     if(Luftfeuchtigkeit >=96)
      {
       pixels.setPixelColor(6, pixels.Color(50,50,0));
       pixels.show();
      }
  }
  if (Temperatur > 42)
  {
    pixels.setPixelColor(7, pixels.Color(50,0,0)); // Pixel1 leuchtet in der Farbe Grün
    pixels.show();
  }
  
}
