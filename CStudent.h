#pragma once
#include "CPerson.h"
/*
	���ܣ��̳���CPerson,���а༶����
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
	int m_cid;//�༶id,�����ĸ��༶
};

