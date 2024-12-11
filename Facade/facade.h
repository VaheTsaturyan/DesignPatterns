#pragma once

#include <string>

class DvdPlayer{
public:
    void on();
    void off();
};


class AudiPleyer{
public:
    void on();
    void off();
};


class Prayektor{
public:
    void on();
    void off();
};


class HomeTeatr{
public: 
    HomeTeatr(DvdPlayer& dvdPlayer, AudiPleyer& audioPlayer, Prayektor& prayektor);
    void setMovie(const std::string& filmName);

    void startVotch();
    void endVotch();

private:
    std::string filmName;
    DvdPlayer dvdPlayer;
    AudiPleyer audioPlayer;
    Prayektor prayektor;

};
