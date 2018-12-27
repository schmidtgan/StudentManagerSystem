#pragma once
#include <string>
/*
功能：所有类的基类，具有ID与名称属性
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
	
	int m_id;//唯一标识符,系统自动生成
	char m_name[32];//名称;
};

