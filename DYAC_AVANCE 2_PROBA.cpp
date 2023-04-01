#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <wchar.h>
#include <string>

using namespace std;


struct datos
{
    string Nombre, Car, Desc, Consola, Genero, Clas;
    int año, precio, mod, desicion, eliminar, list, total, arti, impuesto;

};

int main()
{
    datos Videojuegos[3];
    int opc;
    do
    {
        printf("\t Elija Una Opción \n");
        printf("1. Alta de Videojuegos \n");
        printf("2. Modificación de Alta de Videojuegos \n");
        printf("3. Baja de Videojuegos \n");
        printf("4. Lista de Videojuegos \n");
        printf("5. Limpiar Pantalla \n");
        printf("6. Salir \n");
        scanf_s("%d", &opc);

        switch (opc)         //doble click para continuar
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                printf("\n Especificaciones del videojuego \n");
                printf("Ingrese el numero del articulo \n");
                scanf_s("%d", &Videojuegos[i].arti);
                cin.ignore();
                printf("Ingrese el nomnbre del videojuego \n");
                getline(cin, Videojuegos[i].Nombre);
                cin.ignore();
                printf("Ingrese el tipo de consola del videojuego \n");
                getline(cin, Videojuegos[i].Consola);
                cin.ignore();
                printf("Ingrese las caracteristicas del videojuego \n");
                getline(cin, Videojuegos[i].Car);
                cin.ignore();
                printf("Ingrese una descripción del videojuego \n");
                getline(cin, Videojuegos[i].Desc);
                cin.ignore();
                printf("Ingrese el genero del videojuego \n");
                getline(cin, Videojuegos[i].Genero);
                cin.ignore();
                printf("ingrese la clasificación del videojuego \n");
                getline(cin, Videojuegos[i].Clas);
                cin.ignore();
                printf("Ingrese el precio unitario del videojuego \n");
                scanf_s("%d", &Videojuegos[i].precio);
                cin.ignore();
                printf("Ingrese el año del videojuego \n");
                scanf_s("%d", &Videojuegos[i].año);
                cin.ignore();
                printf("Ingrese el impuesto del videojuego \n");
                scanf_s("%d", &Videojuegos[i].impuesto);
                cin.ignore();
                printf("Ingrese el precio total del videojuego \n");
                scanf_s("%d", &Videojuegos[i].total);
                cin.ignore();
            }
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            for (int i = 0; i < 3; i++)
            {
                printf("Videojuego %d \n", Videojuegos[i].arti);
                printf("Nombre del Videojuego: %s \n", Videojuegos[i].Nombre.c_str()); 
                printf("Caracteristicas del videojuego: %s\n", Videojuegos[i].Car.c_str());
                printf("Consola del videojuego: %s\n", Videojuegos[i].Consola.c_str());
                printf("Descripción del videojuego: %s\n", Videojuegos[i].Desc.c_str());
                printf("Año del videojuego %d \n", Videojuegos[i].año);
                printf("Precio unitario del videojuego: %d \n", Videojuegos[i].precio);
                printf("Impuesto del videojuego %d \n", Videojuegos[i].impuesto);
                printf("Precio total del videojuego %d \n", Videojuegos[i].total);

                system("pause");
            }
        case 5:
            system("cls");
            return main();
            break;

        case 6:
            exit(1);
            break;


        }
    } while (opc != 6);
}
