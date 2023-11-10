#include <iostream>
#include <vector>
#include "cliente.h"
#include "trabajador.h"

using namespace std;

int main() {
    // Crear objetos de las clases
    Cliente cliente(123456, "Cliente", "ApellidoCliente", 111111, 3);
    Trabajador trabajador(789012, "Trabajador", "ApellidoTrabajador", 222222, "Desarrollador", 50000);

    // Mostrar información antes de realizar cambios
    cout << "Informacion antes de realizar cambios:" << endl;
    cout << "Cliente:" << endl;
    cliente.mostrarInformacion();
    cout << "\nTrabajador:" << endl;
    trabajador.mostrarInformacion();

    // Realizar cambios utilizando polimorfismo
    vector<Persona*> personas;
    personas.push_back(&cliente);
    personas.push_back(&trabajador);

    for (const auto& persona : personas) {
        persona->mostrarInformacion();
        cout << "----------------------" << endl;
    }

    // Liberar la memoria
    for (const auto& persona : personas) {
        delete persona;
    }

    return 0;
}
