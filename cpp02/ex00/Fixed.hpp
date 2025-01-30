#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	private:
		int fixedNum;
		static const int bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &numObj);
		Fixed &operator=(const Fixed &numObj);
		void setRawBits(int const raw);
		int getRawBits() const;
};

#endif
