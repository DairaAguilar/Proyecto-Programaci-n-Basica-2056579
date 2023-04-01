/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int desicion, año, OPC, articulo, total, impuesto, modificar,eliminar,lista;
    float precio;
    char videojuego [20], genero [20], clasificacion [20], descripcion [30], caracteristicas[30], consola[20];
    
    cout << "Elija una opción" << endl;
    cout << "1.-Alta de Videojuegos" << endl;
    cout << "2.-Modificación de Alta de Videojuegos" << endl;
    cout << "3.-Baja de un Videojuego" << endl;
    cout << "4.-Lista de Videojuegos" << endl;
    cout << "5.-Limpiar pantalla" << endl;
    cout << "6.-Salir" << endl;
    cin >> OPC;
    
    switch(OPC)
    {
        case 1:
        cout << "Ingrese el numero del articulo" << endl;
        cin >> articulo;
        cout << "Ingrese un videojuego (No utilice espacios)" << endl;
        cin >> videojuego;
        cout << "Ingrese el genero del videojuego (No utilice espacios)" << endl;
        cin >> genero;
        cout << "Ingrese el precio unitario del videojuego" << endl;
        cin >> precio;
        cout << "Ingrese el año del videojuego" << endl;
        cin >> año;
        cout << "Ingrese el clasificación del videojuego (No utilice espacios)" << endl;
        cin >> clasificacion;
        cout << "Ingrese el tipo consola del videojuego (No utilice espacios)" << endl;
        cin >> consola;
        cout << "Ingrese las caracteristicas del videojuego (No utilice espacios)" << endl;
        cin >> caracteristicas;
        cout << "Ingrese una descripción del videojuego" << endl;
        cin >> descripcion;
        cout << "Ingrese el impuesto del videojuego" << endl;
        cin >> impuesto;
        cout << "Ingrese el total a pagar por el videojuego" << endl;
        cin >> total;
        cout << "Articulo " << articulo << endl;
        cout << "Nombre del videojuego " << videojuego << endl;
        cout << "Genero:" << genero << endl;
        cout << "Precio:" << precio << " pesos" << endl;
        cout << "Año:" << año << endl;
        cout << "Clasificación:" << clasificacion << endl;
        cout << "Consola:" << consola << endl;
        cout << "Caracteristias:" << caracteristicas << endl;
        cout << "Descripcion:" << descripcion << endl;
        cout << "Impuesto:" << impuesto << " pesos" << endl;
        cout << "Total a pagar:" << total << " pesos" << endl;
        cout << "Desea regresar al menu 1 si, 2 no" << endl;
        cin >> desicion;
        if (desicion == 1)
        {
            //system("pause");
            return main();
        }
        else
        {
            exit (1);
        }
        break;
        
        case 2:
        cout << "Desea modificar la lista de videojuegos 1 si, 2 no"<< endl;
        cin >> modificar;
        if (modificar == 1)
        {
            //system("pause");
            return main();
        }
        else
        {
            //system("pause");
            return main();
        }
        break;
        
        case 3:
        cout << "Desea eliminar un videojuego lista de videojuegos 1 si, 2 no"<< endl;
        cin >> eliminar;
        if (eliminar == 1)
        {
            //system("pause");
            return main();
        }
        else
        {
            //system("pause");
            return main();
        }
        break;
        
        case 4:
        cout << "Desea ver la lista de videojuegos 1 si, 2 no" << endl;
        cin >> lista;
        if (lista == 1)
        {
            //system("pause");
            return main();
        }
        else
        {
            //system("pause");
            return main();
        }
        break;
        
        case 5:
        system ("cls");
        return main ();
        break;
        
        case 6:
        exit (1);
        break;
    }
}
