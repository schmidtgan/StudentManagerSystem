#pragma once
#include <string>
/*
���ܣ�������Ļ��࣬����ID����������
*/
class CBase
{
public:
	CBase();
	~CBase();
	int GetId();
	void SetId(int id);

	char* GetName();
	void SetName(const char* name);
private:
	
	int m_id;//Ψһ��ʶ��,ϵͳ�Զ�����
	char m_name[32];//����;
};

