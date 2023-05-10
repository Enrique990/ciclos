#include <iostream>
using namespace std;

int main() {
    int num_empleados, llamadas, evaluacion;
    double salario_bruto, salario_neto, bono;

    while (true) {
        cout << "Ingrese el número de empleados (o 0 para salir): ";
        cin >> num_empleados;

        if (num_empleados == 0) {
            break;
        }

        for (int i = 1; i <= num_empleados; i++) {
            cout << "\nEmpleado " << i << ":\n";
            cout << "Ingrese la cantidad de llamadas atendidas: ";
            cin >> llamadas;

            if (llamadas > 50 && llamadas < 100) {
                bono = 1000.00;
            } else if (llamadas > 100 && llamadas < 150) {
                bono = 1500.00;
            } else if (llamadas > 150) {
                bono = 2000.00;
            } else {
                bono = 0.00;
            }

            cout << "Ingrese la evaluación de la atención (1-10): ";
            cin >> evaluacion;

            if (evaluacion >= 1 && evaluacion <= 5) {
                bono = 0.00;
            } else if (evaluacion >= 6 && evaluacion <= 8) {
                bono = bono * 0.8;
            } else {
                bono = bono * 0.9;
            }

            salario_bruto = 4000.00 + bono;
            salario_neto = salario_bruto * 0.88;

            cout << "\nSalario bruto: C$" << salario_bruto << endl;
            cout << "Bono: C$" << bono << endl;
            cout << "Evaluación recibida: " << evaluacion << endl;
            cout << "Salario neto: C$" << salario_neto << endl;
        }
    }

    return 0;
}