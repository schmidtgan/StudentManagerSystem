#pragma once
#include "CPerson.h"
/*
���ܣ� CTeacher�࣬�̳���CPerson�� ���й�����������
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
	int m_experince;//��������
};

