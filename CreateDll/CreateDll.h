// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� CREATEDLL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// CREATEDLL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef CREATEDLL_EXPORTS
#define CREATEDLL_API __declspec(dllexport)
#else
#define CREATEDLL_API __declspec(dllimport)
#endif

// �����Ǵ� CreateDll.dll ������
class CREATEDLL_API CCreateDll {
public:
	CCreateDll(void);
	// TODO: �ڴ�������ķ�����
public:
	int d;
	int e;
};

extern "C" CREATEDLL_API int nCreateDll;

extern "C" CREATEDLL_API int fnCreateDll(void);

extern "C" CREATEDLL_API void printMax(int &,int &);

extern "C" CREATEDLL_API int add(int x, int y);