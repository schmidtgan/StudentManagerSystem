#pragma once
#include "CBase.h"
/*
���ܣ�CStudent��CTeacher�Ļ��࣬�����������Ա�����
*/
class CPerson :
	public CBase
{
public:
	CPerson();
	~CPerson();
public:
	int getAge();
	void setAge(int age);
	char getSex();
	void setSex(char sex);
private:
	char m_sex;//F����Ů�ԣ�M��������
	int m_age;
};

