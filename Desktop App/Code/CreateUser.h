//---------------------------------------------------------------------------

#ifndef CreateUserH
#define CreateUserH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class TcrateUser : public TForm
{
__published:	// IDE-managed Components
	TLabel *labelName;
	TLabel *labelSurname;
	TLabel *labelPassword;
	TLabel *labelReturnPassword;
	TEdit *editName;
	TEdit *editSurname;
	TEdit *editPassword;
	TEdit *editReturnPassword;
	TButton *buttonCreate;
	TButton *buttonCancel;
	void __fastcall buttonCancelClick(TObject *Sender);
	void __fastcall buttonCreateClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TcrateUser(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TcrateUser *crateUser;
//---------------------------------------------------------------------------
#endif
