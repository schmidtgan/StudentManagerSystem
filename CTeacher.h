#pragma once
#include "CPerson.h"
/*
功能： CTeacher类，继承自CPerson， 具有工作经验属性
*/
class CTeacher :
	public CPerson
{
public:
	void setExperience(int experince);
	int getExperience();
public:
	CTeacher();
	virtual ~CTeacher();
private:
	int m_experince;//工作经验
};

