#pragma once
#include "CBase.h"
/*
功能：CClasses类，具有班主任属性
*/
class CClasses :
	public CBase
{
private:
	int m_tid;//班主任id
public:
	CClasses();
	virtual ~CClasses();
public:
	void  setTid(int tid);
	int    getTid();
};

