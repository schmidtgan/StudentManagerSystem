#include "test.h"
#include "CBaseManager.h"
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
	printf("É¾³ı111  %d  \n", ret);
	ret = baseMgr.Del(222);
	printf("É¾³ı222  %d  \n", ret);
	ret = baseMgr.Del(333);
	printf("É¾³ı333  %d  \n",ret);

	printf("Ê£ÓàÔªËØ¸öÊı:%d\n",baseMgr.getElemCount());

}