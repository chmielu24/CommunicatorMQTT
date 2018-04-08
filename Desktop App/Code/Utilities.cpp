//---------------------------------------------------------------------------

#pragma hdrstop

#include "Utilities.h"
#include <fmx.h>
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

bool chceckIsEmpty(TEdit e)
{
	if(e.Text.IsEmpty())
	{
		return true;
	}
    return false;
}

}
