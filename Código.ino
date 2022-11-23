const int pinM1A = 2;
const int pinM2A = 3;

char valor;

void setup(){
  pinMode(pinM1A, OUTPUT);
  pinMode(pinM2A, OUTPUT);

  Serial.begin(9600);
}

void loop(){
 
  if(Serial.available()){

    valor = Serial.read();

    if(valor == 'F')
    {
      digitalWrite(pinM1A, LOW);
      digitalWrite(pinM2A, HIGH);
    }
    if(valor == 'B')
    {
      digitalWrite(pinM1A, HIGH);
      digitalWrite(pinM2A, LOW);
    }
    else
    {
      digitalWrite(pinM1A, LOW);
      digitalWrite(pinM2A, LOW);
    }

  }
 
}
