#pragma once
#include "CBaseManager.h"
#include "CTeacher.h"
#include <iostream>
/*
���ܣ� ��ʦ�����࣬ �����ʦ��ɾ����ʦ����ѯ��ʦ
*/
class CTeacherManager :
	public CBaseManager
{
public:
	CTeacherManager();
	virtual ~CTeacherManager();
	//ͨ��idɾ������
	bool Del(int id);
};

