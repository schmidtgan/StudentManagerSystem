#pragma once
#include "CBaseManager.h"
#include "CStudent.h"
#include <iostream>
/*
功能： 学生管理类， 添加学生、删除学生、查询学生
*/
class CStudentManager :
	public CBaseManager
{
public:
	CStudentManager();
	virtual ~CStudentManager();
	bool Del(int id);
};

