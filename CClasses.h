#pragma once
#include "CBase.h"
/*
���ܣ�CClasses�࣬���а���������
*/
class CClasses :
	public CBase
{
private:
	int m_tid;//������id
public:
	CClasses();
	virtual ~CClasses();
public:
	void  setTid(int tid);
	int    getTid();
};

