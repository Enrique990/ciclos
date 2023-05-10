#include <iostream>

using namespace std;

int main() {
    int opcion = 0;
    
    while(opcion != 4) {
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                cout << "Hasta luego!" << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }
        
        cout << endl;
    }
    
    return 0;
}