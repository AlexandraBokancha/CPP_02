#include "Fixed.hpp"

Fixed::Fixed(void) : _num(0){
  //  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNum){
//    std::cout << "Int constructor called" << std::endl;
    this->_num = intNum << _fractionalBits;
}

Fixed::Fixed(const float floatNum){
   // std::cout << "Float constructor called" << std::endl;
    this->_num = roundf(floatNum * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& src){ 
    //std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed &Fixed::operator=(const Fixed& newFixed){
   // std::cout << "Copy assignement operator called" << std::endl;
    if (this != &newFixed)
        this->_num = newFixed.getRawBits();
    return *this;
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
  //  std::cout << "Destructor called" << std::endl;
}
                        /* Arithmetic operators */

Fixed Fixed::operator+(const Fixed & rhs) const{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed & rhs) const{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed & rhs) const{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed & rhs) const{
    return Fixed(this->toFloat() / rhs.toFloat());
}

                            /* Comparaison operators */

bool Fixed::operator>(const Fixed & rhs) const{
    return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed & rhs) const{
    return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed & rhs) const{
    return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed & rhs) const{
    return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed & rhs) const{
    return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed & rhs) const{
    return (this->getRawBits() != rhs.getRawBits());
}

                            /* Increment/decrement operators */

/* prefix : ++var, --var, increased->return */

Fixed &Fixed::operator++(void){
    ++this->_num;
    return *this;
}

Fixed &Fixed::operator--(void){
    --this->_num;
    return *this;
}

/* postfix : var++, var--, displayed->increased */

Fixed Fixed::operator++(int){
    Fixed tmp(*this);

    tmp._num = this->_num++;
    return tmp;
}

Fixed Fixed::operator--(int){
    Fixed tmp(*this);

    tmp._num = this->_num--;
    return tmp;
}

                            /* Overloaded member functions */


Fixed & Fixed::min(Fixed & new1, Fixed & new2){
    if (new1.getRawBits() > new2.getRawBits())
        return (new2);
    return (new1);
}

const Fixed & Fixed::min(const Fixed & new1, const Fixed & new2){
    if (new1.getRawBits() > new2.getRawBits())
        return (new2);
    return (new1);
}

Fixed & Fixed::max(Fixed & new1, Fixed & new2){
    if (new1.getRawBits() > new2.getRawBits())
        return (new1);
    return (new2);
}

const Fixed & Fixed::max(const Fixed & new1, const Fixed & new2){
    if (new1.getRawBits() > new2.getRawBits())
        return (new1);
    return (new2);
}

std::ostream & operator<<(std::ostream& o, Fixed const & newFixed){
    o << newFixed.toFloat();
    return (o);
}
