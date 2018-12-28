#pragma once
#include "CBase.h"
/*
���ܣ����й�����Ļ��࣬���г��õĹ�������ӿ�
*/
#define MAX_COUNT 1024
class CBaseManager
{
public:
	CBaseManager();
	~CBaseManager();
public:
	//���ĳ������ֻҪ��CBase����Ϳ���
	virtual bool Add(CBase *pBase);
	//ͨ��idɾ������
	virtual bool Del(int id);
	//ͨ��id��ѯ
	virtual CBase * Find(int id);
	//ͨ�����ֲ�ѯ
	virtual CBase * Find(const char *pName);
	//��ȡ��ǰԪ�ظ���
	int getElemCount();
	//��ȡautoid
	int getAutoId();
	//��ȡ��ǰ�����׵�ַ
	CBase ** getArray();
protected:
	//�洢���ж�������� ָ������,ÿ������Ԫ���Ƕ���ĵ�ַ�����������ָ�붼���Ը�ֵ������ָ��
	CBase * m_array[MAX_COUNT];
	int m_count;//�ж��ٸ���ЧԪ��
	int m_autoID; //ϵͳ����ID
};

