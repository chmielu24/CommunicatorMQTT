//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "DesktopApp.h"
#include "Code/Utilities.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TWindow_Login *Window_Login;
//---------------------------------------------------------------------------
__fastcall TWindow_Login::TWindow_Login(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TWindow_Login::buttonLoginClick(TObject *Sender)
{
	if(editLogin->Text.IsEmpty() || editPassword->Text.IsEmpty())                   ///chceck if login or password are not empty
	{

        ShowMessage("Uzupelnij dane");
	}
	else                                                                            ///
	{
		///sprawdzenie poprawnosci danych z baz¹
        ShowMessage("Sprawdzanie poprawnosci danych");

    }
}
//---------------------------------------------------------------------------

void __fastcall TWindow_Login::buttonCancelClick(TObject *Sender)                   ///Close the main window
{
	Window_Login->Close();
}
//---------------------------------------------------------------------------




