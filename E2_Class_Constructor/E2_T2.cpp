// E2_T2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class Retangle {
//Declaretions Retangle Class  for Area of a Rectangle  Area = Length × Width

//Define Variables width and length of Retangle
private:
    double v_width;
    double v_length;

public:

    //Constructors prototype
    Retangle(); 

    Retangle(double width, double length);
   

    // Implementation Functions  methods for get width and length of Retangle
    void setwidth(double width)
    {
        v_width = width;
    }
  
    void setlength(double length) {
        v_length = length;
    }
    
    double calculate()const
    {
        return v_width * v_length;
    }
};

//Constructors Impementations

Retangle::Retangle()
{
    std::cout << "No param constructors" << std::endl;
    v_width = 0;
    v_length = 0;
}

Retangle::Retangle(double width, double length)
{
    std::cout << "two param constructors" << std::endl;
    v_width = width;
    v_length = length;
}

// create object a and b and quantification Constructors with  from Retangle class

int main()
{
    Retangle a;
    Retangle b(2.42, 2.61);

    std::cout <<"area_a="<< a.calculate() << "\n";
    std::cout << "area_b=" << b.calculate() <<"\n";
}
