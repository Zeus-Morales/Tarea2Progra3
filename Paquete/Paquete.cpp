#include "Paquete.h"

Paquete::Paquete(string nombre, string direccion, string ciudad, string estado, string destinatario, int codigo_postal, double peso, double costo){
  this->nombre = nombre;
  this->direccion = direccion;
  this->ciudad = ciudad;
  this->estado = estado;
  this->destinatario = destinatario;
  this->codigo_postal = codigo_postal;

  if(peso > 0 && costo > 0){
    this->peso = peso;
    this->costo = costo;
  }
}

double Paquete::calcularCosto(){
  return this->costo * this->peso;
}

PaqueteDosDias::PaqueteDosDias(string nombre, string direccion, string ciudad, string estado, string destinatario, int codigo_postal, double peso, double costo, int cuota) : Paquete(nombre, direccion, ciudad, estado, destinatario, codigo_postal, peso, costo){ 
  this->nombre = nombre;
  this->direccion = direccion;
  this->ciudad = ciudad;
  this->estado = estado;
  this->destinatario = destinatario;
  this->codigo_postal = codigo_postal;
  this->cuota = cuota;

  if(peso > 0 && costo > 0){
    this->peso = peso;
    this->costo = costo;
  }
}

double PaqueteDosDias::calcularCosto(){
  return this->cuota + (this->costo * this->peso);
}

PaqueteNocturno::PaqueteNocturno(string nombre, string direccion, string ciudad, string estado, string destinatario, int codigo_postal, double peso, double costo, int cuota) : Paquete(nombre, direccion, ciudad, estado, destinatario, codigo_postal, peso, costo){ 
  this->nombre = nombre;
  this->direccion = direccion;
  this->ciudad = ciudad;
  this->estado = estado;
  this->destinatario = destinatario;
  this->codigo_postal = codigo_postal;
  this->cuota = cuota;

  if(peso > 0 && costo > 0){
    this->peso = peso;
    this->costo = costo;
  }
}

double PaqueteNocturno::calcularCosto(){
  return (this->cuota * this->peso) + (this->costo * this->peso);
}