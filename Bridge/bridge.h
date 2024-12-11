#pragma once

#include <memory>

class Color {
public:
    virtual ~Color() = default ;
    virtual std::string get_color() = 0;
};

class Red : public Color {
    std::string get_color() override;
};

class Blue : public Color {
    std::string get_color() override;
};



class Shape {
public:
    Shape();
    Shape(std::shared_ptr<Color> color);
    virtual ~Shape() = default;
    virtual void drow() = 0;

protected:
    std::shared_ptr<Color> color_;

};

class Circle : public Shape {
public:
    Circle();
    Circle(std::shared_ptr<Color> color);
    ~Circle() = default;
    void drow() override;

};

class Scuare : public Shape {
    Scuare();
    Scuare(std::shared_ptr<Color> color);
    ~Scuare() = default;
    void drow() override;
};
