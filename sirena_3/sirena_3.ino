/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int xiulet = 9;        // donar nom al pin 9 de l’Arduino
const int pot0 = A0;         // donar nom al pin A0 de l’Arduino
int valPot0;                 // guardar valor del potenciometre  

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
  Serial.begin(9600); 
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);    // llegir valor potenciòmetre 
  Serial.println(valPot0);
  tone(xiulet, 1000, valPot0);    // xiulet de durada valPot0
  delay(100);              // esperar valPot0 del xiulet + valPot0 silenci

    valPot0 = analogRead(pot0);    // llegir valor potenciòmetre 
  Serial.println(valPot0);
  tone(xiulet, 800, valPot0);    // xiulet de durada valPot0
  delay(100);              // esperar valPot0 del xiulet + valPot0 silenci

    valPot0 = analogRead(pot0);    // llegir valor potenciòmetre 
  Serial.println(valPot0);
  tone(xiulet, 200, valPot0);    // xiulet de durada valPot0
  delay(100);              // esperar valPot0 del xiulet + valPot0 silenci

    valPot0 = analogRead(pot0);    // llegir valor potenciòmetre 
  Serial.println(valPot0);
  tone(xiulet, 500, valPot0);    // xiulet de durada valPot0
  delay(100);              // esperar valPot0 del xiulet + valPot0 silenci
}

//********** Funcions *************************************************************
