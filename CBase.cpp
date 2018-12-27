#include "CBase.h"



CBase::CBase()
{
	//初始化成员变量
	m_id = 0;
	memset(m_name, 0, 32);
}


CBase::~CBase()
{
}

int CBase::GetId()
{
	return this->m_id;
}

void CBase::SetId(int id)
{
	this->m_id = id;
}

char * CBase::GetName()
{
	return this->m_name;
}

void CBase::SetName(const char * name)
{
	if(name !=NULL)
	std::strcpy(m_name, name);
}
