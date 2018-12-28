#pragma once
#include "CBaseManager.h"
#include "CClasses.h"
#include <iostream>
/*
功能： 班级管理类， 添加班级、删除班级、查询班级
*/
class CClassesManager :
	public CBaseManager
{
public:
	CClassesManager();
	virtual ~CClassesManager();
	bool Del(int id);
};

