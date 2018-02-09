#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

class Factura{
    public:
        Factura(string, string, int, int, ...);
        string getNumeroPieza();
        string getDescripcionPieza();
        int getCantidadArticulos();
        int getPrecioArticulo();
        
        void setNumeroPieza(string);
        void setDescripcionPieza(string);
        void setCantidadArticulos(int);
        void setPrecioArticulo(int);

        int obtenerMontoFactura();
    protected:
        string numeroPieza;
        string descripcionPieza;
        int cantidadArticulos;
        int precioArticulo;
};