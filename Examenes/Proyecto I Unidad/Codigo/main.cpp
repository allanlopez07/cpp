#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion;

        system("cls");

        while (true)
        {
            
            cout << "********     JUEGOS CLASICOS     ********\n" << endl;

            cout << "***   Seleccione un Juego     ***\n" << endl;

            cout << "*****" << " 1   STARTSHIP   "<< "********" << endl;
            cout << "*****" << " 2     SNAKE     "<< "********\n" << endl;

            cout << "**  3   Salir   **\n" << endl;

            cout << "Ingrese un numero para seleccionar un juego: ";

            cin >> opcion;

            switch (opcion)
            {
            case 1:
                system("cls");
                starShip();
                
                break;
            
            case 2:
                system("cls");
                snake();
                
                break;
            
            default:
                break;
            }

            system("pause");
                cout << endl;

            if (opcion == 3)
            {
                break;
            }
            

        }

    return 0;
}
