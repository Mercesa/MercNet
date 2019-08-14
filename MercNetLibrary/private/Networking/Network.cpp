#include <Networking/Network.h>

#include <iostream>

Network::Network()
{
}


Network::~Network()
{
}

bool Network::Initialize()
{
	WSADATA wsadata;
#ifdef _WIN32
	int tResult = WSAStartup(MAKEWORD(2, 2), &wsadata);

	if (tResult != 0)
	{
		std::cout << "WSAStartup failed with error: " << tResult;
		return false;
	}

	return true;
#endif
}

bool Network::Shutdown()
{
#ifdef _WIN32
	int tResult = WSACleanup();

	if (tResult != 0)
	{
		std::cout << "WSACleanup failed with error: " << tResult;
		return false;
	}

	return true;
#endif
}
