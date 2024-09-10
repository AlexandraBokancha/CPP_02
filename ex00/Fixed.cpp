#include "Fixed.hpp"

Fixed::Fixed( void ){
    std::cout << "Default constructor called" << std::endl;
    this->_fixedNum = 0;
}

/* The copy constructor takes a reference to an 
object and constructs a new one based on
the values of the referenced one.*/

Fixed::Fixed(const Fixed& src){ 
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(src.getRawBits());
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& newFixed){
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &newFixed)
        this->_fixedNum = newFixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedNum;
}

void Fixed::setRawBits(int const raw){
    this->_fixedNum = raw;
}