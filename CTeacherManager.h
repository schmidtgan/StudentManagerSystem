#pragma once
#include "CBaseManager.h"
#include "CTeacher.h"
#include <iostream>
/*
功能： 老师管理类， 添加老师、删除老师、查询老师
*/
class CTeacherManager :
	public CBaseManager
{
public:
	CTeacherManager();
	virtual ~CTeacherManager();
	//通过id删除对象
	bool Del(int id);
};

