#include "Fixed.hpp"
#include "Point.hpp"

/* Le lien pour les testeurs qui veulent bien tester 
--> https://planetcalc.com/8108/ */

int main( void )
{
    Point const a(7, 2);
    Point const b(11, 1);
    Point const c(2, 2);
    Point const point(7, 3);

    if (bsp(a, b, c, point))
        std::cout << "Inside" << std::endl;
    else
        std::cout << "Outside" << std::endl;
    return (0);
}