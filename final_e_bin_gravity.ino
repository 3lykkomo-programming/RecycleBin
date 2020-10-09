#define ledgreenG  13     
#define ledgreenP  12   
#define ledgreenA  11 
#define ledgreenL  9     

#include <Servo.h>  //Πρέπει να συμπεριληφθεί
Servo myservo; //Ορισμός μεταβλητής για το χειρισμό του σερβοκινητήρα
int servoPin = 10; //Ο σερβοκινητήρας συνδεδεμένος στο pin 10
int command;            //Int to store app command state.

int SensorReadingcm;
int Red= 7; // led για ένδειξη γεμάτου κάδου
const int Green = 8;  // led για ένδειξη άδειου κάδου


# include <Wire.h>
#include <LiquidCrystal_I2C.h> // βιβλιοθήκη οθόνης LCD με I2C
LiquidCrystal_I2C lcd(0x27,16,2);  // οθόνη 16 στηλών και 2 γραμμών


int UltrasonicTrigerPin=2;
int UltrasonicEchoPin=3;

void setup() {
  Serial.begin(9600);
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  
  pinMode(UltrasonicTrigerPin, OUTPUT);
  pinMode(UltrasonicEchoPin, INPUT);

      pinMode(ledgreenG, OUTPUT);
      pinMode(ledgreenP, OUTPUT);
      pinMode(ledgreenA, OUTPUT);
      digitalWrite(ledgreenG, LOW);
      digitalWrite(ledgreenP, LOW);
      digitalWrite(ledgreenA, LOW);

      
      myservo.attach(servoPin);   
      myservo.write(20); 


   //Initiate the LCD
  lcd.init();
  lcd.backlight();
  delay(2000);
  lcd.clear();
  lcd.print("    Recycle Bin"); // Εκτύπωσε – Εμφάνισε "Recycle Bin" στη 1η γραμμή στο LCD
  lcd.setCursor(0, 1);//1η στήλη και 2η γραμμή
  lcd.print("3o GEL Komotinis"); // Εκτύπωσε – Εμφάνισε "3o GEL Komotinis" στη 2η γραμμή στο LCD 
  
}

void loop()
{
if (Serial.available() > 0) {
  command = Serial.read();
  switch (command) {

case 'G':
  {digitalWrite(ledgreenG, HIGH);
  Serial.println("Παρακαλώ εδώ ρίξτε γυαλί.");
    for ( int pos = 0; pos <= 180; pos += 1) {  
        //Οι τιμές που μπορεί να πάρει η εντολή write είναι από 179-20
        //Πηγαίνει τον σερβοκινητήρα τη θέση pos μοίρες
        myservo.write( pos);  
        delay(30);   //Εισάγει καθυστέρηση 100ms (160*30=4800msec)
         
        }
        break;}
case '0':{digitalWrite(ledgreenG, LOW);
    Serial.println("Ευχαριστώ κέρδισες 5 πόντους!");
 for ( int pos = 180; pos >= 0; pos -= 1) { 
        //Οι τιμές που μπορεί να πάρει η εντολή write είναι από 90-0
        //Πηγαίνει τον σερβοκινητήρα τη θέση pos μοίρες
        myservo.write( pos);  
        delay(30);   //Εισάγει καθυστέρηση 100ms (160*30=4800msec)
        }
break;}

case 'P':
  {digitalWrite(ledgreenP, HIGH);
  Serial.println("Παρακαλώ εδώ ρίξτε χαρτί.");
  for ( int pos = 0; pos <= 179; pos += 1) {  
        //Οι τιμές που μπορεί να πάρει η εντολή write είναι από 179-0
        //Πηγαίνει τον σερβοκινητήρα τη θέση pos μοίρες
        myservo.write( pos);  
        delay(30);   //Εισάγει καθυστέρηση 100ms (160*30=4800msec)
         
        }
  break;}
case '1':{digitalWrite(ledgreenP, LOW);
    Serial.println("Ευχαριστώ κέρδισες 5 πόντους!");
 for ( int pos = 179; pos >= 0; pos -= 1) { 
        //Οι τιμές που μπορεί να πάρει η εντολή write είναι από από 179-0
        //Πηγαίνει τον σερβοκινητήρα τη θέση pos μοίρες
        myservo.write( pos);  
        delay(30);   //Εισάγει καθυστέρηση 100ms (160*30=4800msec)
        }
        break;}

case 'A':
 Serial.println("Παρακαλώ εδώ ρίξτε αλουμίνιο");
  {digitalWrite(ledgreenA, HIGH);
  for ( int pos = 0; pos <= 179; pos += 1) {  
        //Οι τιμές που μπορεί να πάρει η εντολή write είναι από 179-0
        //Πηγαίνει τον σερβοκινητήρα τη θέση pos μοίρες
        myservo.write( pos);  
        delay(30);   //Εισάγει καθυστέρηση 100ms (160*30=4800msec)
         
        }
  break;}
case '2':{digitalWrite(ledgreenA, LOW);
    Serial.println("Ευχαριστώ κέρδισες 15 πόντους!");
 for ( int pos = 179; pos >= 0; pos -= 1) { 
        //Οι τιμές που μπορεί να πάρει η εντολή write είναι από 179-0
        //Πηγαίνει τον σερβοκινητήρα τη θέση pos μοίρες
        myservo.write( pos);  
        delay(30);   //Εισάγει καθυστέρηση 100ms (160*30=4800msec)
        }break;}

case 'L':
 Serial.println("Παρακαλώ εδώ ρίξτε πλαστικό");
  {digitalWrite(ledgreenL, HIGH);
  for ( int pos = 0; pos <= 179; pos += 1) {  
        //Οι τιμές που μπορεί να πάρει η εντολή write είναι από 179-0
        //Πηγαίνει τον σερβοκινητήρα τη θέση pos μοίρες
        myservo.write( pos);  
        delay(30);   //Εισάγει καθυστέρηση 100ms (160*30=4800msec)
         
        }
  break;}
case '3':{digitalWrite(ledgreenL, LOW);
    Serial.println("Ευχαριστώ κέρδισες 10 πόντους!");
 for ( int pos = 179; pos >= 0; pos -= 1) { 
        //Οι τιμές που μπορεί να πάρει η εντολή write είναι από 179-0
        //Πηγαίνει τον σερβοκινητήρα τη θέση pos μοίρες
        myservo.write( pos);  
        delay(30);   //Εισάγει καθυστέρηση 100ms (160*30=4800msec)
        }break;}
}

}
command="";

  
  float duration;
// ενεργοποιείται ο ultrasonic 
  digitalWrite(UltrasonicTrigerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(UltrasonicTrigerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(UltrasonicTrigerPin, LOW);

// υπολογίζεται η απόσταση
  duration = pulseIn(UltrasonicEchoPin, HIGH);

// μετατροπή σε εκατοστά 
SensorReadingcm = duration/ 29.154 / 2;
// υπολογίζω το ύψος των απορριμμάτων μέσα στον κάδο

  // ξεκινάμε με σβηστά led
  digitalWrite (Green, LOW);
  digitalWrite (Red, LOW);

  if (SensorReadingcm >10){  
   	 // είναι σχεδόν άδειος ο κάδος ανακύκλωσης
 	   digitalWrite (Red, LOW);
	   digitalWrite (Green, HIGH);
  	// Serial.println("Empty Recycle Bin"); // εκτύπωση μηνύματος κάδος άδειος

    lcd.setCursor(0,0); //1η στήλη και 1η γραμμή
    lcd.print("Empty RecycleBin"); // Εκτύπωσε – Εμφάνισε το μήνυμα "Empty Bin" στο LCD 
    lcd.setCursor(0,1); //1η στήλη και 2η γραμμή
    lcd.print("  Throw  Paper ");

  } else if (SensorReadingcm < 4) {
   	 // είναι  γεμάτος ο κάδος ανακύκλωσης
  	 digitalWrite (Green, LOW);    
	   digitalWrite (Red, HIGH);

     lcd.setCursor(0,0); //1η στήλη και 1η γραμμή
     lcd.print("Full Recycle Bin"); // Εκτύπωσε – Εμφάνισε το μήνυμα "Full Bin" στο LCD
     lcd.setCursor(0,1); //1η στήλη και 2η γραμμή
     lcd.print(" Don't Throw  "); 
  }
  else{// αναβοσβήνει το πράσινο led
     digitalWrite (Red, LOW);
	   digitalWrite (Green, HIGH);
    delay(200);
    digitalWrite (Green, LOW);
    delay(200);
    digitalWrite (Green, HIGH);
     lcd.setCursor(0,0); //1η στήλη και 1η γραμμή
     lcd.print("Available Space "); // Εκτύπωσε – Εμφάνισε το μήνυμα "Available Space " στο LCD 
     lcd.setCursor(0,1); //1η στήλη και 2η γραμμή
     lcd.print("  Throw Paper  ");
  }
}
