#include <iostream>
#include <string>
using namespace std;

#include "Transaccion.h"

// Constructor de Transaccion
Transaccion::Transaccion() {
    numero_factura_recibo = "";
    fecha_hora = "";
    subtotal = 0.0;
    metodo_pago = "";
    id_producto_servicio = 0;
    id_empleado = 0;
    tipo_de_impuesto = "";
    impuesto = 0.0;
    tipo_de_descuento = "";
    descuento = 0.0;
    monto_total = 0.0;
}

// Métodos Get
string Transaccion::get_numero_factura() const {
    return numero_factura_recibo;
}
string Transaccion::get_fecha_hora() const {
    return fecha_hora;
}
double Transaccion::get_subtotal() const {
    return subtotal;
}
string Transaccion::get_metodo_pago() const {
    return metodo_pago;
}
int Transaccion::get_id_producto_servicio() const {
    return id_producto_servicio;
}
int Transaccion::get_id_empleado() const {
    return id_empleado;
}
string Transaccion::get_tipo_de_impuesto() const {
    return tipo_de_impuesto;
}
double Transaccion::get_impuesto() const {
    return impuesto;
}
string Transaccion::get_tipo_de_descuento() const {
    return tipo_de_descuento;
}
double Transaccion::get_descuento() const {
    return descuento;
}
double Transaccion::get_monto_total() const {
    return monto_total;
}


// Métodos Set
void Transaccion::set_numero_factura(const string& numero) {
    numero_factura_recibo = numero;
}
void Transaccion::set_fecha_hora(const string& fecha_y_hora) {
    fecha_hora = fecha_y_hora;
}
void Transaccion::set_subtotal(double sub_total) {
    subtotal = sub_total;
    recalcular_monto_total();
}
void Transaccion::set_metodo_pago(const string& metodo) {
    metodo_pago = metodo;
}
void Transaccion::set_id_producto_servicio(int id) {
    id_producto_servicio = id;
}
void Transaccion::set_id_empleado(int empleado) {
    id_empleado = empleado;
}
void Transaccion::set_tipo_de_impuesto(const string& tipoimpuesto) {
    tipo_de_impuesto = tipoimpuesto;
}
void Transaccion::set_impuesto(double cantidad_impuesto) {
    impuesto = cantidad_impuesto;
    recalcular_monto_total();
}
void Transaccion::set_tipo_de_descuento(const string& tipodescuento) {
    tipo_de_descuento = tipodescuento;
}
void Transaccion::set_descuento(double cantidad_descuento) {
    descuento = cantidad_descuento;
    recalcular_monto_total();
}

// Métodos Print
void Transaccion::print_transaccion_info() const {
    cout << "Número de Factura o Recibo: " << numero_factura_recibo << endl;
    cout << "Fecha y Hora de la Transacción: " << fecha_hora << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Método de Pago: " << metodo_pago << endl;
    cout << "ID de Producto o Servicio: " << id_producto_servicio << endl;
    cout << "ID de Empleado: " << id_empleado << endl;
    cout << "Tipo de impuesto: " << tipo_de_impuesto << endl;
    cout << "Impuesto: " << impuesto << endl;
    cout << "Tipo de descuento: " << tipo_de_descuento << endl;
    cout << "Descuento: " << descuento << endl;
    cout << "El monto total es: " << monto_total << endl;
}

// Métodos Delete
void Transaccion::delete_transaccion() {
    numero_factura_recibo = "";
    fecha_hora = "";
    subtotal = 0.0;
    metodo_pago = "";
    id_producto_servicio = 0;
    id_empleado = 0;
    tipo_de_impuesto = "";
    impuesto = 0.0;
    tipo_de_descuento = "";
    descuento = 0.0;
    monto_total = 0.0;
}
void Transaccion::recalcular_monto_total() {
    monto_total = subtotal + (subtotal * (impuesto / 100));
    monto_total = monto_total - (monto_total * (descuento / 100));
}

