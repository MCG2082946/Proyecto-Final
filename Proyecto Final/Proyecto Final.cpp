
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <vector>

using namespace std;

void main()
{
    //  Declaracion de Variables //
    int opc, a_l, p_u, i = 0, pv, pt;
    char id[5];
    string nom, clas, gen;
    string carac[30], desc[50];

    bool repetir = true;

    cout << "-------------   Bienvenido!   -------------\n";
    cout << "\n";

    char nombre[100];
    cout << ("Ingrese su nombre por favor... \t");
    cin >> nombre;
    cout << "\n";
    cout << "Te damos la bienvenida " << nombre << "!\n";
    cout << "\n";

    do
    {
        system("cls");

        //  Menu //
        cout << " ---   1. Agregar Articulo             ----\n";
        cout << " ---   2. Modificar Articulo           ----\n";
        cout << " ---   3. Eliminar Articulo            ----\n";
        cout << " ---   4. Lista de Articulos Vigentes  ----\n";
        cout << " ---   5. Limpiar Pantalla             ----\n";
        cout << " ---   6. Salir                        ----\n";
        cout << "\n";
        cout << "  Ingrese una opcion... \t";
        cin >> opc;
        cout << "\n";

        switch (opc)
        {
        case 1: //  Agregar art //
        {
            for (int i = 0; i < 3; i++);
            {
                cout << "ID Videojuego ...\t" << i + 1 << "\n";
                cout << "Ingrese nombre del videojuego ...\n";
                cin >> nom;
                cout << "Ingrese el genero del videojuego ...\n";
                cin >> gen;
                cout << "Ingrese la clasificacion del videojuego ...\n";
                cin >> clas;
                cout << "Ingrese el año de lanzamiento ...\n";
                cin >> a_l;

                cout << "Ingrese las caracteristicas del videojuego ...\n";
                char carac[200];
                
                cout << "Ingrese una breve descripcion del videojuego ...\n";
                char desc[500];
                
                
                cout << "Ingrese precio unitario ...\n";
                cin >> p_u;
                cout << "Ingrese precio del videojuego ...\n";
                cin >> pv;

                cout << "\n";
                pt = p_u+pv;

                cout << "Los datos ingresados son los siguientes ...\n";
                cout << "\n";

                cout << "Nombre:  " << nom << "\n";
                cout << "Genero:  " << gen << "\n";
                cout << "Clasificacion:  " << clas << "\n";
                cout << "Fecha de lanzamiento:  " << a_l << "\n";
                cout << "Caracteristicas:  " << "\n";
                cout << "Descripcion:  " << "\n";
                cout << "Precio total:  " << pt << "\n";
                
                if (i >= 3) break;
                system("pause>null");
                break;

            }
        }
        case 2: //  Modificar art //
        {
            cout << "...\n";
            system("pause>null");
            break;
        }
        case 3: //  Eliminar art //
        {
            cout << "...\n";
            system("pause>null");
            break;
        }
        case 4: //  Lista de art vigentes //
        {
            cout << "...\n";
            system("pause>null");
            break;
        }
        case 5: //  Limpiar pantalla //
        {
            cout << "Se limpiara la pantalla a continuacion...\n";
            system("cls");
            break;
        }
        case 6: //  Salir //
        {
            repetir = false;
            break;
        }
        default:
            cout << "\t OPCION NO VALIDA \n";
            break;
        }


        system("pause>null");
    } while (opc !=6);
    
}
