//---------------------------------------------------------------------------
#ifndef ServerH
#define ServerH
//---------------------------------------------------------------------------
#include <SysUtils.hpp>
#include <Classes.hpp>
#include <SvcMgr.hpp>
#include <vcl.h>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdCustomTCPServer.hpp>
#include <IdTCPServer.hpp>
#include <IdContext.hpp>
//---------------------------------------------------------------------------
class THostService : public TService
{
__published:    // IDE-managed Components
	TIdTCPServer *TCPServer;
	void __fastcall TCPServerExecute(TIdContext *AContext);
private:        // User declarations
public:         // User declarations
	__fastcall THostService(TComponent* Owner);
	TServiceController __fastcall GetServiceController(void);

	friend void __stdcall ServiceController(unsigned CtrlCode);
};
//---------------------------------------------------------------------------
extern PACKAGE THostService *HostService;
//---------------------------------------------------------------------------
#endif
