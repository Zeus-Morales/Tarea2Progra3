#include <stdlib.h>
#include <stdio.h>

class Fecha{
  public:
    Fecha(int, int, int);
    int getMes();
    int getDia();
    int getAnio();

    void setMes(int);
    void setDia(int);
    void setAnio(int);

    void mostrarFecha();

  protected:
    int mes, dia, anio;
};
