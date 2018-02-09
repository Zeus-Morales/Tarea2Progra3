#include "Paquete.h"

int main(){
    Paquete paqueteNormal("Ramon", "Res. El Barrial", "San Pedro Sula", "Honduras", "Estados Unidos", 33137, 30.2, 50.7);
    PaqueteDosDias paqueteDosDias("Gary", "Sunnyside", "Weston", "Estados Unidos", "Honduras", 34746, 40.8, 80.5, 30.2, "Ramon", "Res. El Barrial", "San Pedro Sula", "Honduras", "Estados Unidos", 33137, 30.2, 50.7);
    PaqueteNocturno paqueteNocturno("Sebastian", "El Barrial", "San Pedro Sula", "Honduras", "Panama", 24743, 70.0, 99.8, 60.3, "Ramon", "Res. El Barrial", "San Pedro Sula", "Honduras", "Estados Unidos", 33137, 30.2, 50.7);
}