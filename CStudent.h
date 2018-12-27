#pragma once
#include "CPerson.h"
/*
	功能：继承自CPerson,具有班级属性
*/
class CStudent:public CPerson
{
public:
	CStudent();
	virtual ~CStudent();

public:
	void  setCid(int cid);
	int  getCid();

private:
	int m_cid;//班级id,属于哪个班级
};

