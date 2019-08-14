#pragma once

#include <memory>

#include "Address.h"

namespace Merc
{
class Socket
{
public:
	Socket();
	~Socket();

	void Bind(std::shared_ptr<Address> aAddress);
	void Create();
	void Send();
	void Recv();
	
private:
	
};
}