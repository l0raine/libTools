// libTools.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <vector>
#include <string>
#include <tlhelp32.h>
#include <include/LogLib/Log.h>

#pragma comment(lib,"LogLib.lib")
#pragma comment(lib,"user32.lib")
#pragma comment(lib,"kernel32.lib")
#define _SELF L"asd"
int main()
{
	libTools::CLog::GetInstance().SetClientName(L"libTools", L"D:\\");
	LOG_C_D(L"aaaaaaaa");
	libTools::CLog::GetInstance().Release();
    return 0;
}

