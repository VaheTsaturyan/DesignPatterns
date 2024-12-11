#pragma once 

#include <memory>
#include <cstddef>

class ATMHendler {
public:
    ATMHendler() = default;
    ATMHendler(std::shared_ptr<ATMHendler> suc );
    ~ATMHendler() = default;
    virtual void HandleRequest(int amt);

private:
    std::shared_ptr<ATMHendler> suc_;

};



class Dollar50Handler : public ATMHendler{
public:
    Dollar50Handler() = default;
    Dollar50Handler(std::shared_ptr<ATMHendler> suc );
    ~Dollar50Handler() = default;
    void HandleRequest(int amt);

};


class Dollar20Handler : public ATMHendler{
public:
    Dollar20Handler() = default;
    Dollar20Handler(std::shared_ptr<ATMHendler> suc );
    ~Dollar20Handler() = default;
    void HandleRequest(int amt);

};


class Dollar10Handler : public ATMHendler{
public:
    Dollar10Handler() = default;
    Dollar10Handler(std::shared_ptr<ATMHendler> suc );
    ~Dollar10Handler() = default;
    void HandleRequest(int amt);
};
