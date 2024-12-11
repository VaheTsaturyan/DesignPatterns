#include "ChainOfResponsibility.h"

#include <iostream>


ATMHendler::ATMHendler(std::shared_ptr<ATMHendler> suc = nullptr): suc_(suc) {}

void ATMHendler::HandleRequest(int amt){
    std::cout << suc_ << "\n";
    if(suc_){
        suc_->HandleRequest(amt);    
    }
}       



Dollar50Handler::Dollar50Handler(std::shared_ptr<ATMHendler> suc = nullptr):ATMHendler(suc){}

void Dollar50Handler::HandleRequest(int amt){
    if(amt % 50 == 0){
        std::cout << "numboer of 50 : " << amt/50 << "\n";
    }
    else {
        int numberOf50 = amt/50;
        std::cout << "numboer of 50 : " << amt/50 << "\n";
        amt = amt - numberOf50 * 50;
        ATMHendler::HandleRequest(amt);
    }
}   




Dollar20Handler::Dollar20Handler(std::shared_ptr<ATMHendler> suc = nullptr):ATMHendler(suc){}

void Dollar20Handler::HandleRequest(int amt){
    if(amt % 20 == 0){
        std::cout << "numboer of 20 : " << amt/20 << "\n";
    }
    else {
        int numberOf20 = amt/20;
        std::cout << "numboer of 20 : " << amt/20 << "\n";
        amt = amt - numberOf20 * 20;
        ATMHendler::HandleRequest(amt);
    }
}   



Dollar10Handler::Dollar10Handler(std::shared_ptr<ATMHendler> suc = nullptr):ATMHendler(suc){}

void Dollar10Handler::HandleRequest(int amt){
    if(amt % 10 == 0){
        std::cout << "numboer of 10 : " << amt/10 << "\n";
    }
    else {
        std::cout << "Can not withdraw this amount.\n";
    }
}   


