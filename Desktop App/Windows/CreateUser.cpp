//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "CreateUser.h"
#include "Code/Utilities.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
using namespace Utilities;
TcrateUser *crateUser;
//---------------------------------------------------------------------------
__fastcall TcrateUser::TcrateUser(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TcrateUser::buttonCreateClick(TObject *Sender)
{
	if(editName->Text.IsEmpty()||editSurname->Text.IsEmpty()||editPassword->Text.IsEmpty()|| editReturnPassword->Text.IsEmpty())
	{
		ShowMessage("uzupelnij dane");
	}
	else
	{
        ShowMessage("uzupelnione dane");
    }
	//
}
//---------------------------------------------------------------------------
void __fastcall TcrateUser::buttonCancelClick(TObject *Sender)
{
	crateUser->Close();
}
//---------------------------------------------------------------------------

