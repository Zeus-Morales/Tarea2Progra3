#include <string>

using namespace std;

class Paquete{
  public:
    Paquete(string, string, string, string, string, int, double, double);
    double calcularCosto(); 

  protected:
    string nombre, direccion, ciudad, estado, destinatario;
    int codigo_postal;
    double peso, costo;
};

class PaqueteDosDias : public Paquete{
  public:
    PaqueteDosDias(string, string, string, string, string, int, double, double, int);
    double calcularCosto();

  protected:
    int cuota;
}; 

class PaqueteNocturno : public Paquete{
  public:
    PaqueteNocturno(string, string, string, string, string, int, double, double, int);
    double calcularCosto();
    
  protected:
    int cuota;
};