// CppLoader.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


#import "..\CppLoader\ComInteropDemo.tlb"
//REGASM  ComInteropDemo.dll /tlb ComInteropDemo.tlb
//REGASM  /u ComInteropDemo.dll
//ֻ����x86  32λע��


int _tmain(int argc, _TCHAR* argv[])
{
	HRESULT hr;

	//ComInteropDemo::ComInterop *p; 


	//��ʼ��COM
	CoInitialize ( NULL );	

	//��������ָ��ComInteropDemo::ComInteropInterface
	ComInteropDemo::ComInteropInterfacePtr ptr;

	//����ʵ��
	hr = ptr.CreateInstance(__uuidof (ComInteropDemo::ComInterop));

	if(hr == S_OK)
	{
		cout << ptr->Add (1.0, 2.0);
	}		

	CoUninitialize (); 
	return 0;
}

