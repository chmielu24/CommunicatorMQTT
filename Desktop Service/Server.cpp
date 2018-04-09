//---------------------------------------------------------------------------
#include "Server.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

THostService *HostService;
//---------------------------------------------------------------------------
__fastcall THostService::THostService(TComponent* Owner)
	: TService(Owner)
{
}

void __stdcall ServiceController(unsigned CtrlCode)
{
	HostService->Controller(CtrlCode);
}

TServiceController __fastcall THostService::GetServiceController(void)
{
	return (TServiceController) ServiceController;
}

//---------------------------------------------------------------------------


void __fastcall THostService::TCPServerExecute(TIdContext *AContext)
{
           //
}
//---------------------------------------------------------------------------







