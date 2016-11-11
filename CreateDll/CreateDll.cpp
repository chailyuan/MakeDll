// CreateDll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "CreateDll.h"
#include <iostream>


// 这是导出变量的一个示例
CREATEDLL_API int nCreateDll=0;

// 这是导出函数的一个示例。
CREATEDLL_API int fnCreateDll(void)
{
	return 42;
}

CREATEDLL_API void printMax( int & a,int & b )
{

	CCreateDll bb;
	bb.d = a;
	bb.e = b;
	std::cout<<bb.d<<bb.e<<"\n";
	std::cout<<"The max of a and b is "<<(a>b?a:b)<<"\n";
}

CREATEDLL_API int add( int x, int y )
{
	return x+y;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 CreateDll.h
CCreateDll::CCreateDll()
{
	return;
}
