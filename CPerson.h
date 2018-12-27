#pragma once
#include "CBase.h"
/*
功能：CStudent与CTeacher的基类，具有年龄与性别属性
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
	char m_sex;//F代表女性，M代表男性
	int m_age;
};

