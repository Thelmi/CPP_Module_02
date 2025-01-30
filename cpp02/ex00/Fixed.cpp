#include "Fixed.hpp"

Fixed::Fixed() : fixedNum(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &numObj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = numObj;
}

Fixed& Fixed::operator=(const Fixed &numObj)
{
	fixedNum = numObj.getRawBits();
	std:: cout << "Copy assignment operator called" << std::endl;
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	std:: cout << "setRawBits member function called" << std::endl;
	fixedNum = raw;
}

int Fixed::getRawBits() const
{
	std:: cout << "getRawBits member function called" << std::endl;
	return (fixedNum);
}
