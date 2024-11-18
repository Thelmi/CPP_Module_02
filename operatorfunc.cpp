// #include <iostream>
// #include <string>

// class YoutubeChannel
// {
// 	public:
// 		std:: string Name;
// 		int SubscribersCount;

// 		YoutubeChannel(std::string name, int subscribersCount)
// 		{
// 			Name = name;
// 			SubscribersCount = subscribersCount;
// 		}
// } ;

// std::ostream& operator<<(std:: ostream& COUT, YoutubeChannel &ytChannel)
// {
// 	COUT << "NAME: " << ytChannel.Name << std::endl;
// 	COUT << "Subscribers: " << ytChannel.SubscribersCount << std::endl;
// 	return COUT;
// }

// int main()
// {
// 	YoutubeChannel yt1 = YoutubeChannel("CodeBeauty", 75000);
// 	YoutubeChannel yt2 = YoutubeChannel("CodeBeauty", 80000);
// 	std:: cout << yt1 << yt2; 
// }

#include <iostream>

class Int
{
	private:
		int elem;
	public:
		Int()
		{
		
		}
		Int(int val) : elem{val}
		{
		}
		void printvalue()
		{
			std:: cout << elem << std::endl;
		}
		Int & operator++()
		{
			elem++;
			return *this;
		}
		Int operator++(int dummy)
		{
			Int tmp = *this;
			++(*this);
			return tmp;
		}
};