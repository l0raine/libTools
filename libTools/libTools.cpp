// libTools.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <vector>
#include <string>
#include <iostream>
#include <tlhelp32.h>
#include <sstream>
#include <iterator>
#include <include/CharacterLib/Character.h>
#include <include/ProcessLib/Common/ResHandleManager.h>

#pragma comment(lib,"CharacterLib_Debug.lib")
#pragma comment(lib,"ProcessLib_Debug.lib")
#pragma comment(lib,"user32.lib")
#define _SELF L"asd"



int GetRand(_In_ int MaxValue, _In_ int MinValue)
{
	static DWORD dwSeed = ::GetTickCount();
	srand(dwSeed);
	dwSeed = rand();
	return (MinValue + rand() % (MaxValue - MinValue + 1));
}

int main()
{
	for (int i = 0;i < 100;++i)
	{
		std::cout << GetRand(10, 0) << std::endl;
	}
    return 0;
}

