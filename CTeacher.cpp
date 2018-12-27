#include "CTeacher.h"

void CTeacher::setExperience(int experince)
{
	this->m_experince = experince;
}

int CTeacher::getExperience()
{
	return this->m_experince;
}

CTeacher::CTeacher()
{
	this->m_experince = 0;
}


CTeacher::~CTeacher()
{
}
