#ifndef CLIENTE_H
#define CLIENTE_H

#include "persona.h"
using namespace std;

class Cliente : public Persona {
private:
    int mesa;

public:
    Cliente(int dni, const string& nombres, const string& apellidos, int telefono, int mesa);

    // Métodos Get
    int getMesa() const;

    // Métodos Set
    void setMesa(int mesa);

    // Métodos Print
    void mostrarInformacion() const override;

    // Métodos Delete
    void deleteMesa();

    // Métodos Adicionales
    void realizarPedido(const string& descripcionPedido);
};

#endif