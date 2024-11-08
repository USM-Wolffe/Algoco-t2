#include <iostream>
#include "costos.h"

using namespace std;

int main() {
    // Cargar las tablas de costos al inicio del programa
    cargarCostos("data/cost_insert.txt", costo_insercion);
    cargarCostos("data/cost_delete.txt", costo_eliminacion);
    cargarCostosMatriz("data/cost_replace.txt", costo_sustitucion);
    cargarCostosMatriz("data/cost_transpose.txt", costo_transposicion);

    // Aquí va la lógica de tus algoritmos y la interacción con el usuario

    // Ejemplo de uso de las funciones de costo
    char a = 'a', b = 'b';
    cout << "Costo de sustituir " << a << " por " << b << ": " << costo_sub(a, b) << endl;
    cout << "Costo de insertar " << b << ": " << costo_ins(b) << endl;
    cout << "Costo de eliminar " << a << ": " << costo_del(a) << endl;
    cout << "Costo de transponer " << a << " y " << b << ": " << costo_trans(a, b) << endl;

    return 0;
}
