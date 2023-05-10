#include <iostream>

using namespace std;

int main() {
    int contar = 0;
    double sum = 0.0;
    double altura;

    while (true) {
        cout << "Ingrese la estatura de la persona (o ingrese '0' para salir): ";
        cin >> altura;

        if (altura == 0) {
            break;
        }

        sum += altura;
        contar++;
    }

    if (contar > 0) {
        double promedio = sum / contar;
        cout << "La estatura promedio es: " << promedio << endl;
    } else {
        cout << "No se ingresaron estaturas." << endl;
    }

    return 0;
}