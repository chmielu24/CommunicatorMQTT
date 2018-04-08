//---------------------------------------------------------------------------

#pragma hdrstop

#include "ConnectService.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

ConnectService* ConnectService::_instance = NULL;

ConnectService::ConnectService()
{

}

ConnectService::~ConnectService()
{

}

LoginCommunicates ConnectService::LoginToService(UnicodeString login, UnicodeString password)
{
if(login.Length() > 3 && password.Length() > 3)
	return LoginCommunicates::GOOD;
else
	return LoginCommunicates::NODATA;
}
