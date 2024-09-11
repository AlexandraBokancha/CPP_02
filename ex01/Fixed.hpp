#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath> // allowed functions : float roundf(float x);

class	Fixed
{
	private:

                static const int    _fractionalBits = 8;
                int                 _num;
	
        public :

                Fixed( void );

                // copy constructor
                Fixed(const Fixed& f);

                // copy assignement operator overload
                Fixed &operator=(const Fixed& f);
                
                // destructor
                ~Fixed( void );
                
                // constructor that takes a const int
                Fixed(const int intNum);

                // constructor that takes a const float
                Fixed (const float floatNum);

                /* returns the raw value of the fixed-point value */
                int getRawBits( void ) const;

                /* sets the raw value of the fixed-point number */
                void setRawBits( int const raw );

                /* converts the fixed-point value to a floating-point value */
                float toFloat( void ) const;

                /* converts the fixed-point value to an integer value */
                int toInt( void ) const;
};

/* An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as parameter. */

std::ostream & operator<<(std::ostream& o, Fixed const & newFixed);

#endif