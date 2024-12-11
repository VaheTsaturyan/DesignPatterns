#pragma once 

#include <string>
#include <memory>
#include <iostream>

class Shape {
public:
    virtual void drow() = 0;
};


class Rect : public Shape {
public:
    void drow() override;
};

class Circle : public Shape {
public:
    void drow() override;
};


class Decorator : public Shape {
public:
    Decorator(std::shared_ptr<Shape> shape);
    void drow() override;
private:
    std::shared_ptr<Shape> shape_;
};


class Colored : public Decorator {
public:
    Colored(std::shared_ptr<Shape> shape, std::string color);
    void drow() override;
private:
    std::string color_;
};
