//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("Windows\CreateUser.cpp", crateUser);
USEFORM("Windows\MainWindow.cpp", MainWindowForm);
USEFORM("Windows\LoginWindow.cpp", Window_Login);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
        Application->CreateForm(__classid(TMainWindowForm), &MainWindowForm);
		Application->CreateForm(__classid(TcrateUser), &crateUser);
		Application->CreateForm(__classid(TWindow_Login), &Window_Login);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
