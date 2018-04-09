//---------------------------------------------------------------------------

#ifndef LoginWindowH
#define LoginWindowH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TWindow_Login : public TForm
{
__published:	// IDE-managed Components
	TButton *buttonLogin;
	TButton *buttonCancel;
	TLabel *labelLogin;
	TLabel *labelPassword;
	TEdit *editLogin;
	TEdit *editPassword;
	void __fastcall buttonCancelClick(TObject *Sender);
	void __fastcall buttonLoginClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TWindow_Login(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TWindow_Login *Window_Login;
//---------------------------------------------------------------------------
#endif
