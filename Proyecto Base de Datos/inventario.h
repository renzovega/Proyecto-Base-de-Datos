#ifndef INVENTARIO_H
#define INVENTARIO_H

using namespace std;

// Constructor de Inventario
class Inventario {
protected:
    int id_producto;
    string nombre_producto;
    int cantidad_en_stock;
    double precio_unitario;
    string proveedor;
    string fecha_adquisicion;
    string categoria;

public:
    Inventario();

    // Métodos Get
    int get_id_producto() const;
    string get_nombre() const;
    int get_cantidad_en_stock() const;
    double get_precio_unitario() const;
    string get_proveedor() const;
    string get_fecha_adquisicion() const;
    string get_categoria() const;

    // Métodos Set
    void set_id_producto(int id);
    void set_nombre(const string& nombre);
    void set_cantidad_en_stock(int cantidad);
    void set_precio_unitario(double precio);
    void set_proveedor(const string& proveedor);
    void set_fecha_adquisicion(const string& fecha);
    void set_categoria(const string& categoria);

    // Método Print
    void print_producto_info() const;

    // Método Delete
    void delete_producto();
};

#endif
