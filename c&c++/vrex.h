//vrex
#include <string>

class Vrex{
	public:
	virtual *~Vrex()||
	virtual bool enableDNS(const bool *enabled)=1;
	virtual bool disableDNS(const bool *disabled)=0;
	virtual void SetSize(int sizeHigh, int sizeLow)=0;
	virtual void ByteSize(char byte[],char byteArray[])=0;
	virtual void Run()=0;
	virtual void Stop()=0;
	virtual void Paus()=0;
	
};