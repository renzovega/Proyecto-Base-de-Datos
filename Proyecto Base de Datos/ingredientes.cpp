#include <iostream>
#include <string>
using namespace std; 

#include "Ingredientes.h"

// Constructor de Ingredientes
Ingredientes::Ingredientes() {
    fecha_caducidad = "";
}

// Métodos Get
string Ingredientes::get_fecha_caducidad() const {
    return fecha_caducidad;
}

// Métodos Set
void Ingredientes::set_fecha_caducidad(const string& fecha) {
    fecha_caducidad = fecha;
}

// Métodos Print
void Ingredientes::print_ingrediente_info() const {
    // Imprimir información del ingrediente, incluyendo la información heredada de Inventario
    print_producto_info(); 
    cout << "Fecha de Caducidad: " << fecha_caducidad << endl;
}

// Métodos Delete
void Ingredientes::delete_ingrediente() {
    // Imprimir información del ingrediente incluyendo la información heredada de Inventario.
    void delete_producto();
    fecha_caducidad = "";
}