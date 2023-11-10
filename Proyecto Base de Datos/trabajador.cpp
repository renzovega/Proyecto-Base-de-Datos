#include <iostream>
#include <string>
using namespace std;

#include "trabajador.h"

Trabajador::Trabajador(int dni, const string& nombres, const string& apellidos, int telefono, const string& puesto, int salario)
    : Persona(dni, nombres, apellidos, telefono) {
    this->puesto = puesto;
    this->salario = salario;
}

// Métodos Get
string Trabajador::getPuesto() const {
    return puesto;
}
int Trabajador::getSalario() const {
    return salario;
}

// Métodos Set
void Trabajador::setPuesto(const string& Puesto) {
    this->puesto = Puesto;
}
void Trabajador::setSalario(int Salario) {
    this->salario = Salario;
}

// Métodos Print
void Trabajador::mostrarInformacion() const {
    Persona::mostrarInformacion();
    cout << "Puesto: " << puesto << endl;
    cout << "Salario: " << salario << endl;
}

// Métodos Delete
void Trabajador::deleteTrabajador() {
    puesto = "";
    salario = 0;
}

// Métodos Adicionales
void Trabajador::aplicarBonificacionPorRendimiento(int porcentajeBonificacion) {
    salario += salario * (porcentajeBonificacion / 100.0);
}
void Trabajador::aplicarBonificacionPorAntiguedad(int tiempo) {
    if (tiempo >= 5) {
        salario += 500;  
    }
}