#ifndef INGREDIENTES_H
#define INGREDIENTES_H

#include "Inventario.h"
using namespace std;

// Constructor de Ingredientes
// Atributos y métodos heredados de la clase inventario
class Ingredientes : public Inventario {
private:
    string fecha_caducidad;

public:
    Ingredientes();

    // Métodos Get
    string get_fecha_caducidad() const;

    // Métodos Set
    void set_fecha_caducidad(const string& fecha);

    // Métodos Print
    void print_ingrediente_info() const;

    // Métodos Delete
    void delete_ingrediente();
};

#endif