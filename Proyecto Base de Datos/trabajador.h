#ifndef TRABAJADOR_H
#define TRABAJADOR_H

#include "persona.h"
using namespace std;

class Trabajador : public Persona {
private:
    string puesto;
    int salario;

public:
    Trabajador(int dni, const string& nombres, const string& apellidos, int telefono, const string& puesto, int salario);

    // Métodos Get
    string getPuesto() const;
    int getSalario() const;

    // Métodos Set
    void setPuesto(const string& puesto);
    void setSalario(int salario);

    // Métodos Print
    void mostrarInformacion() const override;

    // Métodos Delete
    void deleteTrabajador();

    // Métodos Adicionales
    void aplicarBonificacionPorRendimiento(int porcentajeBonificacion);
    void aplicarBonificacionPorAntiguedad(int tiempo);
};

#endif