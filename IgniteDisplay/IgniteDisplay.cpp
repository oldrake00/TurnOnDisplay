// IgniteDisplay.cpp‚“

#include "stdafx.h"
#include "windows.h"


int _tmain(int argc, _TCHAR* argv[])
{

	HWND dummyWindowHandler;

	dummyWindowHandler = GetForegroundWindow();
	
	PostMessage(dummyWindowHandler, WM_SYSCOMMAND, SC_MONITORPOWER, -1);
	
	return 0;
}

