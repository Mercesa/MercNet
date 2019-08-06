#pragma once

namespace Merc
{
class Socket
{
public:
	Socket();
	~Socket();

	void Create();
	void Send();
	void Recv();

};
}