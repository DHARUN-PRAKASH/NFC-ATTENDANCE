void setup ( )
{
  Serial.begin(9600) ;
  Serial.println("CLEARDATA") ;
  Serial.println("LABEL, Date, Time , EmployeeID") ;
  delay(1000);
}
unsigned int idd;
void loop ( )
{
  Serial.println((String)"DATA, DATE, TIME,"+idd);
  idd++;
  delay(4000);
}