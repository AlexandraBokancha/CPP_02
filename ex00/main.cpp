
/* Fixed-point numbers 
* In fixed point representation, the number is split
* into an integer part and a fractional part.
* A point serves as a divider between a number's
* integer and fractional parts.
* left : 2^0, 2^1, 2^2 | right : 2^-1, 2^-2, 2^-3 
*/

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b( a );
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}