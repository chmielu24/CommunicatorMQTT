//---------------------------------------------------------------------------

#ifndef ConnectServiceH
#define ConnectServiceH
//---------------------------------------------------------------------------
#include <System.hpp>
#include <SysUtils.hpp>

enum LoginCommunicates
{
	GOOD,
	BAD,
	NO_USER,
	NODATA
};

class ConnectService
{
public:
	static ConnectService* Instance()
	{
		if(_instance == NULL)
			_instance = new ConnectService();

		return _instance;
	}

	LoginCommunicates LoginToService(UnicodeString login, UnicodeString password);

protected:
	ConnectService();

	~ConnectService();

private:
	static ConnectService* _instance;
};
#endif


