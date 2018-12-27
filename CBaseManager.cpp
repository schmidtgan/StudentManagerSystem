#include "CBaseManager.h"



CBaseManager::CBaseManager()
{
	m_count = 0;
	memset(m_array, NULL, MAX_COUNT);
}


CBaseManager::~CBaseManager()
{
}

bool CBaseManager::Add(CBase * pBase)
{
	if (m_count < MAX_COUNT) {
		m_array[m_count++] = pBase;
		return true;
	}
	else { 
	//printf("�����������޷���ӣ�\n");
	return false;
	}
	
}

bool CBaseManager::Del(int id)
{
	CBase *pElem = NULL;
	int index=0;
	for (int i = 0; i < m_count; ++i) {
		CBase *p = m_array[i];
		//�ҵ���Ҫɾ����Ԫ��
		if (p->GetId() == id) {
			pElem = p;
			index = i;
			break;
		}
	}
	if (pElem != NULL)
	{
		delete pElem;//ɾ����ռ�ڴ�
		pElem = NULL;
		for (int j = index; j < m_count - 1; j++)//���������Ѻ����Ԫ����ǰ�ƶ�
			m_array[j] = m_array[j + 1];
		--m_count;//����һ��Ԫ��
	}
	else { //û�ҵ���id��Ԫ��
		return false;
	}


}

CBase * CBaseManager::Find(int id)
{
	for (int i = 0; i < m_count; ++i) {
		CBase *p = m_array[i];
		//�ҵ���Ҫɾ����Ԫ��
		if (p->GetId() == id) {
			return p;
		}
	}
	return NULL;
}

CBase * CBaseManager::Find(const char * pName)
{
	for (int i = 0; i < m_count; ++i) {
		CBase *p = m_array[i];
		//�ҵ���Ҫɾ����Ԫ��
		if (strcmp(p->GetName(),pName)==0) {
			return p;
		}
	}
	return nullptr;
}

int CBaseManager::getElemCount()
{
	return this->m_count;
}

int CBaseManager::getAutoId()
{
	return  ++m_autoID;
}

CBase ** CBaseManager::getArray()
{
	return this->m_array;
}
