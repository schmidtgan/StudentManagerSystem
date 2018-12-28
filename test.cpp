#include "test.h"
#include "CBaseManager.h"
#include "CTeacher.h"
#include "CTeacherManager.h"
#include"stdio.h"
void testCBase() {
	CBase  *p = new CBase;
	p->SetId(111);
	p->SetName("hello");

	CBase  *p2 = new CBase;
	p2->SetId(222);
	p2->SetName("world");

	CBase  *p3 = new CBase;
	p3->SetId(333);
	p3->SetName("C++");

	CBaseManager baseMgr;
	baseMgr.Add(p);
	baseMgr.Add(p2);
	baseMgr.Add(p3);

	for (int i = 0; i < baseMgr.getElemCount(); i++) {
		CBase * pElem = baseMgr.getArray()[i];
		printf("%d  ,  %s   \n", pElem->GetId(), pElem->GetName());
	}

	CBase * pElem2=baseMgr.Find(222);
	if (pElem2)
	{
		printf("%d  ,  %s  \n", pElem2->GetId(), pElem2->GetName());
	}

	CBase * pElem3 = baseMgr.Find("hello");
	if (pElem3) {
		printf("%d  ,  %s  \n", pElem3->GetId(), pElem3->GetName());
	}
	
	bool ret = baseMgr.Del(111);
	printf("删除111  %d  \n", ret);
	ret = baseMgr.Del(222);
	printf("删除222  %d  \n", ret);
	ret = baseMgr.Del(333);
	printf("删除333  %d  \n",ret);

	printf("剩余元素个数:%d\n",baseMgr.getElemCount());

}

void testTeacher() {
	
	CTeacher *pT = new CTeacher();
	pT->setAge(23);
	pT->setExperience(12);
	pT->SetId(1);
	pT->SetName("一号老师");
	pT->setSex('F');
	CTeacher *pT1 = new CTeacher();
	pT1->setAge(23);
	pT1->setExperience(12);
	pT1->SetId(2);
	pT1->SetName("二号老师");
	pT1->setSex('F');
	CTeacherManager teaMgr;
	teaMgr.Add(pT);
	teaMgr.Add(pT1);
	printf("剩余元素个数:%d\n", teaMgr.getElemCount());
	bool ret = teaMgr.Del(1);
	printf("剩余元素个数:%d\n", teaMgr.getElemCount());
	ret = teaMgr.Del(2);
	printf("剩余元素个数:%d\n", teaMgr.getElemCount());
}