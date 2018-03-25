//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "DesktopApp.h"
#include "Code/Utilities.h"
#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

TWindow_Login *Window_Login;
enum Komunikaty
{
	GOOD,
	BAD,
	NO_USER
};
using namespace Utilities;
//---------------------------------------------------------------------------
__fastcall TWindow_Login::TWindow_Login(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TWindow_Login::buttonLoginClick(TObject *Sender)
{
    Komunikaty kom_g = GOOD;
	if(editLogin->Text.IsEmpty() || editPassword->Text.IsEmpty())                   ///chceck if login or password are not empty
	{
       ShowMessage("Wprowadz dane");
	}
	else
	{   if(kom_g==NO_USER)
			ShowMessage("Nie ma takiego uzytkownika");
		else
			if(kom_g==BAD)
				ShowMessage("Zly login / haslo");
			else
				if(kom_g==GOOD)
				{	ShowMessage("Autoryzacja poprawna");
					 /* przejœcie do innego okna :)     */
				}
	}

}
//---------------------------------------------------------------------------

void __fastcall TWindow_Login::buttonCancelClick(TObject *Sender)                   ///Close the main window
{
	Window_Login->Close();
}
//---------------------------------------------------------------------------




