#include <iostream>

class Book
{
	public:
		std::string Title;
		std::string Author;
		float *Rates;
		int RatesCounter;
		
		Book(std::string title, std::string author)
		{
			Title = title;
			Author = author;
			
			RatesCounter = 2;
			Rates = new float[RatesCounter];
			Rates[0] = 5;
			Rates[1] = 4;
		}
		~Book()
		{
			delete[] Rates;
			Rates = nullptr;
		}
};

int main()
{
	Book book1("Millionaire Fastline", "Demarco");
	Book book2("Rich Dad Poor Dad", "Robert Kyosaki");
	
	// Book book3=book1;
}