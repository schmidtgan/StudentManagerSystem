#pragma once
#include "CBaseManager.h"
#include "CStudent.h"
#include <iostream>
/*
���ܣ� ѧ�������࣬ ���ѧ����ɾ��ѧ������ѯѧ��
*/
class CStudentManager :
	public CBaseManager
{
public:
	CStudentManager();
	virtual ~CStudentManager();
	bool Del(int id);
};

