void setup() {
  pinMode(12,OUTPUT); //definimos pin 12 como salida
  pinMode(11,OUTPUT); //definimos pin 11 como salida
  pinMode(10,OUTPUT); //definimos pin 10 como salida
  pinMode(9,OUTPUT); //definimos pin 9 como salida
}

void loop() {
  int Volumen = map(analogRead(A0),0,1023,0,4); //creamos la variable Volumen
  if (Volumen==0){ //verificamos si el valor del volumen es 0
    digitalWrite(12,LOW); //apagamos el LED
    digitalWrite(11,LOW); //apagamos el LED
    digitalWrite(10,LOW); //apagamos el LED
    digitalWrite(9,LOW); //apagamos el LED
  }
  else if (Volumen==1){ //verificamos si el valor del volumen es 1
    digitalWrite(12,HIGH); //encendemos el LED
    digitalWrite(11,LOW); //apagamos el LED
    digitalWrite(10,LOW); //apagamos el LED
    digitalWrite(9,LOW); //apagamos el LED
  }
  else if (Volumen==2){ //verificamos si el valor del volumen es 1
    digitalWrite(12,HIGH); //encendemos el LED
    digitalWrite(11,HIGH); //encendemos el LED
    digitalWrite(10,LOW); //apagamos el LED
    digitalWrite(9,LOW); //apagamos el LED
  }
  else if (Volumen==3){ //verificamos si el valor del volumen es 1
    digitalWrite(12,HIGH); //encendemos el LED
    digitalWrite(11,HIGH); //encendemos el LED
    digitalWrite(10,HIGH); //encendemos el LED
    digitalWrite(9,LOW); //apagamos el LED
  }
  else{ //de lo contrario
    digitalWrite(12,HIGH); //encendemos el LED
    digitalWrite(11,HIGH); //encendemos el LED
    digitalWrite(10,HIGH); //encendemos el LED
    digitalWrite(9,HIGH); //encendemos el LED
  }
}
