#include "Fixed.hpp"

Fixed::Fixed(void) : _num(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNum){
    std::cout << "Int constructor called" << std::endl;
    this->_num = intNum << _fractionalBits;
}

Fixed::Fixed(const float floatNum){
    std::cout << "Float constructor called" << std::endl;
    this->_num = roundf(floatNum * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& src){ 
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed &Fixed::operator=(const Fixed& newFixed){
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &newFixed)
        this->_num = newFixed.getRawBits();
    return *this;
}

Fixed Fixed::operator+(const Fixed & rhs){
    return this->_num + rhs.getRawBits();
}

Fixed Fixed::operator-(const Fixed & rhs){
    return this->_num - rhs.getRawBits();
}

Fixed Fixed::operator*(const Fixed & rhs){
    return this->_num * rhs.getRawBits();
}

Fixed Fixed::operator/(const Fixed & rhs){
    return this->_num / rhs.getRawBits();
}

int Fixed::getRawBits(void) const {
    return this->_num;
}

void Fixed::setRawBits(int const raw){
    this->_num = raw;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(this->_num )/ (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return this->_num / (1 << _fractionalBits);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

std::ostream & operator<<(std::ostream& o, Fixed const & newFixed){
    o << newFixed.toFloat();
    return (o);
}
