#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {
protected:
    int dni;
    string nombres;
    string apellidos;
    int numeroTelefono;

public:
    Persona(int dni, const string& nombres, const string& apellidos, int telefono);

    // Métodos Get
    int getDNI() const;
    string getNombres() const;
    string getApellidos() const;
    int getNumeroTelefono() const;

    // Métodos Set
    void setDNI(int dni);
    void setNombres(const string& nombres);
    void setApellidos(const string& apellidos);
    void setNumeroTelefono(int numeroTelefono);

    // Métodos Print
    virtual void mostrarInformacion() const;

    // Métodos Delete
    void delete_persona();
};

#endif