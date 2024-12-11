#include "facade.h"


int main(){
    DvdPlayer dvd;
    AudiPleyer audio;
    Prayektor prayektor;

    HomeTeatr tetre(dvd, audio, prayektor);
    tetre.setMovie("Titanik");
    tetre.startVotch();
    tetre.endVotch();


    return 0;    
}