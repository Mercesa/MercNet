#include <Networking/Address.h>

using namespace Merc;

Address::Address(unsigned int aIP1, unsigned int aIP2, unsigned int aIP3, unsigned int aIP4, unsigned short aPort) : mIP1(aIP1), mIP2(aIP2), mIP3(aIP3), mIP4(aIP4), mPort(aIP4)
{
}

Address::~Address()
{
}

std::string Address::GetAddressString()
{
	return std::to_string(mIP1) + "." + std::to_string(mIP2) + "." + std::to_string(mIP3) + "." + std::to_string(mIP3);
}

std::string Address::GetPortString()
{
	return std::to_string(mPort);
}
