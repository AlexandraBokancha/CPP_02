#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
//#include <cmath> // allowed functions : float roundf(float x);
#include "Fixed.hpp"

class Point{

    private : 
        Fixed const _x;
        Fixed const _y;
    public :

        /* Default constructor */
        Point( void );

        /*A constructor that takes as parameters two constant 
            floating-point numbers. It initializes x and y with those parameters */
        Point( const float x, const float y);

        /* Copy constructor */
        Point ( Point const & src );

        /* Copy assignment operator overload */
        Point & operator=( Point const & rhs );


        /* Destructor */
        ~Point();

        int getX() const;
        int getY() const;
};

/* A function to check whether point lies inside the triangle formed 
   by a, b, c vertices of trinagle */

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif