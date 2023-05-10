#include <iostream>

using namespace std;

int main() {
    int n, i, j;
    float nota, promedio, promedioMaximo = 0;
    
    while (true) {
        cout << "Ingrese el número de estudiantes (o escriba 'salir' para finalizar): ";
        cin >> n;
        
        if (cin.fail()) {
            cout << "¡Hasta luego!" << endl;
            break;
        }
        
        promedioMaximo = 0;
        
        for (i = 1; i <= n; i++) {
            promedio = 0;
            
            for (j = 1; j <= n; j++) {
                cout << "Ingrese la nota " << j << " del estudiante " << i << ": ";
                cin >> nota;
                promedio += nota;
            }
            
            promedio /= n;
            
            if (promedio > promedioMaximo) {
                promedioMaximo = promedio;
            }
        }
        
        cout << "El promedio más alto es: " << promedioMaximo << endl;
    }
    
    return 0;
}