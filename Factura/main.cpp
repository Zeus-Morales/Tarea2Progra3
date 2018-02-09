#include <stdlib.h>
#include "Factura.h"

int main(){
    int opc;
    /*do{
        printf("\n*****Menu*****");
        printf("\n1.Factura");
    }while(opc != 6);*/
  
    Factura factura("1234", "Wrench", 5, 500);
    factura.obtenerMontoFactura();
    
    return 0;
}
