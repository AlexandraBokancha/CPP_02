#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class	Fixed
{
	private:

                static const int    _fractionalBits = 8;
                int                 _fixedNum;

	public :

        // constructor 
        Fixed( void );

        // copy constructor
        Fixed( const Fixed& f );

        // copy assignement operator overload
        Fixed &operator=( const Fixed& f );
        
        // destructor
        ~Fixed( void );

        /* returns the raw value of the fixed-point value */
        int getRawBits( void ) const;

        /* sets the raw value of the fixed-point number */
        void setRawBits( int const raw );

};


#endif