#include <iostream>
using namespace std;

int main() {
    char opcion;
    int numHamburguesas, tipoHamburguesa, precioHamburguesa;
    float precioTotal, cargoTarjeta;
    
    do {
        precioTotal = 0; 
        cout << "S - Hamburguesa sencilla ($20)" << endl;
        cout << "D - Hamburguesa doble ($25)" << endl;
        cout << "T - Hamburguesa triple ($28)" << endl;
        cout << "E - Salir" << endl;
        cin >> opcion;
        
        switch(opcion) {
            case 'S':
            case 's':
                precioHamburguesa = 20;
                break;
            case 'D':
            case 'd':
                precioHamburguesa = 25;
                break;
            case 'T':
            case 't':
                precioHamburguesa = 28;
                break;
            case 'E':
            case 'e':
                cout << "\nSaliendo del programa...";
                return 0;
            default:
                cout << "\nOpcion invalida. Intente nuevamente.";
                continue;
        }
        
        cout << "Ingrese la cantidad de hamburguesas a comprar: ";
        cin >> numHamburguesas;
        precioTotal = numHamburguesas * precioHamburguesa;
        cargoTarjeta = precioTotal * 0.05;
        precioTotal += cargoTarjeta;
        cout << "\nEl precio total de su compra es: " << precioTotal << endl;
        
    } while (opcion != 'E' && opcion != 'e');
    
    return 0;
}