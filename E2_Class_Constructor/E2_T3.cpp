// E2_T3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Declaretions Retangle Class  for Area and Box Class for Volume  
class Retangle {

//Define Variables width and length of Retangle
private:
    double v_width;
    double v_length;

public:

    //Implementation Constructors
    Retangle() {

        v_width = 0;
        v_length = 0;
    }

    Retangle(double width, double length)
    {
        v_width = width;
        v_length = length;
    }
   
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

class Box {
public:

    //Implementation Constructors 
    Box(double w, double l, double h):r(w, l), v_height(h) {};
      
    double get_volume() {
        return r.calculate() * v_height;
    }

private:
    Retangle r;
    double v_height;
};

// create object r for area and b for volume

int main()
{
    Retangle r(5,2);
    Box b(5, 2, 3);
    std::cout << "area_r=" << r.calculate() << "\n";
    std::cout <<"volume_b="<< b.get_volume() << "\n";
}
