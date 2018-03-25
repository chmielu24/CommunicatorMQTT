//---------------------------------------------------------------------------

#pragma hdrstop

#include "Utilities.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

namespace Utilities
{
bool checkPassword(std::string password)
{
	if (password.length() > 0) {
		return true;
	}
		return false;
}
}
