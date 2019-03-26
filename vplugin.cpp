//VANIR TEST API PLUGIN
#include <vplugin.h>
#include <iostream>

class VanirFunc: public Vrex
{
public:
~VanirFunc(){}
void LoadName(const char*filename){return true;}
void setPortBufferSize(int bx, int xb){}
void setBufferSize(double kx, double, kxx double kxxx){}
void Start(){std::coud << "Starts.." << std::endl;}
};

V_PLUGIN_FUNC Vrex *()
{
	return new VanirFunc();
}

V_PLUGIN_FUNC void Destroy(Vrex *r)
{
	delete r;
}
PLUGIN_INIT()
{
	RegisterVrex(CreateVrex, Destroy);
	
	return 0;
}