#include <iostream>
#include <string>

class YoutubeChannel
{
	public:
		std:: string Name;
		int SubscribersCount;

		YoutubeChannel(std::string name, int subscribersCount)
		{
			Name = name;
			SubscribersCount = subscribersCount;
		}
} ;

std::ostream& operator<<(std:: ostream& COUT, YoutubeChannel &ytChannel)
{
	COUT << "NAME: " << ytChannel.Name << std::endl;
	COUT << "Subscribers: " << ytChannel.SubscribersCount << std::endl;
	return COUT;
}
int main()
{
	YoutubeChannel yt1 = YoutubeChannel("CodeBeauty", 75000);
	YoutubeChannel yt2 = YoutubeChannel("CodeBeauty", 80000);
	std:: cout << yt1 << yt2;
}