#include "Point.hpp"

Point::Point( void ): _x(0), _y(0) {
   // std::cout << "Default constructor called" << std::endl;
    return ;
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
   // std::cout << "Float constructor called" << std::endl;
    return ;
}

Point::Point( Point const & src ) : _x(src._x), _y(src._y){
   // std::cout << "Copy constructor called" << std::endl;
}

Point & Point::operator=( Point const & rhs){
    (void) rhs;
    return *this;
}

int Point::getX() const {
    return this->_x.toInt();
}

int Point::getY() const {
    return this->_y.toInt();
}

Point::~Point(){
    //std::cout << "Destructor called" << std::endl;
    return ;
}

