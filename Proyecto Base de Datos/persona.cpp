#include <iostream>
#include <string>

using namespace std;

#include "persona.h"

Persona::Persona(int dni, const string& nombres, const string& apellidos, int telefono) {
    this->dni = dni;
    this->nombres = nombres;
    this->apellidos = apellidos;
    this->numeroTelefono = telefono;
}

// Métodos Get
int Persona::getDNI() const {
    return dni;
}
string Persona::getNombres() const {
    return nombres;
}
string Persona::getApellidos() const {
    return apellidos;
}
int Persona::getNumeroTelefono() const {
    return numeroTelefono;
}

// Métodos Set
void Persona::setDNI(int dni) {
    this->dni = dni;
}
void Persona::setNombres(const string& nombres) {
    this->nombres = nombres;
}
void Persona::setApellidos(const string& apellidos) {
    this->apellidos = apellidos;
}
void Persona::setNumeroTelefono(int numeroTelefono) {
    this->numeroTelefono = numeroTelefono;
}

// Métodos Print
void Persona::mostrarInformacion() const {
    cout << "DNI: " << dni << endl;
    cout << "Nombre: " << nombres << endl;
    cout << "Apellidos: " << apellidos << endl;
    cout << "Teléfono: " << numeroTelefono << endl;
}

// Métodos Delete
void Persona::delete_persona() {
    dni = 0;
    nombres = "";
    apellidos = "";
    numeroTelefono = 0;
}