#include "ChainOfResponsibility.h"

#include <iostream>

int main(){

    std::cout << "Chain of Responsibility\n";

    std::shared_ptr<Dollar10Handler> pTen = std::make_shared<Dollar10Handler>();
    std::shared_ptr<Dollar20Handler> pTweenty = std::make_shared<Dollar20Handler>(pTen);
    std::shared_ptr<Dollar50Handler> pFifty = std::make_shared<Dollar50Handler>(pTweenty);
    std::shared_ptr<ATMHendler> atm = std::make_shared<ATMHendler>(pFifty);
    
    std::cout << "Please withdraw 530$\n";
    atm->HandleRequest(530);

    std::cout << "Please withdraw 545$\n";
    atm->HandleRequest(545);

}