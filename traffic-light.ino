const int RED = 2; // красный подключен к порту 12
const int YLW = 3; // желтый подклчен к порту 9
const int GRN = 4; // зеленый подключен к порту 6
 
const int DELAY = 15000; // продолжительность свечения зеленого и крассного
const int PERIOD = 1000; // полупериод мигания
const int TIME = 3; // число миганий


void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(YLW, OUTPUT);
  pinMode(GRN, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(YLW, HIGH);
  digitalWrite(GRN, HIGH);
}


void loop()
{
  // Светится красный
  digitalWrite(RED, LOW);
  delay(DELAY);
  
  
  // Мигает жёлтый
  for (int i = 0; i < TIME; ++i)
  {
    delay(PERIOD);
    digitalWrite(YLW, LOW);
 
    delay(PERIOD);
    digitalWrite(YLW, HIGH);
  }
  digitalWrite(RED, HIGH);
 
 // Светится зеленый
  digitalWrite(GRN, LOW);
  delay(DELAY);
  

   // Зеленый жёлтый
  for (int i = 0; i < TIME; ++i)
  {
    delay(PERIOD);
    digitalWrite(GRN, LOW);
 
    delay(PERIOD);
    digitalWrite(GRN, HIGH);
  }
  
  digitalWrite(GRN, HIGH);
  digitalWrite(YLW, LOW);
  delay(PERIOD * 3);
  digitalWrite(YLW, HIGH);
  

}
