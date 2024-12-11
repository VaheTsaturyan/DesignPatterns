#include "facade.h"

#include <iostream>

void DvdPlayer::on(){
    std::cout<<"DVD : on\n";
}

void DvdPlayer::off(){
    std::cout<<"DVD : off\n";
}

void AudiPleyer::on(){
    std::cout<<"AUDIO : on\n";
}

void AudiPleyer::off(){
   std::cout<<"AUDIO : off\n";
}

void Prayektor::on(){
   std::cout<<"Prayektor : on\n";
}

void Prayektor::off(){
   std::cout<<"Prayektor : off\n";
}

HomeTeatr::HomeTeatr(DvdPlayer &dvdPlayer, AudiPleyer &audioPlayer, Prayektor &prayektor){
    this->dvdPlayer = dvdPlayer;
    this->audioPlayer = audioPlayer;
    this->prayektor = prayektor;
}

void HomeTeatr::setMovie(const std::string &filmName)
{
    this->filmName = filmName;
}

void HomeTeatr::startVotch()
{   
    dvdPlayer.on();
    audioPlayer.on();
    prayektor.on();
    std::cout<<filmName<<std::endl;
}

void HomeTeatr::endVotch(){
    prayektor.off();
    dvdPlayer.off();
    audioPlayer.off();
}
