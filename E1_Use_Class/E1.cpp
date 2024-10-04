// E1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class Retangle {
//Declaretions Retangle Class  for Area of a Rectangle  Area = Length × Width

//Define Variables width and length of Retangle
private:
    double v_width;
    double v_length;

// Prototype Functions methods for get width and length of Retangle
public:

    void setwidth(double width);
  
    void setlength(double length);
    
    double calculate()const;
   
};
// Implementation Functions  methods for get width and length of Retangle

void Retangle::setwidth(double width)
{
    v_width = width;
}
void Retangle::setlength(double length)
{
    v_length = length;
}

double Retangle::calculate()const
{
    return v_width * v_length;
}

// create object r from Retangle class and pass parameter 

int main()
{
    Retangle r;
    r.setlength(10);
    r.setwidth(5);

    std::cout <<"Area="<< r.calculate() <<"\n";
}
