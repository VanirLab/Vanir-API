/*Change Vanir Versions*/
#include <stdio.h>

class VanirVersionPackage{
	
	static bool getFeature(const std::string&name);
	
	static void enableFeature(const std::string&name,bool);
	static bool  isFeatureEnabled(const std::string&name);
	
	
	static void disableFeature(const std::string&name,bool);
	static int isFeatureDisabled(const std::string&name);
	
	static void hoverFeature(const std::string&name)const;
	static bool isFeatureHovering(const std::string&name);
	
}
