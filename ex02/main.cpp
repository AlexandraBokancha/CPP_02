#include "Fixed.hpp"
#include <stdio.h>

int main( void ) {

    /* SUBJECT TEST */

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    /* TESTING OTHER OPERATORS & OVERLOADING MEMBER FUNCTIONS */

    // Fixed c;
    // Fixed d( Fixed(2) / Fixed(5) );

    // std::cout << c << std::endl;
    // std::cout << --c << std::endl;
    // std::cout << c << std::endl;
    // std::cout << c-- << std::endl;
    // std::cout << c << std::endl;
    // std::cout << d << std::endl;
    

    // std::cout << Fixed::max( c, d ) << std::endl;
    // std::cout << Fixed::min( c, d ) << std::endl;
    
    return 0;
}