#include "CPerson.h"



CPerson::CPerson()
{
	m_age = 0;
	m_sex = 'F';
}


CPerson::~CPerson()
{
}

int CPerson::getAge()
{
	return this->m_age;
}

void CPerson::setAge(int age)
{
	this->m_age = age;
}

char CPerson::getSex()
{
	return this->m_sex;
}

void CPerson::setSex(char sex)
{
	this->m_sex = sex;
}
