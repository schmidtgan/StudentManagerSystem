#include "CClassesManager.h"



CClassesManager::CClassesManager()
{
}


CClassesManager::~CClassesManager()
{
}

bool CClassesManager::Del(int id)
{
	CClasses *pElem = NULL;
	int index = 0;
	for (int i = 0; i< m_count; ++i)
	{
		CClasses  *p = (CClasses*)m_array[i];
		//找到了要删除的元素
		if (p->GetId() == id)
		{
			pElem = p;
			index = i;
			break;
		}
	}

	if (pElem != NULL)
	{
		delete  pElem;//删除所占的内存
		pElem = NULL;

		for (int j = index; j< m_count - 1; ++j)
		{ //把后面的元素前移
			m_array[j] = m_array[j + 1];
		}

		--m_count;//减少一个元素

		return  true;
	}
	else
	{//没找到此id的元素
		std::cout << "删除失败" << std::endl;
		return false;
	}
}
