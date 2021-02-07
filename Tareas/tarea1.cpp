
//     ALLAN JOSUE LOPEZ MATUTE
//     20172030969


#include <iostream>
#include <string>

using namespace std;

string productos [5][3] = {
     {"001", "iPhone X", "0" },
     {"002", "Laptop Dell", "5" },
     {"003", "Monitor Samsung", "2" },
     {"004", "Mouse", "100" },
     {"005", "Headset", "25" }

};

void listarproductos(){

    system("cls");
          cout << endl;
          cout << "Listado de Productos" << endl;
          cout << "********************" << endl;
          cout << "Codigo, Descripcion y Existencia" << endl;
          cout << endl;

          for (int i = 0; i < 5; i++)
          {
                cout << productos[i][0] << " | " << productos[i][1] << " | " << productos[i][2]<< endl;
          }
}

void movimientoInnventario(string codigo, int cantidad,string tipomovimiento ){
    

     for (int i = 0; i < 5; i++)
{
     if (productos[i][0] == codigo ){
          if (tipomovimiento == "+"){
               productos[i][2] = to_string(stoi(productos[i][2]) + cantidad);
          }else{
               productos[i][2] = to_string(stoi(productos[i][2]) - cantidad);
          }
     }
}
}

void IngresoDeInventario(){
     string codigo = "";
     int cantidad = 0;

system("cls");
          cout << endl;
          cout << "Ingreso de Productos al Inventario" << endl;
          cout << "**********************************" << endl;
          cout << "Inrese el codigo del Producto" << endl;
          cin >> codigo; 
          cout << endl;
          cout << "Inrese cantidad del Producto" << endl;
          cin >> cantidad;
          cout << endl;

          for (int i = 0; i < 5; i++)
          {
               cout << productos[i][0] << " " << productos[i][1] << endl;
          }

          movimientoInnventario(codigo, cantidad, "+");
}

void SalidaDeInventario(){
     string codigo = "";
     int cantidad = 0;

system("cls");
          cout << endl;
          cout << "Salida de Productos del Inventario" << endl;
          cout << "**********************************" << endl;
          cout << "Inrese el codigo del Producto" << endl;
          cin >> codigo; 
          cout << endl;
          cout << "Inrese cantidad del Producto" << endl;
          cin >> cantidad;
          cout << endl;

          for (int i = 0; i < 5; i++)
          {
               cout << productos[i][0] << " " << productos[i][1] << endl;
          }

          movimientoInnventario(codigo, cantidad, "-");
}
// ------------------------------TAREA-----------------------------------------------------

// OPCION 4
void AjustePositivoDeInventario(){
     string codigo = "";
     int cantidad = 0;

system("cls");
          cout << endl;
          cout << "Hacer ajuste Positivo al Inventario" << endl;
          cout << "**********************************" << endl;
          cout << "Inrese el codigo del Producto" << endl;
          cin >> codigo; 
          cout << endl;
          cout << "Inrese cantidad del Producto" << endl;
          cin >> cantidad;
          cout << endl;

          for (int i = 0; i < 5; i++)
          {
               cout << productos[i][0] << " " << productos[i][1] << endl;
          }

          movimientoInnventario(codigo, cantidad, "+");
}


// OPCION 5
void AjusteNegativoDeInventario(){
     string codigo = "";
     int cantidad = 0;

system("cls");
          cout << endl;
          cout << "Ajuste Negativo al Inevntario" << endl;
          cout << "**********************************" << endl;
          cout << "Inrese el codigo del Producto" << endl;
          cin >> codigo; 
          cout << endl;
          cout << "Inrese cantidad del Producto" << endl;
          cin >> cantidad;
          cout << endl;

          for (int i = 0; i < 5; i++)
          {
               cout << productos[i][0] << " " << productos[i][1] << endl;
          }

          movimientoInnventario(codigo, cantidad, "-");
}
//--------------------------------------------------------------------------------------------


int main(int argc, char const *argv[])
{
    int opcion = 0;

while (true)
{
   system("cls");

    cout <<"Sistema de Inventario";
          cout << endl;
          cout <<"*********************";
          cout << endl;
          cout <<"1 - Productos" << endl;
          cout <<"2 - Ingreso de Inventario" << endl;
          cout <<"3 - Salida de Inventario" << endl;
          cout <<"4 - Ajuste Positivo del Inventario" << endl;
          cout <<"5 - Ajuste Negativo del Inventario" << endl;
          cout <<"6 - Salir" << endl;
          cout << "Ingrese una opcion del menu: ";
          cin >> opcion;

          switch (opcion)
          {
               case 1:
               listarproductos();
                    break;
                   
                    case 2:
               IngresoDeInventario();
                    break;

                    case 3:
               SalidaDeInventario();
                    break;

                    case 4:
               AjustePositivoDeInventario();
                    break;

                    case 5:
               AjusteNegativoDeInventario();
                    break;
               

               default:
                    break;
           }         

                    system("pause");
                    cout << endl;

                    if (opcion == 6)  {
                              break;
                    }
     }

         
          return 0;
}
