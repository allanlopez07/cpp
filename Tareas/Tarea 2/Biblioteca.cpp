#include <iostream>
#include <string>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[10][3];

void  cargarLibros () {
    // Arreglo con categoria y descripcion

	libros [ 0 ] [ 0 ] = " Novelas " ; libros  [ 0 ] [ 1 ] = " Lo que ignoras de tu muerte  /  " ; libros [ 0 ] [ 2 ] = " Jose Luis Vazquez  " ;
    libros [ 1] [ 0 ] = " Novelas " ; libros  [ 1 ] [ 1 ] = " Pecados de Familia  /  " ; libros [ 1 ] [ 2 ] = " Jose Luis Vazquez  " ;
    libros [ 2 ] [ 0 ] = " cuentos " ; libros  [ 2 ] [ 1 ] = " La bailarina de Auschwitz  /  " ; libros [ 2 ] [ 2 ] = " Bill Gates " ;
    libros [ 3 ] [ 0 ] = " cuentos " ; libros  [ 3] [ 1 ] = " El atlas de las nubes  /  " ; libros [ 3 ] [ 2 ] = " Bill Gates " ;
    libros [ 4 ] [ 0 ] = " Leyendas " ; libros [ 4 ] [ 1 ] = " Cronica de una muerte anunciada  /  " ; libros [ 4 ] [ 2 ] = " Gabriel Garcia Marquez  " ;
    libros [ 5] [ 0 ] = " Leyendas " ; libros [ 5 ] [ 1 ] = " Cien anios de soledad  /  " ; libros [ 5 ] [ 2 ] = " Gabriel Garcia Marquez  " ;
    libros [ 6 ] [ 0 ] = " Romance " ; libros  [ 6 ] [ 1 ] = " Mi princesa favorita  /  " ; libros [ 6 ] [ 2 ] = " James Lohan  " ;
    libros [ 7 ] [ 0 ] = " Romance " ; libros  [ 7] [ 1 ] = " La Reyna  /  " ; libros [ 7 ] [ 2 ] = " James Lohan  " ;
    libros [ 8 ] [ 0 ] = " Informacion " ; libros [ 8 ] [ 1 ] = " Lecciones de Liderazgo  /  " ; libros [ 8 ] [ 2 ] = " Steve Jobs  " ;
    libros [ 9 ] [ 0 ] = " Informacion " ; libros [ 9 ] [ 1 ] = " Los doce legados de steve Jobs  /  " ; libros [ 9 ] [ 2 ] = " Steve Jobs  " ;
    
   
}

int main(int argc, char const *argv[])
{
    cargarLibros();

    srand(time(NULL));
    
    bool salir = false;
    while (salir == false)

    {   string buscar = "";
        system("cls");
        cout << "\nIngrese la descripcion del libro o autor que busca\n:  ";
        cin >> buscar;

         // busqueda
            for (int i = 0; i < 10; i++)
        {
            string libro = libros[i][1];
            string autor = libros[i][2];
            string libroEnminuscula = libro;
            string autorEnminuscula = autor;

            // transformamos a minuscula los string buscar y libro
            transform(libro.begin(), libro.end(), libro.begin(), ::tolower);
            transform(autor.begin(), autor.end(), autor.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            if(libroEnminuscula .find(buscar) !=string::npos || autorEnminuscula.find(buscar) !=string::npos){
                cout << "\nLibro encontrado: " << libro << endl;


                cout << "\nTambien te sugerimos ests libros: " << endl;
                int sugerencia1 = rand() % 9 + 1;
                int sugerencia2 = rand() % 9 + 1;
                int sugerencia3 = rand() % 9 + 1;

                cout << " \nSugerencia 1: " << libros[sugerencia1][1] << libros[sugerencia1][2] << endl;
                cout << " \nSugerencia 2: " << libros[sugerencia2][1] << libros[sugerencia2][2] << endl;
                cout << " \nSugerencia 3: " << libros[sugerencia3][1] << libros[sugerencia3][2] << endl;

                salir = true;
                break;
            }
        }

    }
       
   if (salir == false){

       char continuar = 'n';

        while(true){
            system("cls");
            cout << "\nNo se encontro el libro que busca. Desea continuar? s/n ";
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