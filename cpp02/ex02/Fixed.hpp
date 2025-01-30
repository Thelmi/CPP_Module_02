#ifndef FIXED_HPP
#define FIXED_HPP
#include <cmath>
#include <iostream>

class Fixed
{
	private:
		int fixedNum;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &numObj);
		Fixed(const int intNum);
		Fixed(const float floatNUM);
		~Fixed();
		Fixed &operator=(const Fixed &numObj);
		void setRawBits(int const raw);
		int getRawBits() const;
		float toFloat() const;
		int toInt() const;
		bool operator>(const Fixed &numObj);
		bool operator<(const Fixed &numObj);
		bool operator>=(const Fixed &numObj);
		bool operator!=(const Fixed &numObj);
		bool operator<=(const Fixed &numObj);
		bool operator==(const Fixed &numObj);
		Fixed operator+(const Fixed &numObj);
		Fixed operator-(const Fixed &numObj);
		Fixed operator*(const Fixed &numObj);
		Fixed operator/(const Fixed &numObj);
		Fixed operator++(int postIncrement);
		Fixed operator++();
		Fixed operator--(int postDecrement);
		Fixed operator--();
		static Fixed& min(Fixed &fixedNumOne, Fixed &fixedNumTwo);
		static const Fixed& min(Fixed const &objOne, Fixed const &objTwo);
		static Fixed& max(Fixed &fixedNumOne, Fixed &fixedNumTwo);
		static const Fixed& max(Fixed const &fixedNumOne, Fixed const &fixedNumTwo);
};

std::ostream& operator<<(std::ostream& os, const Fixed &obj);
#endif