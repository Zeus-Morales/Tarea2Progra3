#include <stdio.h>

class Cuenta {
  public:
    Cuenta(int saldo_inicial);
    void abonar(int monto);
    void cargar(int monto);
    int obtenerSaldo();

  protected:
    int saldo;
};