#include "Cuenta.h"
#include <stdio.h>

int main()
{
  Cuenta cuenta1(100);
  cuenta1.abonar(500);
  cuenta1.obtenerSaldo();
  return 0;
}