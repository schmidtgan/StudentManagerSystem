#pragma once
#include "CBaseManager.h"
#include "CClasses.h"
#include <iostream>
/*
���ܣ� �༶�����࣬ ��Ӱ༶��ɾ���༶����ѯ�༶
*/
class CClassesManager :
	public CBaseManager
{
public:
	CClassesManager();
	virtual ~CClassesManager();
	bool Del(int id);
};

