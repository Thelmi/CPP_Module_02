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

Fixed::Fixed(const int intNUM)
{
	std::cout << "Int constructor called" << std::endl;
	fixedNum = intNUM * 256;
}

Fixed::Fixed(const float floatNUM)
{
	std::cout << "Float constructor called" << std::endl;
	fixedNum = (int)roundf(floatNUM * 256);
}

Fixed& Fixed::operator=(const Fixed &numObj)
{
	fixedNum = numObj.fixedNum;
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

float Fixed::toFloat() const
{
	float floatNum = (float)fixedNum / (float)256;
	return floatNum;
}

int Fixed::toInt() const
{
	int num = fixedNum / 256;
	return (num);
}


std::ostream& operator<<(std::ostream& os, const Fixed &obj)
{
    os << obj.toFloat();
    return (os);
}

bool Fixed::operator>(const Fixed &numObj)
{
	return(fixedNum > numObj.fixedNum);
}

bool Fixed::operator<(const Fixed &numObj)
{
	return(fixedNum < numObj.fixedNum);
}

bool Fixed::operator>=(const Fixed &numObj)
{
	return (fixedNum >= numObj.fixedNum);
}

bool Fixed::operator<=(const Fixed &numObj)
{
	return (fixedNum <= numObj.fixedNum);
}

bool Fixed::operator==(const Fixed &numObj)
{
	return (fixedNum == numObj.fixedNum);
}

bool Fixed::operator!=(const Fixed &numObj)
{
	return (fixedNum != numObj.fixedNum);
}

Fixed Fixed::operator+(const Fixed &numObj)
{
	return (this->toFloat() + numObj.toFloat());
}

Fixed Fixed::operator-(const Fixed &numObj)
{
	return (this->toFloat() - numObj.toFloat());
}
Fixed Fixed::operator*(const Fixed &numObj)
{
	return (this->toFloat() * numObj.toFloat());
}

Fixed Fixed::operator/(const Fixed &numObj)
{
	return (this->toFloat() / numObj.toFloat());
}

Fixed Fixed::operator++()
{
	fixedNum++;
    return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	fixedNum++;
	return (tmp);
}

Fixed Fixed::operator--()
{
	fixedNum--;
    return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	fixedNum--;
	return (tmp);
}

Fixed& Fixed::min(Fixed &fixedNumOne, Fixed &fixedNumTwo)
{
	if (fixedNumOne < fixedNumTwo)
	{
		return (fixedNumOne);
	}
		return (fixedNumTwo);
}
const Fixed& Fixed::min(const Fixed& objOne, const Fixed& objTwo)
{
	if (objOne.getRawBits() < objTwo.getRawBits())
	{
		return (objOne);
	}
		return (objTwo);
}

Fixed& Fixed::max(Fixed &fixedNumOne, Fixed &fixedNumTwo)
{
	if (fixedNumOne.getRawBits() > fixedNumTwo.getRawBits())
	{
		return (fixedNumOne);
	}
		return (fixedNumTwo);
}
Fixed const& Fixed::max(Fixed const &fixedNumOne, Fixed const &fixedNumTwo)
{
	if (fixedNumOne.getRawBits() > fixedNumTwo.getRawBits())
	{
		return (fixedNumOne);
	}
		return (fixedNumTwo);
}