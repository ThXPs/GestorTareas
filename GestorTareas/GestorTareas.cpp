#include <iostream>
#include <string>
using namespace std;

int main(){
    int opcion;
    string tarea;
    do {
        cout << "1. Agregar tarea" << endl;
        cout << "2. Eliminar tarea" << endl;
        cout << "3. Mostrar tareas" << endl;
        cout << "4. Salir" << endl;

        cin >> opcion;

        switch (opcion) {
        case 1:
            cout <<"Ingrese la tarea a registrar"<< endl;
            cin >> tarea;
            break;
        case 2:
            cout <<"Tarea a eliminar"<< endl;
            int num;
            cin >> num;

            break;
        case 3:
            cout <<"Lista de tareas:" <<endl;
            cout << tarea << endl;
            break;
        } 
    } while (opcion != 4);
    
    return 0;
}