#include "Factura.h"

Factura::Factura(string numeroPieza, string descripcionPieza, int cantidadArticulos, int precioArticulo, ...){
    this->numeroPieza = numeroPieza;
    this->descripcionPieza = descripcionPieza;
    this->cantidadArticulos = cantidadArticulos;
    this->precioArticulo = precioArticulo;
}
string Factura::getNumeroPieza(){
    return numeroPieza;
}
string Factura::getDescripcionPieza(){
    return descripcionPieza;
}
int Factura::getCantidadArticulos(){
    return cantidadArticulos;
}
int Factura::getPrecioArticulo(){
    return precioArticulo;
}

void  Factura::setNumeroPieza(string np){
     numeroPieza = np;
}
void  Factura::setDescripcionPieza(string dp){
     descripcionPieza = dp;
}
void  Factura::setCantidadArticulos(int ca){
     cantidadArticulos = ca;
}
void  Factura::setPrecioArticulo(int pa){
     precioArticulo = pa;
}
int Factura::obtenerMontoFactura(){
    printf("Factura");
    return printf("\nMonto Final: %d\n", getPrecioArticulo()*getCantidadArticulos());
}