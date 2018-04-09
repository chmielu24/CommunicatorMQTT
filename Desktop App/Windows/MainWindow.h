//---------------------------------------------------------------------------

#ifndef MainWindowH
#define MainWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Menus.hpp>
#include <FMX.Types.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Styles.Objects.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.ListView.Adapters.Base.hpp>
#include <FMX.ListView.Appearances.hpp>
#include <FMX.ListView.hpp>
#include <FMX.ListView.Types.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
//---------------------------------------------------------------------------
class TMainWindowForm : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *Menu;
	TMenuItem *Application;
	TMenuItem *Login;
	TMenuItem *Exit;
	TIdTCPClient *TCPClient;
	TButton *Connect;
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall LoginClick(TObject *Sender);
	void __fastcall TCPClientConnected(TObject *Sender);
	void __fastcall TCPClientDisconnected(TObject *Sender);
	void __fastcall ConnectClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMainWindowForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainWindowForm *MainWindowForm;
//---------------------------------------------------------------------------
#endif
