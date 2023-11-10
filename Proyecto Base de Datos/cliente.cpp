#include <iostream>
#include <string>
using namespace std;

#include "cliente.h"

Cliente::Cliente(int dni, const string& nombres, const string& apellidos, int telefono, int mesa)
    : Persona(dni, nombres, apellidos, telefono) {
    this->mesa = mesa;
}

// Métodos Get
int Cliente::getMesa() const {
    return mesa;
}

// Métodos Set
void Cliente::setMesa(int Mesa) {
    this->mesa = Mesa;
}

// Métodos Print
void Cliente::mostrarInformacion() const {
    Persona::mostrarInformacion();
    cout << "Mesa: " << mesa << endl;
}
// Métodos Delete
void Cliente::deleteMesa() {
    mesa = 0;
}

// Métodos Adicionales
void Cliente::realizarPedido(const string& descripcionPedido) {
    cout << "Informacion del pedido:" << descripcionPedido << endl;
}