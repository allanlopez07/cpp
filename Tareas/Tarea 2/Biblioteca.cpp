#include <iostream>
#include <string>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[5][2];

void  cargarLibros () {
    // Arreglo con categoria y descripcion
	libros [ 0 ] [ 0 ] = " Bill Gates " ; libros [ 0 ] [ 1 ] = " La bailarina de Auschwitz " ;
	libros [ 1 ] [ 0 ] = " Gabriel Garcia Marquez " ; libros [ 1 ] [ 1 ] = " Cronica de una muerte anunciada " ;
	libros [ 2 ] [ 0 ] = " James Lohan " ; libros [ 2 ] [ 1 ] = " Mi princesa favorita " ;
	libros [ 3 ] [ 0 ] = " Steve Jobs " ; libros [ 3 ] [ 1 ] = " Los doce legados de steve Jobs " ;
	libros [ 4 ] [ 0 ] = " Jose Luis Vazquez " ; libros [ 4 ] [ 1 ] = " Temas selectos de estructuras de datos " ;
	
}

int main(int argc, char const *argv[])
{
    cargarLibros();

    srand(time(NULL));
    
    bool salir = false;
    while (salir == false)

    {   string buscar = "";
        system("cls");
        cout << "Ingrese la descripcion del libro que busca:  ";
        cin >> buscar;

         // busqueda
            for (int i = 0; i < 4; i++)
        {
            
            string libro = libros[i][1];
            

            string libroEnminuscula = libro;
            // transformamos a minuscula los string buscar y libro
            transform(libro.begin(), libro.end(), libro.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            if(libro.find(buscar) !=string::npos){
                cout << "\nLibro encontrado: " << libro << endl;

                cout << "\nTambien te sugerimos ests libros: " << endl;

                int sugerencia1 = rand() % 4 + 1;
                int sugerencia2 = rand() % 4 + 1;
                int sugerencia3 = rand() % 4 + 1;

                cout << " \n\nSugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << " \nSugerencia 2: " << libros[sugerencia2][1] << endl;
                cout << " \nSugerencia 3: " << libros[sugerencia3][1] << endl;

                salir = true;
                break;
            }
        }

    }
       
   if (salir == false){

       char continuar = 'n';

        while(true){
            system("cls");
            cout << "No se encontro el libro que busca. Desea continuar? s/n ";
            cin >> continuar;

            if(continuar == 's' || continuar == 's') {
                break;
            }       else if(continuar == 'n' || continuar == 'N'){
                        salir = true;
                        break;
            }
                      
            
        }
   }


    return 0;
}