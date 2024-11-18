#include "Fixed.hpp"

// int main() {
//     Fixed a;
//     Fixed b(10);
//     Fixed c(42.42f);
//     Fixed d(b);

//     std::cout << "a: " << a << std::endl;
//     std::cout << "b: " << b << std::endl;
//     std::cout << "c: " << c << std::endl;
//     std::cout << "d: " << d << std::endl;

//     a = Fixed(1234.4321f);
//     std::cout << "a after assignment: " << a << std::endl;

//     std::cout << "b > c: " << (b > c) << std::endl;
//     std::cout << "b < c: " << (b < c) << std::endl;
//     std::cout << "b >= c: " << (b >= c) << std::endl;
//     std::cout << "b <= c: " << (b <= c) << std::endl;
//     std::cout << "b == c: " << (b == c) << std::endl;
//     std::cout << "b != c: " << (b != c) << std::endl;

//     Fixed sum = b + c;
//     Fixed diff = b - c;
//     Fixed prod = b * c;
//     Fixed div = b / c;

//     std::cout << "b + c: " << sum << std::endl;
//     std::cout << "b - c: " << diff << std::endl;
//     std::cout << "b * c: " << prod << std::endl;
//     std::cout << "b / c: " << div << std::endl;

//     std::cout << "Pre-increment: " << ++a << std::endl;
//     std::cout << "Post-increment: " << a++ << std::endl;
//     std::cout << "After post-increment: " << a << std::endl;

//     std::cout << "Pre-decrement: " << --a << std::endl;
//     std::cout << "Post-decrement: " << a-- << std::endl;
//     std::cout << "After post-decrement: " << a << std::endl;

//     std::cout << "Min of b and c: " << Fixed::min(b, c) << std::endl;
//     std::cout << "Max of b and c: " << Fixed::max(b, c) << std::endl;

//     return 0;
// }

#include <iostream>
int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
