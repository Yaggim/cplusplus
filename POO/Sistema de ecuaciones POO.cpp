#include <iostream>
#include <vector>

using namespace std;

class SistemaDeEcuaciones {
private:
    vector<vector<double> > coeficientes;
    vector<double> terminosIndependientes;
public:
    SistemaDeEcuaciones(vector<vector<double> > coef, vector<double> t_ind) {
        coeficientes = coef;
        terminosIndependientes = t_ind;
    }
    void resolver() {
        int n = coeficientes.size();
        for (int i = 0; i < n; i++) {
            // Pivoteo parcial
            int maxIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (abs(coeficientes[j][i]) > abs(coeficientes[maxIndex][i])) {
                    maxIndex = j;
                }
            }
            swap(coeficientes[i], coeficientes[maxIndex]);
            swap(terminosIndependientes[i], terminosIndependientes[maxIndex]);

            // Eliminación hacia adelante
            for (int j = i + 1; j < n; j++) {
                double factor = coeficientes[j][i] / coeficientes[i][i];
                for (int k = i + 1; k < n; k++) {
                    coeficientes[j][k] -= factor * coeficientes[i][k];
                }
                terminosIndependientes[j] -= factor * terminosIndependientes[i];
            }
        }

        // Sustitución hacia atrás
        vector<double> soluciones(n);
        for (int i = n - 1; i >= 0; i--) {
            double suma = 0.0;
            for (int j = i + 1; j < n; j++) {
                suma += coeficientes[i][j] * soluciones[j];
            }
            soluciones[i] = (terminosIndependientes[i] - suma) / coeficientes[i][i];
        }

        // Mostrar solución
        cout << "Las soluciones son:" << endl;
        for (int i = 0; i < n; i++) {
            cout << "x" << i << " = " << soluciones[i] << endl;
        }
    }
};

int main() {
    // Ejemplo de sistema de ecuaciones
    vector<vector<double>> coeficientes = {{2, 1, -1}, {-3, -1, 2}, {-2, 1, 2}};
    vector<double> terminosIndependientes = {8, -11, -3};

    // Resolver el sistema de ecuaciones
    SistemaDeEcuaciones sistema(coeficientes, terminosIndependientes);
    sistema.resolver();

    return 0;
}
