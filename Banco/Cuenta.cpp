#include "Cuenta.h"

Cuenta::Cuenta(int saldo_inicial)
{
  if(saldo_inicial >= 0)
    saldo = saldo_inicial;
  else{
    saldo = 0;
    printf("Saldo inicial debe ser mayor que 0.\n");
  }
}

void Cuenta::abonar(int monto)
{
  saldo+=monto;
}

void Cuenta::cargar(int monto)
{
  if(saldo < monto)
    saldo-=monto;
  else
     printf("Monto es mayor que saldo. No se pudo retirar\n");
}

int Cuenta::obtenerSaldo()
{
  return printf("Saldo: %d\n",saldo);
}