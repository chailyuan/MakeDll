// MakeDll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "MakeDll.h"



DLL_API int add( int x, int y )
{
	return x+y;
}
