// CreateDll.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "CreateDll.h"
#include <iostream>


// ���ǵ���������һ��ʾ��
CREATEDLL_API int nCreateDll=0;

// ���ǵ���������һ��ʾ����
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

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� CreateDll.h
CCreateDll::CCreateDll()
{
	return;
}
