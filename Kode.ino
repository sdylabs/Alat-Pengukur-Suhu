int nilaiAnalog;
float nilaiTegangan;
float nilaiSuhu;

void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);

}

void loop()
{
  nilaiAnalog = analogRead(A0);
  nilaiTegangan = (float(nilaiAnalog)/1023)*5;
  
  // 10mV = perubahan 1 derajat celcius
  // 1 mV = 1/10 derajat celcius
  nilaiSuhu = ((nilaiTegangan - 0.5)*1000)/10;
  Serial.print("Suhu :");
  Serial.println(nilaiSuhu);

}
