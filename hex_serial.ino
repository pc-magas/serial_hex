void setup() {
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  byte byteArray[]={1,10,255,3,4,2,1,55};
  for(int i=0;i<sizeof(byteArray);i++){
    Serial.print("\\x");
    if(byteArray[i]<16){Serial.print(0);}
    Serial.print(byteArray[i],HEX);
  }
  Serial.println("\n");
  delay(3000);
}
