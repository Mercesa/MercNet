#pragma once

#include <string>

namespace Merc
{
	class Address
	{
	public:
		Address(unsigned int aIP1, unsigned int aIP2, unsigned int aIP3, unsigned int aIP4, unsigned short aPort);
		~Address();
		Address(const Address& addr) = default;


		// Methods to stringify address and port
		std::string GetAddressString();
		std::string GetPortString();

	private:
		unsigned int mIP1;
		unsigned int mIP2;
		unsigned int mIP3;
		unsigned int mIP4;
		unsigned short mPort;
	};
}