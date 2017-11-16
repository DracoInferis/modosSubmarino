//Pines de los motores
const int IN10 = 8;
const int IN11 = 9;
const int IN20 = 10;
const int IN21 = 11;
//Pines de los botones
const int ad = 4;
const int at = 5;
const int de = 6;
const int iz = 7;
//Seteo de botones
int valad = 0;
int valat = 0;
int valde = 0;
int valiz = 0;
int valBoton = 0;
int valManual = 0;

void setup()
{
    pinMode(IN10, OUTPUT);
    pinMode(IN11, OUTPUT);
    pinMode(IN20, OUTPUT);
    pinMode(IN21, OUTPUT);
    pinMode(ad, INPUT);
    pinMode(at, INPUT);
    pinMode(de, INPUT);
    pinMode(iz, INPUT);
}

void loop()
{
    //Lectura de botones
    valad = digitalRead(ad);
    valat = digitalRead(at);
    valde = digitalRead(de);
    valiz = digitalRead(iz);

    if (valad == HIGH && valiz == LOW && valat == LOW && valde == LOW)
    {
        Adelante();
        delayMicroseconds(50);
        Parar();
        delayMicroseconds(50);
    }
    if (valat == HIGH && valad == LOW && valiz == LOW && valde == LOW)
    {
        Atras();
        delayMicroseconds(50);
        Parar();
        delayMicroseconds(50);
    }
    if (valde == HIGH && valad == LOW && valat == LOW && valiz == LOW)
    {
        Derecha();
        delayMicroseconds(50);
        Parar();
        delayMicroseconds(50);
    }
    if (valiz == HIGH && valad == LOW && valat == LOW && valde == LOW)
    {
        Izquierda();
        delayMicroseconds(50);
        Parar();
        delayMicroseconds(50);
    }
}

//Control de Motores
void Adelante()
{
    digitalWrite(IN10, HIGH);
    digitalWrite(IN11, LOW);
    digitalWrite(IN20, LOW);
    digitalWrite(IN21, LOW);
}
void Atras()
{
    digitalWrite(IN10, LOW);
    digitalWrite(IN11, HIGH);
    digitalWrite(IN20, LOW);
    digitalWrite(IN21, LOW);
}
void Izquierda()
{
    digitalWrite(IN10, LOW);
    digitalWrite(IN11, LOW);
    digitalWrite(IN20, LOW);
    digitalWrite(IN21, HIGH);
}
void Derecha()
{
    digitalWrite(IN10, LOW);
    digitalWrite(IN11, LOW);
    digitalWrite(IN20, HIGH);
    digitalWrite(IN21, LOW);
}
void Parar()
{
  digitalWrite(IN10, LOW);
  digitalWrite(IN11, LOW);
  digitalWrite(IN20, LOW);
  digitalWrite(IN21, LOW);
}
