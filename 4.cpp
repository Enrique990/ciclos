#include <iostream>
using namespace std;

int main() {
    int opcion;
    do {
        cout << "1. Calcular ahorros\n";
        cout << "2. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            double ahorrosIniciales;
            cout << "Ingrese la cantidad inicial de ahorros: ";
            cin >> ahorrosIniciales;

            double ahorrosMensuales[12];
            for (int i = 0; i < 12; i++) {
                cout << "Ingrese la cantidad de ahorros del mes " << i+1 << ": ";
                cin >> ahorrosMensuales[i];
            }

            double ahorrosTotales = ahorrosIniciales;
            cout << "Ahorrando $" << ahorrosIniciales << " al inicio del año, los ahorros totales son:\n";
            for (int i = 0; i < 12; i++) {
                ahorrosTotales += ahorrosMensuales[i];
                cout << "Mes " << i+1 << ": $" << ahorrosTotales << endl;
            }
        } else if (opcion != 2) {
            cout << "Opcion invalida, seleccione de nuevo.\n";
        }
    } while (opcion != 2);

    return 0;
}