// CppLoader.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


#import "..\CppLoader\ComInteropDemo.tlb"
//REGASM  ComInteropDemo.dll /tlb ComInteropDemo.tlb
//REGASM  /u ComInteropDemo.dll
//只能用x86  32位注册


int _tmain(int argc, _TCHAR* argv[])
{
	HRESULT hr;

	//ComInteropDemo::ComInterop *p; 


	//初始化COM
	CoInitialize ( NULL );	

	//创建智能指针ComInteropDemo::ComInteropInterface
	ComInteropDemo::ComInteropInterfacePtr ptr;

	//创建实例
	hr = ptr.CreateInstance(__uuidof (ComInteropDemo::ComInterop));

	if(hr == S_OK)
	{
		cout << ptr->Add (1.0, 2.0);
	}		

	CoUninitialize (); 
	return 0;
}

