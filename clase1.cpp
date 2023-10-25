#include <iostream>

using namespace std;

int main()
{
    // Comentario una línea
    /* Este
        es un
            comentario
                 multilínea */

    // ******************************************* SALIDAS **************************************************
    // Mostrar mensajes en pantalla
    cout << "This is the first line" << endl;
    cout << "This is the second line\n";
    cout << "This is the third line" << endl;

    // ****************************************** VARIABLES *************************************************
    string saludo;
    string despedida = "adiós";
    saludo = "hola";
    int uno, dos, tres;
    int cuatro, cinco, seis = 0;
    double promocion = 99.99;
    float promo = 99.99f;
    bool cumple = true;
    bool cumple = false;
    char letra = 'Z';

    // ******************************************* ENTRADA **************************************************
    // El usuario ingresa información y esta se muestra en pantalla
    cout << "Ingresar su nombre" << endl;
    string nombre, apellido;
    cin >> nombre >> apellido;
    cout << "El nombre del usuario es: " << nombre << endl;
    cout << "El apellido del usuario es: " << apellido;

    // ***************************************** OPERADORES **************************************************
    // Mostrar en pantalla operaciones aritméticas
    cout << 5 * 10 << endl;
    cout << (20 > 5) << endl;
    cout << (20 < 5) << endl;
    cout << (20 == 20) << endl;
    cout << (20 != 20) << endl;
    cout << (20 >= 20) << endl;
    cout << (20 <= 20) << endl;

    // Operadores lógicos y relacionales
    int temp = 5;
    bool value = temp >= 36 && temp <= 38;
    cout << value << endl;
    value = temp >= 36 || temp <= 38;
    cout << value << endl;
    value = !(temp >= 36 && temp <= 38);
    cout << value << "\n";
    cout << !value << endl;

    // Increment
    int edad = 17;
    edad++;
    cout << edad << endl;
    edad = edad + 1;
    cout << edad << endl;

    // Decrement
    edad--;
    cout << edad << endl;
    edad = edad - 1;
    cout << edad << endl;

    // ***************************************** CONDICIONALES ***********************************************
    // if - else if - else
    edad = 16;
    if (edad >= 18)
    {
        cout << "Ya es legal" << endl;

        if (edad >= 21)
        {
            cout << "Es legal en estados unidos" << endl;
        }
        else
        {
            cout << "Es legal en otros países" << endl;
        }
    }
    else if (edad >= 15)
    {
        cout << "Ya casi es legal" << endl;
    }
    else if (edad >= 10)
    {
        cout << "Ya caaaaasi es legal" << endl;
    }
    else
    {
        cout << "Aún, está lejos" << endl;
    }

    // Condicional switch
    int numeroJugador;
    cout << "Por favor, seleccione un jugador: " << endl;
    cin >> numeroJugador;
    switch(numeroJugador){
        case 10:
            cout << "Eligió el 10!" << endl;
            break;
        case 22:
            cout << "Eligió el 22!" << endl;
            break;
        case 7:
            cout << "Eligió el 7!" << endl;
            break;
        default:
            cout << "No existe, entonces se eligió el 2" << endl;
    }

    // ******************************************** CICLOS **************************************************

    // While
    int numero;
    cout << "Por favor, ingrese un número: " << endl;
    cin >> numero;

    cout << "La cuenta regresiva es:" << endl;
    while(numero >= 0){
        cout << numero << endl;
        numero --;
    }

    int result = 0;
    while(numero >= 0){
        result += numero;
        numero --;
    }
    cout << "El resultado es " << result << endl;

    // DO WHILE
    int numero;
    cout << "Por favor, ingrese un número" << endl;
    cin >> numero;
    do{
        cout << "Estoy dentro del do while" << endl;
        numero += 5;
    } while (numero < 50);

    // CICLO FOR
    for(int i=1; i<=10; i+=2){
        cout << "El valor de i es " << i << endl;
    }

    for(int j=20; j>=10; j--){
        cout << "El valor de j es " << j;
        if (j % 2 == 0){
            cout << "Es par" << endl;
        } else {
            cout << "Es impar" << endl;
        }
    }

    /* "continue" nos dice que continúe ejecutando el ciclo
    pero no las sentencias siguientes
    "break" detiene el ciclo por completo */

    // DO WHILE
    int i = 0;
    do
    {
        i++;
        if (i == 6)
        {
            continue; // Cuando i == 6 no se va a imprimir el valor de i
            // Se va saltar todas las sentencias que estén después del continue
        }
        cout << "i: " << i << endl;
    } while (i < 10);
}