//Pines de los motores
const int IN10 = 8;
const int IN11 = 9;
const int IN20 = 10;
const int IN21 = 11;
//Pines de los botones
const int boton = 2;
const int botonManual = 3;
const int ad = 4;
const int at = 5;
const int de = 6;
const int iz = 7;
//Seteo de botones.
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
    pinMode(boton, INPUT);
    pinMode(ad, INPUT);
    pinMode(at, INPUT);
    pinMode(de, INPUT);
    pinMode(iz, INPUT);
}

void loop()
{
    //Lectura de botones
    valManual = digitalRead(botonManual);
    valBoton = digitalRead(boton);
    valad = digitalRead(ad);
    valat = digitalRead(at);
    valde = digitalRead(de);
    valiz = digitalRead(iz);

    //Modo Automático
    if (valBoton == HIGH)
    {
        Adelante();
        delay(1000);
        Derecha();
        delay(1000);
        Adelante();
        delay(1000);
        Derecha();
        delay(1000);
    }

    //Modo Manual
    if (botonManual == HIGH)
    {
        if (valad == HIGH)
        {
            Adelante();
        }
        if (valat == HIGH)
        {
            Atras();
        }
        if (valde == HIGH)
        {
            Derecha();
        }
        if (valiz == HIGH)
        {
            Izquierda();
        }
    }
}

//Control de Motores
void Adelante()
{
    digitalWrite(IN10, HIGH);
    digitalWrite(IN11, LOW);
    digitalWrite(IN20, HIGH);
    digitalWrite(IN21, LOW);
}
void Atras()
{
    digitalWrite(IN10, LOW);
    digitalWrite(IN11, HIGH);
    digitalWrite(IN20, LOW);
    digitalWrite(IN21, HIGH);
}
void Izquierda()
{
    digitalWrite(IN10, HIGH);
    digitalWrite(IN11, LOW);
    digitalWrite(IN20, LOW);
    digitalWrite(IN21, HIGH);
}
void Derecha()
{
    digitalWrite(IN10, LOW);
    digitalWrite(IN11, HIGH);
    digitalWrite(IN20, HIGH);
    digitalWrite(IN21, LOW);
}