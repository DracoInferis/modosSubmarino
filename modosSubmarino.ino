int IN10 = 9;
int IN11 = 10;
int IN20 = 11;
int IN21 = 12;
int boton = 3;
int botonManual = 4;
int ad = 5;
int at = 6;
int de = 7;
int iz = 8;
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
        derecha();
        delay(1000);
    }
    else
    {
    }

    //Modo Manual
    if (botonManual == HIGH)
    {
        if (ad == HIGH)
        {
            Adelante();
        }
        if (at == HIGH)
        {
            Atras();
        }
        if (de == HIGH)
        {
            Derecha();
        }
        if (iz == HIGH)
        {
            Izquierda();
        }
    }
}

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