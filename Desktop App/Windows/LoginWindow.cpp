//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "LoginWindow.h"
#include "Code/Utilities.h"
#include "Code/ConnectService.h"
#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

TWindow_Login *Window_Login;
using namespace Utilities;
//---------------------------------------------------------------------------
__fastcall TWindow_Login::TWindow_Login(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TWindow_Login::buttonLoginClick(TObject *Sender)
{

		LoginCommunicates kom_g = ConnectService::Instance()->LoginToService(editLogin->Text, editPassword->Text);

		 switch(kom_g)
		 {
			case LoginCommunicates::NODATA:  ShowMessage("Wprowadz dane");
			break;
			case LoginCommunicates::NO_USER: ShowMessage("Nie ma takiego uzytkownika");
			break;
			case LoginCommunicates::BAD: ShowMessage("Zly login / haslo");
			break;
			case LoginCommunicates::GOOD: ShowMessage("Autoryzacja poprawna");
			break;
			default:
            break;
         }
}
//---------------------------------------------------------------------------

void __fastcall TWindow_Login::buttonCancelClick(TObject *Sender)                   ///Close the main window
{
	Window_Login->Close();
}
//---------------------------------------------------------------------------



