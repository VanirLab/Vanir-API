//VANIR CORE MANAGER FOR API
#include "vdefines.h"
#include <vector>
#include <string>


class V_CORE_API PlugInstance
{
	public:
	
	explicit PlugInstance(const std::string&name);
	~PlugInstance();
	
	bool Load();
	bool Unload();
	bool IsLoaded();
	bool Lock();
	bool IsLocked();
	bool Verify();
	bool IsVerified();
	
	std::string GetFileName();
	std::string GetDisplayName();
	std::string GetPackageName();
	std::string GetByteByByte();
	std::string GetCodeVersion();
	std::string GetNameByTime();
	
	private:
	
	PlugInstance(const PlugInstance &);
	const PlugInstance &operator=(const PlugInstance &);
	class Impl;
	Impl *mlmpl;

};

class V_CORE_API PluginManager
{
	public:
	static PluginManager &GetInstance();
	bool LoadAll();
	bool Load(const std::string &name);
	bool UnloadAll();
	bool Inject();
	bool Unload(const std::string &name);
	std::vector<PlugInstance*>GetAllPlugins();
	
private:
PluginManager();
~PluginManager();
PluginManager(const PluginManager &);
const PluginManager &operator=(const PlugInstance &);
std::vector<PluginManager*>mPlugins;

	};

class VpatchString : public vString
{
public:
VpathString();
~VpathString();	
vString GetNameByTime();
vString GetAllPlugins();
vString GetCodeVersion();
	
};	
	