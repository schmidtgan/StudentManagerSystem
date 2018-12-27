#include "CStudent.h"



CStudent::CStudent()
{
	this->m_cid = 0;
}


CStudent::~CStudent()
{
}

void CStudent::setCid(int cid)
{
	this->m_cid = cid;
}

int CStudent::getCid()
{
	return this->m_cid;
}
