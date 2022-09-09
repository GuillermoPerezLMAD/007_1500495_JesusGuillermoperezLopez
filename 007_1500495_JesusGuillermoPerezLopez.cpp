#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numarticulo, opcion, ano, iva=160;
    float precio_unitario;
    string videojuego, descripcion, clasificacion, caracteristicas, genero, consola;

    cout << "\t ***GAMESTORE*** \n";
    cout << " 1.-Agregar videojuego \n 2.-Modificar videojuego\n 3.-Eliminar videojuego\n 4.-Lista videojuego\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar videojuego
        cout << "Ingrese el numero de videojuego \n";
        cin >> numarticulo;
        cout << "ingrese el nombre del videojuego\n";
        cin.ignore();//me ignora el primer espacio 
        getline(cin, videojuego); //permite ejecutar los espacios en la variable
        cout << "Ingrese el ano de lanzamiento \n";
        cin >> ano;
        cout << "ingrese la descripcion del videojuego\n";
        cin.ignore();
        getline(cin, descripcion);
        cout << "ingrese la clasificacion del videojuego\n";
        cin.ignore();
        getline(cin, clasificacion);
        cout << "ingrese las caracteristicas del videojuego\n";
        cin.ignore();
        getline(cin, caracteristicas);
        cout << "ingrese el genero del videojuego\n";
        cin.ignore();
        getline(cin, genero);
        cout << "ingrese la consola del videojuego\n";
        cin.ignore();
        getline(cin, consola);
        cout << "ingrese el precio unitario del videojuego\n";
        cin >> precio_unitario; 
        
        return main();
        break;

    case 2: //Modificar Articulo
        break;

    case 3://Eliminar Articulo
        break;

    case 4: //Lista de Articulos
        break;

    case 5: //Limpiar Pantalla
        system("cls"); //clean  se utiliza en web 
        return main();
        break;

    case 6: //salir
        cout << "Gracias por utilizar el programa \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();

    }

}