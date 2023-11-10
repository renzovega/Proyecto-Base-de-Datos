#ifndef TRANSACCION_H
#define TRANSACCION_H

using namespace std;

// Constructor de Transaccion
class Transaccion {
private:
    string numero_factura_recibo;
    string fecha_hora;
    double subtotal;
    string metodo_pago;
    int id_producto_servicio;
    int id_empleado;
    string tipo_de_impuesto;
    double impuesto;
    string tipo_de_descuento;
    double descuento;
    double monto_total;

public:
    Transaccion();

    // Métodos Get
    string get_numero_factura() const;
    string get_fecha_hora() const;
    double get_subtotal() const;
    string get_metodo_pago() const;
    int get_id_producto_servicio() const;
    int get_id_empleado() const;
    string get_tipo_de_impuesto() const;
    double get_impuesto() const;
    string get_tipo_de_descuento() const;
    double get_descuento() const;
    double get_monto_total() const;

    // Métodos Set
    void set_numero_factura(const string& numero);
    void set_fecha_hora(const string& fecha_y_hora);
    void set_subtotal(double sub_total);
    void set_metodo_pago(const string& metodo);
    void set_id_producto_servicio(int id);
    void set_id_empleado(int empleado);
    void set_tipo_de_impuesto(const string& tipo_de_impuesto);
    void set_impuesto(double cantidad_impuesto);
    void set_tipo_de_descuento(const string& tipo_de_descuento);
    void set_descuento(double cantidad_descuento);

    // Métodos print
    void print_transaccion_info() const;

    // Métodos delete
    void delete_transaccion();

    void recalcular_monto_total();
};

#endif
