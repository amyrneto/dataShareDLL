// dataShareDLL.cpp : Define as funções exportadas para o aplicativo DLL.
//

#include "stdafx.h"
#include "dataShareDLL.h"

#pragma data_seg("SHARED")
int x = 0;
#pragma data_seg()

extern "C" __declspec(dllexport)

int get()
{
	return x;
}

extern "C" __declspec(dllexport)

void set(int temp)
{
	x = temp;
}

#pragma comment(linker, "/section:SHARED,RWS")  
