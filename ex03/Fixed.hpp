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

                /* copy constructor */
                Fixed( Fixed const & f );

                /* copy assignement operator overload */
                Fixed & operator=( Fixed const & f );
                
                /* destructor */
                ~Fixed( void );
                
                /*  constructor that takes a const int */
                Fixed( const int intNum );

                /* constructor that takes a const float */
                Fixed ( const float floatNum );

                /* returns the raw value of the fixed-point value */
                int getRawBits( void ) const;

                /* sets the raw value of the fixed-point number */
                void setRawBits( int const raw );

                /* converts the fixed-point value to a floating-point value */
                float toFloat( void ) const;

                /* converts the fixed-point value to an integer value */
                int toInt( void ) const;

                /* Arithmetic operators */
                
                /* --> current instance doesn't change, so we use const function */

                Fixed operator+( Fixed const & rhs ) const; 
                Fixed operator-( Fixed const & rhs ) const;
                Fixed operator*( Fixed const & rhs ) const;
                Fixed operator/( Fixed const & rhs ) const;

                /* Comparaison operators */

                bool operator>( Fixed const & rhs ) const;
                bool operator<( Fixed const & rhs ) const;
                bool operator>=( Fixed const & rhs ) const;
                bool operator<=( Fixed const & rhs ) const;
                bool operator==( Fixed const & rhs ) const;
                bool operator!=( Fixed const & rhs ) const;

                /* Increment/decrement operators */

                Fixed & operator++( void );
                Fixed & operator--( void );
                Fixed operator++( int );
                Fixed operator--( int );


                /* Overoaded memeber functions */

                static Fixed & min( Fixed & new1, Fixed & new2 );
                static const Fixed & min( Fixed const & new1, Fixed const & new2 );
                static Fixed & max( Fixed & new1, Fixed & new2 );
                static const Fixed & max( Fixed const & new1, Fixed const & new2 );

};

/* An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as parameter. */

std::ostream & operator<<( std::ostream & o, Fixed const & newFixed );

#endif