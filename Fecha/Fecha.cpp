#include "Fecha.h"

Fecha::Fecha(int dia, int mes, int anio){
    this->dia = dia;
    this->anio = anio;
    if(mes >= 1 && mes <= 12)
      this->mes = mes;
    else
      this->mes = 1; 
}
int Fecha::getDia(){
    return this->dia;
}
int Fecha::getMes(){
    return this->mes;
}
int Fecha::getAnio(){
    return this->anio;
}
void Fecha::setDia(int d){
    dia = d;
}
void Fecha::setMes(int m){
    if(m >= 1 && m <= 12)
      mes = m;
    else
      mes = 1; 
}
void Fecha::setAnio(int a){
    anio = a;
}
void Fecha::mostrarFecha(){
  printf("Fecha: %d/%d/%d\n", dia, mes, anio);
}