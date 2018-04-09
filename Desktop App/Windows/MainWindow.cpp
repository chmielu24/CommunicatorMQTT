//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include "MainWindow.h"
#include "LoginWindow.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMainWindowForm *MainWindowForm;
//---------------------------------------------------------------------------
__fastcall TMainWindowForm::TMainWindowForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMainWindowForm::ExitClick(TObject *Sender)
{
		MainWindowForm->Close();
}
//---------------------------------------------------------------------------



void __fastcall TMainWindowForm::LoginClick(TObject *Sender)
{
		Window_Login->Show();


}
//---------------------------------------------------------------------------


void __fastcall TMainWindowForm::TCPClientConnected(TObject *Sender)
{
	ShowMessage("Connected");
}
//---------------------------------------------------------------------------

void __fastcall TMainWindowForm::TCPClientDisconnected(TObject *Sender)
{
	ShowMessage("Disconnected");
}
//---------------------------------------------------------------------------


void __fastcall TMainWindowForm::ConnectClick(TObject *Sender)
{
       TCPClient->Connect();
}
//---------------------------------------------------------------------------


