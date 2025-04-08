#include <iostream>
using namespace std;

/*Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
de la división A/B.*/
void ejercicio1();

/*Escriba un programa que pida un número N e imprima en pantalla si es par o impar.*/
void ejercicio2();

/*Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.*/
void ejercicio3();

/*Escriba un programa que pida dos números A y B e imprima en pantalla el menor.*/
void ejercicio4();

/*Escriba un programa que pida dos números A y B e imprima en pantalla la división
A/B con redondeo.*/
void ejercicio5();

/*Escriba un programa que pida dos números A y B e imprima en pantalla la potencia
AB, sin hacer uso de librerías matemáticas.*/
void ejercicio6();

/*Escriba un programa que pida un número N e imprima en pantalla la suma de todos
los números entre 0 y N (incluyéndose el mismo)*/
void ejercicio7();

/*Escriba un programa que pida un número N e imprima en pantalla su factorial.
Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:*/
void ejercicio8();

/* Escriba un programa que pida un número N e imprima el perímetro y área de un
círculo con radio N. Nota: use 3.1416 como una aproximación de pi.*/
void ejercicio9();

/*Escriba un programa que pida un número N e imprima en pantalla todos los múlti-
los de dicho número entre 1 y 100.*/
void ejercicio10();

/*Escriba un programa que pida un número N e imprima en pantalla su tabla de mul-
tiplicar hasta 10xN.*/
void ejercicio11();

/*Escriba un programa que pida un número N e imprima todas las potencias desde N1
hasta N5*/
void ejercicio12();

/*Escriba un programa que pida un número N e imprima todos los divisores de N.*/
void ejercicio13();

/* Escriba un programa que imprima dos columnas paralelas, una con los números del
1 al 50 y otra con los números del 50 al 1.*/
void ejercicio14();


/*Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla la suma de todos los números ingresados.*/
void ejercicio15();


/*Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero).*/
void ejercicio16();

/*Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el mayor de todos los números ingresados.*/
void ejercicio17();

/*Escriba un programa que pida un número N e imprima si es o no un número primo.*/
void ejercicio19();

/*Escriba un programa que pida un número N e imprima si es o no un palíndromo*/
void ejercicio20();

/*Escriba un programa que pida un carácter C, si es una letra la debe convertir de
mayúscula a minúscula y viceversa e imprimirla.*/
void ejercicio27();

int main()
{
    ejercicio27();
    return 0;
}

void ejercicio1() {
    int A, B;
    cout << "Ingrese dos numeros a dividir: "<< endl;
    cin >> A >> B;
    cout << "El residuo de la division de " << A << "/" << B << " es: " << A / B << endl;

}
void ejercicio2()
{
    int n;
    cout <<"Ingrese un numero: ";
    cin >>n;

    if(n/2==2)
    {
        cout <<"El numero " <<n <<" es impar";
    }
    else
    {
        cout <<"El numero " << n << " es par" << endl;
    }
}
void ejercicio3()
{
    int a,b;
    cout <<"Ingrese dos valores: ";
    cin >> a>> b;

    if(a>b)
    {
        cout <<"El mayor es: " <<a <<endl;
    }
    else
    {
        cout <<"El mamyor es: " <<b <<endl;
    }
}
void ejercicio4()
{
    int a,b;
    cout <<"Ingrese dos valores: ";
    cin >> a>> b;

    if(a>b)
    {
        cout <<"El menor es: " <<b <<endl;

    }
    else
    {
        cout <<"El menor es: " <<a;
    }
}
void ejercicio5()
{
    int a,b;
    cout <<"Ingrese dos numeros: ";
    cin >> a >>b;

    if(b!=0)
    {
        cout << a << "/" <<b <<"=" <<(a+b/2)/b <<endl;
    }

}
void ejercicio6()
{
    int a,b,i, resul=1;

    cout <<"Ingrese un numero: "; cin >>a ;
    cout <<"Ingrese la potencia a la que lo elevara: "; cin >>b;

    for(i=0;i<b;i++)
    {
        resul *=a;
    }
    cout << "El resultado de " << a << " elevado a la " << b << " es: " << resul <<endl;

}
void ejercicio7()
{
    int a,i,result;

    cout <<"Ingrese un numero: "; cin >>a;

    for(i=0;i<=a;i++)
    {
        result +=i;
    }
    cout <<"La sumatoria desde 0 hasta "<<a <<" es: "<<result<< endl;
}
void ejercicio8()
{
    int a,i,resultado=1;

    cout <<"ingrese un numero, para calcular su factorial: "; cin >>a;

    for (i=1; i<= a;i++)
    {
        resultado *=i;

    }
    cout << a<<"i= "<< resultado<<endl;
}
void ejercicio9()
{
    float radio,pi=3.1416,peri,area;

    cout<< "Ingrese el radio del circulo: "; cin >> radio;

    peri= (2 * pi * radio);
    area= (pi*radio*radio);

    cout <<"pperimetro: "<<peri<<endl;
    cout <<"Area: "<<area<<endl;
}
void ejercicio10()
{
    int N,i;
    cout << "Ingresa un numero: ";cin >> N;

    if (N > 0)
    {
        cout << "Los multiplos de " << N << " entre 1 y 100 son:" <<endl;

        for (i = 1; i <= 100; i++) {
            if (i % N == 0)
            {
                cout << i << " "<<endl;
            }
        }
    }
    else
    {
        cout << "Por favor ingresa un número mayor que 0." <<endl;
    }
}
void ejercicio11()
{
    int N,i,multi;

    cout <<"Tabla de multiplicar del numero: "; cin>>N;

    for (i=1; i<=10; i++)
    {
        multi=i*N;
        cout <<i<<"*"<<N<<"="<<multi<<endl;
    }
}
void ejercicio12()
{
    int N,i, resul=1;

    cout <<"Ingrese un numero: "; cin >>N ;

    for(i=1;i<=5;i++)
    {
        resul *=N;
        cout << N << "^" << i << " = " << resul<<endl;

    }
}
void ejercicio13()
{
    int n,i;

    cout <<"Ingrese un numero para saber sus dividores: ";cin >>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout <<i<<endl;
        }
    }
}
void ejercicio14()
{
    for (int i= 1;i<=50;i++)
    {
        cout <<i <<"             "<< 51 -i <<endl;
    }
}
void ejercicio15()
{
    int N,suma;

    cout << "Ingrese un numero, (0) para salir : ";cin >>N;
    while(N!=0)
    {
        cout << "Ingrese un numero, (0) para salir : ";cin >>N;
        suma+=N;
    }
    cout <<"El resultado de la sumatoria es: "<<suma<<endl;

}
void ejercicio16()
{
    float promedio,N,suma=0;
    int  i=0;
    cout << "Ingrese un numero, (0) para salir : ";cin >>N;
    while(N!=0)
    {
        cout << "Ingrese un numero, (0) para salir : ";cin >>N;
        suma+=N;
        i++;
    }
    if (i > 0)
    {
        promedio = suma / i;
        cout << "El resultado del promedio es: " << promedio << endl;
    }
}
void ejercicio17()
{
    int  i,N,acu=0;

    cout << "Ingrese un numero, (0) para salir : ";cin >>N;
    while(N!=0)
    {
        cout << "Ingrese un numero, (0) para salir : ";cin >>N;

        if(N>acu)
        {
            acu=N;
        }
    }
    cout <<"El numero mas grande es: "<<acu<<endl;
}
void ejercicio19()
{
    int n,div,i;
    cout << "Ingresa un numero: "; cin >> n;

    if (n <= 1)
    {
        cout << div << " No es un numero primo" << endl;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                div++;
            }
        }

        if (div == 2)
        {
            cout << div <<" Es un numero primo." << endl;
        } else {
            cout << div << "No es un numero primo." << endl;
        }
    }
}
void ejercicio27()
{
    float a, b;
    char op;

    cout << "Ingresa una operación (ej: 5 + 3): ";
    cin >> a >> op >> b;

    if (op == '+')
        cout << "Resultado: " << a + b << endl;
    else if (op == '-')
        cout << "Resultado: " << a - b << endl;
    else if (op == '*')
        cout << "Resultado: " << a * b << endl;
    else if (op == '/') {
        if (b != 0)
            cout << "Resultado: " << a / b << endl;
        else
            cout << "Math  Error" << endl;
    }
    else
        cout << "no valida." << endl;

}
