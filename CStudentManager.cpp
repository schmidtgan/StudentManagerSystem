#include "CStudentManager.h"



CStudentManager::CStudentManager()
{
}


CStudentManager::~CStudentManager()
{
}

bool CStudentManager::Del(int id)
{
	CStudent  *pElem = NULL;
	int index = 0;
	for (int i = 0; i< m_count; ++i)
	{
		CStudent   *p = (CStudent *)m_array[i];
		//�ҵ���Ҫɾ����Ԫ��
		if (p->GetId() == id)
		{
			pElem = p;
			index = i;
			break;
		}
	}

	if (pElem != NULL)
	{
		delete  pElem;//ɾ����ռ���ڴ�
		pElem = NULL;

		for (int j = index; j< m_count - 1; ++j)
		{ //�Ѻ����Ԫ��ǰ��
			m_array[j] = m_array[j + 1];
		}

		--m_count;//����һ��Ԫ��

		return  true;
	}
	else
	{//û�ҵ���id��Ԫ��
		std::cout << "ɾ��ʧ��" << std::endl;
		return false;
	}
}
