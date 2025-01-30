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
};

std::ostream& operator<<(std::ostream& os, const Fixed &obj);
#endif