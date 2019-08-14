#pragma once

#ifdef _WIN32
#include <windows.h>
#include <winSock2.h>
#include <ws2tcpip.h>
#else
#endif

class Network
{
public:
	static bool Initialize();
	static bool Shutdown();

private:
	Network() = delete;
	~Network() = delete;
	Network(const Network& aNetwork) = delete;
};


