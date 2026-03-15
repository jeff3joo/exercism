#include "triangle.h"
#include <stdexcept>


namespace triangle {

    flavor kind(double a, double b, double c){
        if((a+b<=c)||(a+c<=b)||(b+c<=a)) throw std::domain_error("invalid triangle");
        if( a == b || b==c || a==c){
            return (a==b && b==c) ? flavor::equilateral : flavor::isosceles;
        }
        return flavor::scalene;
    }

}  // namespace triangle
