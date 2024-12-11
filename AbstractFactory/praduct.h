#pragma once


class ATable{
public:
    virtual void table() = 0;
    virtual ~ATable() = default;

};

class AChear{
public:
    virtual void chear() = 0;
    virtual ~AChear() = default;

};


class ASofa{
public:
    virtual void sofa() = 0;
    virtual ~ASofa() = default;

};


class modernTable : public ATable{
public:
    void table() override;
};

class modernChear : public AChear{
public:
    void chear() override;
};


class modernSofa : public ASofa{
public:
    void sofa() override;
};