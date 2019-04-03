#include "deprecations.h"
#include <string>

class vanirDeprec{
	public:
	DEPRECATED std::string GetName();
	std:string getShortName();
	std:string GetFullName();
	
   std:bool nameDisabled(const std::string,bool);
   std:bool nameEnabled(const std::string,bool);
	
};