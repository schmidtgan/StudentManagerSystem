#pragma once
#include "CBase.h"
/*
功能：所有管理类的基类，具有常用的管理操作接口
*/
#define MAX_COUNT 1024
class CBaseManager
{
public:
	CBaseManager();
	~CBaseManager();
public:
	//添加某个对象，只要是CBase子类就可以
	virtual bool Add(CBase *pBase);
	//通过id删除对象
	virtual bool Del(int id);
	//通过id查询
	virtual CBase * Find(int id);
	//通过名字查询
	virtual CBase * Find(const char *pName);
	//获取当前元素个数
	int getElemCount();
	//获取autoid
	int getAutoId();
	//获取当前数组首地址
	CBase ** getArray();
protected:
	//存储所有对象的数组 指针数组,每个数组元素是对象的地址，所有子类的指针都可以赋值给父类指针
	CBase * m_array[MAX_COUNT];
	int m_count;//有多少个有效元素
	int m_autoID; //系统自增ID
};

