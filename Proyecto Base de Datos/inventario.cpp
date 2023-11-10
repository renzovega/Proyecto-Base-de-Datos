#include <iostream>
#include <string>

using namespace std;

#include "Inventario.h"

// Constructor de Inventario
Inventario::Inventario() {
    id_producto = 0;
    nombre_producto = "";
    cantidad_en_stock = 0;
    precio_unitario = 0.0;
    proveedor = "";
    fecha_adquisicion = "";
    categoria = "";
}

// Métodos Get
int Inventario::get_id_producto() const {
    return id_producto;
}
string Inventario::get_nombre() const {
    return nombre_producto;
}
int Inventario::get_cantidad_en_stock() const {
    return cantidad_en_stock;
}
double Inventario::get_precio_unitario() const {
    return precio_unitario;
}
string Inventario::get_proveedor() const {
    return proveedor;
}
string Inventario::get_fecha_adquisicion() const {
    return fecha_adquisicion;
}
string Inventario::get_categoria() const {
    return categoria;
}

// Métodos Set
void Inventario::set_id_producto(int id) {
    id_producto = id;
}
void Inventario::set_nombre(const string& nombre) {
    nombre_producto = nombre;
}
void Inventario::set_cantidad_en_stock(int cantidad) {
    cantidad_en_stock = cantidad;
}
void Inventario::set_precio_unitario(double precio) {
    precio_unitario = precio;
}
void Inventario::set_proveedor(const string& proveedor) {
    this->proveedor = proveedor;
}
void Inventario::set_fecha_adquisicion(const string& fecha) {
    fecha_adquisicion = fecha;
}
void Inventario::set_categoria(const string& categoria) {
    this->categoria = categoria;
}

// Métodos Print
void Inventario::print_producto_info() const {
    cout << "ID del Producto: " << id_producto << endl;
    cout << "Nombre del Producto: " << nombre_producto << endl;
    cout << "Cantidad en Stock: " << cantidad_en_stock << endl;
    cout << "Precio Unitario: " << precio_unitario << endl;
    cout << "Proveedor: " << proveedor << endl;
    cout << "Fecha de Adquisición: " << fecha_adquisicion << endl;
    cout << "Categoría del Producto: " << categoria << endl;
}

// Métodos Delete
void Inventario::delete_producto() {
    id_producto = 0;
    nombre_producto = "";
    cantidad_en_stock = 0;
    precio_unitario = 0.0;
    proveedor = "";
    fecha_adquisicion = "";
    categoria = "";
}
