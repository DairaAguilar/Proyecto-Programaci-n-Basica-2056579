#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <wchar.h>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;


struct datos
{
    string Nombre, Car, Desc, Consola, Genero, Clas, Estado;
    int anio, mod, desicion, eliminar, list, arti;
    float precio, impuesto, total;

};
int cont, alt;
datos* JUEGOS;

void ALTA();
void MODIFICAR();
void ELIMINAR();
void BUSCAR();
void LISTA();
void ARCHIVO();

int main()
{
    int opc;
    printf("\t Elija Una Opcion \n");
    printf(" 1. Alta de Videojuegos \n 2. Modificacion de la lista de Videojuegos \n 3. Eliminar Videojuego \n 4. Lista de Videojuegos \n 5. Buscar \n 6. Limpiar Pantalla \n 7. Salir \n");
    scanf_s("%d", &opc);

    switch (opc)
    {
    case 1:
        ALTA();
        return main();
        break;
    case 2:
        MODIFICAR();
        return main();
        break;
    case 3:
        ELIMINAR();
        return main();
        break;
    case 4:
        LISTA();
        return main();
        break;
    case 5:
        BUSCAR();
        return main();
        break;

    case 6:
        system("cls");
        return main();
        break;
    case 7:
        ARCHIVO();
        exit(1);
        break;
    }
}
void ALTA()
{
    printf("Cuantos videojuegos desea ingresar \n");
    scanf_s("%d", &alt);
    JUEGOS = new datos[alt];
    printf("\nEspecificaciones de los videojuegos");
    for (int i = 0; i < alt; i++)
    {
        JUEGOS[i].arti = i + 1;
        cin.ignore();
        printf("\nIngrese el nombre del videojuego \n");
        getline(cin, JUEGOS[i].Nombre);
        cin.ignore();
        printf("Ingrese el tipo de consola del videojuego \n");
        getline(cin, JUEGOS[i].Consola);
        cin.ignore();
        printf("Ingrese las caracteristicas del videojuego \n");
        getline(cin, JUEGOS[i].Car);
        cin.ignore();
        printf("Ingrese la descripcion del videojuego \n");
        getline(cin, JUEGOS[i].Desc);
        cin.ignore();
        printf("Ingrese el genero del videojuego \n");
        getline(cin, JUEGOS[i].Genero);
        cin.ignore();
        printf("Ingrese la clasificacion del videojuego \n");
        getline(cin, JUEGOS[i].Clas);
        cin.ignore();
        printf("Ingrese el precio unitario del videojuego \n");
        scanf_s("%f", &JUEGOS[i].precio);
        cin.ignore();
        printf("Ingrese el a%co del videojuego \n", 164);
        scanf_s("%d", &JUEGOS[i].anio);
        JUEGOS[i].impuesto = (JUEGOS[i].precio * 16) / 100;
        JUEGOS[i].total = JUEGOS[i].precio + JUEGOS[i].impuesto;
    }

}

void MODIFICAR()
{
    int k, opc2, opc3;
    do
    {
        printf("ingrese el numero del videojuego a modificar \n");
        scanf_s("%d", &k);
        k = k - 1;
        for (int i = k; i == k; i++)
        {
            if (JUEGOS[i].Estado == "VIDEOJUEGO ELIMINADO")
            {
                printf("Videojuego Eliminado por favor ingrese un videojuego valido");
                i + 1;
                opc2 = 1;
            }
            else
            {
                opc2 = 2;
            }
        }
    } while (opc2 == 1);
    printf("ingrese el dato a modificar \n 1.Nombre \n 2.Consola \n 3.Caracteristicas \n 4.Descripcion \n 5.Genero \n 6.Clasificacion\n 7.A%co \n 8.Precio \n ", 164);
    scanf_s("%d", &opc3);
    switch (opc3)
    {
    case 1:
        for (int i = k; i == k; i++)
        {
            while (getchar() != '\n');
            printf("ingrese nombre del videojuego \n");
            getline(cin, JUEGOS[i].Nombre);
            cin.ignore();
        }
        break;
    case 2:
        for (int i = k; i == k; i++)
        {
            while (getchar() != '\n');
            printf("ingrese consola del videojuego \n");
            getline(cin, JUEGOS[i].Consola);
            cin.ignore();
        }
        break;
    case 3:
        for (int i = k; i == k; i++)
        {
            while (getchar() != '\n');
            printf("ingrese caracteristica del videojuego \n");
            getline(cin, JUEGOS[i].Car);
            cin.ignore();
        }
        break;
    case 4:
        for (int i = k; i == k; i++)
        {
            while (getchar() != '\n');
            printf("ingrese descripcion del videojuego \n");
            getline(cin, JUEGOS[i].Desc);
            cin.ignore();
        }
        break;
    case 5:
        for (int i = k; i == k; i++)
        {
            while (getchar() != '\n');
            printf("ingrese el genero del videojuego \n");
            getline(cin, JUEGOS[i].Genero);
            cin.ignore();
        }
        break;
    case 6:
        for (int i = k; i == k; i++)
        {
            while (getchar() != '\n');
            printf("ingrese Clasificacion del videojuego \n");
            getline(cin, JUEGOS[i].Clas);
            cin.ignore();
        }
        break;
    case 7:
        for (int i = k; i == k; i++)
        {
            printf("ingrese el a%co del videojuego \n", 164);
            scanf_s("%d", &JUEGOS[i].anio);
            cin.ignore();
        }
        break;
    case 8:
        for (int i = k; i == k; i++)
        {
            printf("ingrese el precio del videojuego \n");
            scanf_s("%f", &JUEGOS[i].precio);
            cin.ignore();
            JUEGOS[i].impuesto = (JUEGOS[i].precio * 16) / 100;
            JUEGOS[i].total = JUEGOS[i].precio + JUEGOS[i].impuesto;

        }
        break;

    }
}

void ELIMINAR()
{
    int j;
    printf("ingrese el numero de articulo a eliminar \n");
    scanf_s("%d", &j);
    j = j - 1;
    for (int i = j; i == j; i++)
    {
        printf("\n Videojuego Eliminado \n");
        j + 1;
        JUEGOS[i].Estado = "VIDEOJUEGO ELIMINADO";
    }
}

void LISTA()
{
    for (int i = 0; i < alt; i++)
    {
        if (JUEGOS[i].Estado == "VIDEOJUEGO ELIMINADO")
        {
            printf("\n VIDEOJUEGO ELIMINADO DE LA LISTA \n");
            i + 1;
        }
        else
        {
            printf("videojuego %d \n", JUEGOS[i].arti);
            printf("Nombre del videojuego %s \n", JUEGOS[i].Nombre.c_str());
            printf("Consola del videojuego %s \n", JUEGOS[i].Consola.c_str());
            printf("Caracteristicas del videojuego %s \n", JUEGOS[i].Car.c_str());
            printf("Desacripcion del videojuego %s \n", JUEGOS[i].Desc.c_str());
            printf("Genero del videojuego %s \n", JUEGOS[i].Genero.c_str());
            printf("Clasificacion del videojuego %s \n", JUEGOS[i].Clas.c_str());
            printf("A%co del videojuego %d \n", 164, JUEGOS[i].anio);
            printf("Precio unitario del videojuego %f \n", JUEGOS[i].precio);
            printf("Impuesto del videojuego %f \n", JUEGOS[i].impuesto);
            printf("precio total del videojuego %f \n", JUEGOS[i].total);
        }
    }
}

void BUSCAR()
{
    int opc4;
    string consolita, generouwu, clasificacionowo;


    printf("Como desea buscar el videojuego \n 1.Consola \n 2.Genero \n 3.Clasificacion \n");
    scanf_s("%d", &opc4);
    cin.ignore();
    switch (opc4)
    {
    case 1:
    {
        string consolita;
        printf("ingrese la consola \n");
        getline(cin, consolita);
        cin.ignore();
        int i = 0;
        do
        {


            if (JUEGOS[i].Consola.compare(consolita) == 0)
            {
                if (JUEGOS[i].Estado == "VIDEOJUEGO ELIMINADO")
                {
                    printf("\n VIDEOJUEGO ELIMINADO DE LA LISTA \n");
                    i + 1;
                }
                else
                {
                    printf("videojuego %d \n", JUEGOS[i].arti);
                    printf("Nombre del videojuego %s \n", JUEGOS[i].Nombre.c_str());
                    printf("Consola del videojuego %s \n", JUEGOS[i].Consola.c_str());
                    printf("Caracteristicas del videojuego %s \n", JUEGOS[i].Car.c_str());
                    printf("Desacripcion del videojuego %s \n", JUEGOS[i].Desc.c_str());
                    printf("Genero del videojuego %s \n", JUEGOS[i].Genero.c_str());
                    printf("Clasificacion del videojuego %s \n", JUEGOS[i].Clas.c_str());
                    printf("A%co del videojuego %d \n", 164, JUEGOS[i].anio);
                    printf("Precio unitario del videojuego %f \n", JUEGOS[i].precio);
                    printf("Impuesto del videojuego %f \n", JUEGOS[i].impuesto);
                    printf("precio total del videojuego %f \n", JUEGOS[i].total);
                }

            }
            i = i + 1;

        } while (i < alt);
    }
    break;

    case 2:
    {
        string generouwu;
        printf("ingrese el genero \n");
        getline(cin, generouwu);
        cin.ignore();
        int i = 0;
        do
        {


            if (JUEGOS[i].Genero.compare(generouwu) == 0)
            {
                if (JUEGOS[i].Estado == "VIDEOJUEGO ELIMINADO")
                {
                    printf("\n VIDEOJUEGO ELIMINADO DE LA LISTA \n");
                    i + 1;
                }
                else
                {
                    printf("videojuego %d \n", JUEGOS[i].arti);
                    printf("Nombre del videojuego %s \n", JUEGOS[i].Nombre.c_str());
                    printf("Consola del videojuego %s \n", JUEGOS[i].Consola.c_str());
                    printf("Caracteristicas del videojuego %s \n", JUEGOS[i].Car.c_str());
                    printf("Desacripcion del videojuego %s \n", JUEGOS[i].Desc.c_str());
                    printf("Genero del videojuego %s \n", JUEGOS[i].Genero.c_str());
                    printf("Clasificacion del videojuego %s \n", JUEGOS[i].Clas.c_str());
                    printf("A%co del videojuego %d \n", 164, JUEGOS[i].anio);
                    printf("Precio unitario del videojuego %f \n", JUEGOS[i].precio);
                    printf("Impuesto del videojuego %f \n", JUEGOS[i].impuesto);
                    printf("precio total del videojuego %f \n", JUEGOS[i].total);
                }

            }
            i = i + 1;

        } while (i < alt);
    }
    break;

    case 3:
    {
        string clasificacionowo;
        printf("ingrese la Clasificacion \n");
        getline(cin, clasificacionowo);
        cin.ignore();
        int i = 0;
        do
        {


            if (JUEGOS[i].Clas.compare(clasificacionowo) == 0)
            {
                if (JUEGOS[i].Estado == "VIDEOJUEGO ELIMINADO")
                {
                    printf("\n VIDEOJUEGO ELIMINADO DE LA LISTA \n");
                    i + 1;
                }
                else
                {
                    printf("videojuego %d \n", JUEGOS[i].arti);
                    printf("Nombre del videojuego %s \n", JUEGOS[i].Nombre.c_str());
                    printf("Consola del videojuego %s \n", JUEGOS[i].Consola.c_str());
                    printf("Caracteristicas del videojuego %s \n", JUEGOS[i].Car.c_str());
                    printf("Desacripcion del videojuego %s \n", JUEGOS[i].Desc.c_str());
                    printf("Genero del videojuego %s \n", JUEGOS[i].Genero.c_str());
                    printf("Clasificacion del videojuego %s \n", JUEGOS[i].Clas.c_str());
                    printf("A%co del videojuego %d \n", 164, JUEGOS[i].anio);
                    printf("Precio unitario del videojuego %f \n", JUEGOS[i].precio);
                    printf("Impuesto del videojuego %f \n", JUEGOS[i].impuesto);
                    printf("precio total del videojuego %f \n", JUEGOS[i].total);
                }

            }
            i = i + 1;

        } while (i < alt);
    }
    break;
    }

}


void ARCHIVO()
{
    ofstream archivo;
    string documento;
    int palabras;
    string palabras2;

    documento = "Videojuegos.txt";
    archivo.open(documento.c_str(), ios::out);

    if (archivo.fail())
    {
        printf("No se pudo crear el documento");
        exit(1);
    }

    archivo << "NUMERO ARTICULO" << "\t";
    archivo << "NOMBRE DEL VIDEOJUEGO" << "\t";
    archivo << "CONSOLA" << "\t";
    archivo << "CARACTETRISTICAS" << "\t";
    archivo << "DESCRIPCION" << "\t";
    archivo << "GENERO" << "\t";
    archivo << "CLASIFICACION" << "\t";
    archivo << "A�O" << "\t";
    archivo << "PRECIO UNITARIO" << "\t";
    archivo << "IMPUESTO" << "\t";
    archivo << "PRECIO TOTAL" << "\n";

    for (int i = 0; i < alt; i++)
    {
        if (JUEGOS[i].Estado == "VIDEOJUEGO ELIMINADO")
        {
            palabras2 = "VIDEOJUEGO ELIMINADO DE LA LISTA";
            palabras = i;
            archivo << palabras2 << palabras << "\n";
        }
        else
        {
            palabras = JUEGOS[i].arti;
            archivo << palabras << "\t" << "\t";
            palabras2 = JUEGOS[i].Nombre;
            archivo << palabras2 << "\t" << "\t";
            palabras2 = JUEGOS[i].Consola;
            archivo << palabras2 << "\t" << "\t";
            palabras2 = JUEGOS[i].Car;
            archivo << palabras2 << "\t" << "\t";
            palabras2 = JUEGOS[i].Desc;
            archivo << palabras2 << "\t" << "\t";
            palabras2 = JUEGOS[i].Genero;
            archivo << palabras2 << "\t" << "\t";
            palabras2 = JUEGOS[i].Clas;
            archivo << palabras2 << "\t" << "\t";
            palabras = JUEGOS[i].anio;
            archivo << palabras << "\t" << "\t";
            palabras = JUEGOS[i].precio;
            archivo << palabras << "\t" << "\t";
            palabras = JUEGOS[i].impuesto;
            archivo << palabras << "\t" << "\t";
            palabras = JUEGOS[i].total;
            archivo << palabras << "\t" << "\n";
        }
    }
    archivo.close();
}

