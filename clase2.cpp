#include <iostream>
#include <fstream>

using namespace std;


// Función que muestra en pantalla el valor al cuadrado del valor ingresado
void alCuadrado(int x)
{
    cout << "El valor al cuadrado es: " << x * x << endl;
}

// Función que muestra en pantalla un saludo dependiendo del valor ingresado
void saludos(int mode, string name)
{
    switch (mode)
    {
    case 1:
        cout << "Welcome, " << name << "!" << endl;
        break;
    case 2:
        cout << "Goodbye, " << name << "!" << endl;
        break;
    default:
        cout << "Try again" << endl;
    }
}

// Función que convierte de días a segundos
int aSegundos(int days)
{
    // 1 día -> 24 hrs
    // 1 hrs -> 60 mins
    // 1 mins -> 60 segs
    return (days * 24 * 60 * 60);
}


// Función que crea un archivo .html básico
void crearHTML()
{
    // Abre el archivo en modo de escritura
    ofstream archivo("ejemplo.html");

    // Verifica si el archivo se abrió correctamente
    if (archivo.is_open())
    {
        // Escribe el contenido HTML en el archivo
        archivo << "<!DOCTYPE html>\n";
        archivo << "<html>\n";
        archivo << "<head>\n";
        archivo << "<title>Mi Página HTML</title>\n";
        archivo << "</head>\n";
        archivo << "<body>\n";
        archivo << "<h1>Hola, este es un ejemplo de archivo HTML generado desde C++</h1>\n";
        archivo << "<h2>Ejemplo archivo html creado con c++</h2>\n";
        archivo << "<h3>18/10/2023</h3>\n";
        archivo << "<p>HTML, siglas en inglés de HyperText Markup Language (lenguaje de marcado de hipertexto), hace referencia al lenguaje de marcado para la elaboración de páginas web. Es un estándar que sirve de referencia del software que conecta con la elaboración de páginas web en sus diferentes versiones, define una estructura básica y un código (denominado código HTML) para la definición de contenido de una página web, como texto, imágenes, videos, juegos, entre otros.</p>\n";
        archivo << "</body>\n";
        archivo << "</html>\n";

        // Cierra el archivo
        archivo.close();

        cout << "Archivo HTML creado exitosamente." << endl;
    }
    else
    {
        cout << "Error al abrir el archivo." << endl;
    }
}


int main()
{
    // ********************************************* ARREGLOS **************************************************
    // Crear un arreglo de tipo double de tamaño 8
    double precio[8];
    precio[0] = 12.33; //Posición 1 del arreglo equivale al índice 0
    precio[1] = 15.2;
    precio[2] = 1.23;
    precio[3] = 2.63;
    precio[4] = 100.25;
    precio[5] = 568.2;
    precio[6] = 9.99;
    precio[7] = 0.5; //Posición 8 del arreglo equivale al índice 7

    // Acceder a una posición del arreglo
    cout << precio[2] << endl;
    double _pos7_ = precio[6];
    cout << _pos7_ << endl;
    
    // Declaración de un arreglo de tipo char con múltiples valores y 
    // acceso a una posición del arreglo por medio de un índice ingresado por el usuario
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int index;
    cout << "Ingrese un número del 0 al 25: ";
    cin >> index;
    cout << letters[index] << endl;
    
    // Declaración de un arreglo de tipo double con múltiples valores 
    // Iterar el arreglo por medio de un ciclo for para obtener la suma total de sus elementos.
    double prices[] = {5.99, 3.2, 9.99, 29.99};
    double total = 0;
    for (int x = 0; x < 4; x++)
    {
        total += prices[x];
    }
    cout << total << endl;

    // Iterar arreglo con un ciclo for each para obtener la suma total de sus elementps
    total = 0;
    for (double price : prices)
    {
        total += price;
    }
    cout << total << endl;
    
    // Declarar arreglo de 2 dimensiones y asignar valor a cada posición
    // Recordar que si son 2 filas, fila 1 = índice 0 y fila 2 = índice 1
    string carSeats[2][2];
    carSeats[0][0] = "Asiento 1";
    carSeats[0][1] = "Asiento 2";
    carSeats[1][0] = "Asiento 3";
    carSeats[1][1] = "Asiento 4";

    // Acceder a una posición de un arreglo bidimensional (filaxcolumna)
    cout << carSeats[1][0] << endl;
    
    // Declarar arreglo de 2 dimensiones con múltiples valores
    // [ FILA ] [ COLUMNA ]
    string seats[2][2] = {{"Piloto", "Copiloto"}, {"Pasajero 1", "Pasajero 2"}};

    // Iterar un arreglo bidimensional por medio de ciclos for anidados
    for(int fila = 0; fila < 2; fila++){
        for(int col = 0; col < 2; col++){
            cout << seats[fila][col] << endl;
        }
    }

    // Declarar arreglo de 2 dimnesiones, de tipo int y con múltiples valores
    int map[7][7] = {
        {0, 0, 1, 1, 0, 1, 0},
        {1, 0, 0, 1, 1, 0, 1},
        {0, 1, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0},
        {0, 1, 1, 0, 0, 1, 0},
        {0, 0, 1, 0, 0, 0, 1},
        {0, 1, 0, 0, 0, 0, 1}};

    // Iterar un arreglo de 2 dimensiones por medio de ciclos for anidados
    // Recorre desde el índice [0][0] hasta [6][6]
    cout << ">> Iterando de inicio a fin" << endl;
    for (int fila = 0; fila < 7; fila++)
    {
        for (int col = 0; col < 7; col++)
        {
            cout << "F" << fila << "-C" << col << " = " << map[fila][col] << " ";
        }
        cout << endl;
    }

    // Iterar un arreglo de 2 dimensiones por medio de ciclos for anidados
    // Recorre desde el índice [6][6] hasta [0][0]
    cout << ">> Iterando de fin a inicio" << endl;
    for (int fila = 6; fila >= 0; fila--)
    {
        for (int col = 6; col >= 0; col--)
        {
            cout << "F" << fila << "-C" << col << " = " << map[fila][col] << " ";
        }
        cout << endl;
    }

    // ******************************************* Punteros **************************************************
    int a = 4;   // Declarar variable de tipo int
    int *p = &a; // Declarar puntero con nombre p tiene la dirección en memoria de la variable a
    a += 2;      // a = 6
    *p += 3;     // a = 9 El puntero modifica el valor que está en la dirección en memoria
    a -= 1;      // a = 8
    cout << a << endl;
    
    // ************************************ Punteros y arreglos *********************************************
    string colors[] = {"Rojo", "Azul", "Morado", "Verde"}; // Declarar arreglo de strings
    string *punteroColores = colors;  // punteroColores es un puntero que almacena la dirección en memoria del primer elemento del arreglo
    for (int i = 0; i < 4; i++)
    {
        cout << *punteroColores << endl;
        punteroColores++; // Avanza a la siguiente dirección en memoria (siguiente posición del arreglo)
    }
    
    // ************************************* Memoria dinámica ************************************************
    // Crear un arreglo con la cantidad de datos que el usuario ingrese en tiempo de ejecución
    cout << "Ingrese la cantidad de datos que desea guardar: ";
    int size;
    cin >> size;

    cout << "Ingrese los valores: " << endl;
    int *nums = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << ">> Valor " << (i + 1) << ": ";
        cin >> nums[i];
    }

    cout << "El valor más grande de los datos es: ";
    int max = nums[0];
    for (int i = 0; i < size; i++)
    {
        if (nums[i] > max)
            max = nums[i];
    }
    cout << max << endl;
    
    // ********************************************* Funciones *************************************************
    // Llamada a una función tipo void con un parámetro
    cout << "Ingrese el valor que desea elevar al cuadrado: ";
    int valor;
    cin >> valor;
    alCuadrado(valor);
    alCuadrado(9);
    alCuadrado(3);
    
    // Llamada a una función tipo void con varios parámetros
    cout << "Ingrese un número: ";
    int mode;
    cin >> mode;
    cout << "Ingrese un nombre: ";
    string name;
    cin >> name;
    saludos(mode, name);
    saludos(1, "Juan");
    saludos(2, "Marta");
    saludos(78, "Marcos");
    
    // Llamada a una función no void que retorna segundos
    cout << "Ingrese la cantidad de días: ";
    int days;
    cin >> days;
    int seconds = aSegundos(days);
    cout << days << " días equivale a " << seconds << " segundos";
   
   // Llamada a una función tipo voud sin parámetros
   crearHTML();
}