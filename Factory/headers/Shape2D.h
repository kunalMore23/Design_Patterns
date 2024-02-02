#pragma once

class Shape2D
{
public:
    double area() const;
    double perimeter() const;
    
private:
    double mPerimeter;
    double mArea;
};