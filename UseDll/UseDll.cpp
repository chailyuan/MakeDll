#include <Windows.h>
#include <iostream>

typedef void (*FUNA) (int &,int &);
typedef void (*FUNB) (int &,int &,int &);

int main()
{
	const char* dllName = "CreateDll.dll";
	const char* funName1 = "printMax";
	const char* funName2 = "printMax";

	int x(100),y(100),z(100);
	
	HMODULE hDll = LoadLibrary(dllName);
	if (hDll!=NULL)
	{
		FUNA fp1 = FUNA(GetProcAddress(hDll,funName1));
		if (fp1!=NULL)
		{
			std::cout<<"Input 2 Numbers:";
			std::cin>>x>>y;
			fp1(x,y);
		}
	}
	system("pause");
	return 1;
}