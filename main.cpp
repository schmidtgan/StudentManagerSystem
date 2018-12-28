#include <iostream>
#include "CStudentManager.h"
#include "CTeacherManager.h"
#include "CClassesManager.h"
#include "CStudent.h"
#include "CTeacher.h"
#include "CClasses.h"
#include<conio.h>
#include "test.h"
using namespace std;
//չʾ���˵�
void showMainMenu();
//չʾ��ʦ�Ӳ˵�
void  showChildMenuTeacher();
//չʾ�༶�Ӳ˵�
void  showChildMenuClasses();
//չʾѧ���Ӳ˵�
void  showChildMenuStudent();
//ʵ�����������
CTeacherManager teaMgr;
CStudentManager stuMgr;
CClassesManager claMgr;
void addTeacher();
void addStudent();
void addClasses();
void showTeacherList();
void showClassesList();
void showStudentList();
void deleteTeacher();
void deleteClasses();
void deleteStudent();
void findTeacher();
void findClasses();
void findStudent();
int main1() {
	testTeacher();
	system("pause");
	return 0;
}
int main() {
	char inputString='0';
	
	while (inputString != 'd'&&inputString != 'D'){
		char inputString2 = '0';
		std::system("cls");
		showMainMenu();
		LOOP:
			cin>>inputString;
			cout<<"��ѡ����"<<inputString<<"ѡ��"<<endl;
			switch (inputString)
			{
			case 'a':
			case 'A':
				system("cls");
				while (inputString2 != 'e'&&inputString2 != 'E') {
					showChildMenuTeacher();
				LOOP2:
					cin >> inputString2;
					switch (inputString2)
					{
					case 'a':
					case 'A':
						addTeacher();
						break;
					case 'b':
					case 'B':
						showTeacherList();
						break;
					case 'c':
					case 'C':
						deleteTeacher();
						break;
					case 'd':
					case 'D':
						findTeacher();
						break;
					case 'e':
					case 'E':
						break;
					default:
						goto LOOP2;
						break;
					}
				}

				
				break;
			case 'b':
			case 'B':
				system("cls");
				while (inputString2 != 'e'&&inputString2 != 'E') {
					showChildMenuClasses();
				LOOP3:
					cin >> inputString2;
					switch (inputString2)
					{
					case 'a':
					case 'A':
						addClasses();
						break;
					case 'b':
					case 'B':
						showClassesList();
						break;
					case 'c':
					case 'C':
						deleteClasses();
						break;
					case 'd':
					case 'D':
						break;
					case 'e':
					case 'E':
						break;
					default:
						goto LOOP3;
						break;
					}
				}
				break;
			case 'c':
			case 'C':
				system("cls");
				while (inputString2 != 'e'&&inputString2 != 'E') {
					showChildMenuStudent();
				LOOP4:
					cin >> inputString2;
					switch (inputString2)
					{
					case 'a':
					case 'A':
						addStudent();
						break;
					case 'b':
					case 'B':
						showStudentList();
						break;
					case 'c':
					case 'C':
						deleteStudent();
						break;
					case 'd':
					case 'D':
						break;
					case 'e':
					case 'E':
						break;
					default:
						goto LOOP4;
						break;
					}
				}
				break;
			case 'd':
			case 'D':
				
				break;
			default:
				
				cout<<"�������ѡ�����"<<endl;
				goto LOOP;
				
				break;

			}
	} 
	

	cout << "   ��лʹ��ѧ������ϵͳ���ټ���  \n";

	
	system("pause");
	return 0;
}

void showMainMenu()
{
	
	cout << "|------------------------------------|\n";
	cout << "|        ��ӭ����ѧ������ϵͳ��      |\n";
	cout << "|------------------------------------|\n";
	cout << "|     ��A�� ��    ʦ   ��   ��       |\n";
	cout << "|------------------------------------|\n";
	cout << "|     ��B�� ��    ��   ��   ��       |\n";
	cout << "|------------------------------------|\n";
	cout << "|     ��C�� ѧ    ��   ��   ��       |\n";
	cout << "|------------------------------------|\n";
	cout << "|     ��D�� ��    ��   ϵ   ͳ       |\n";
	cout << "|------------------------------------|\n";
	cout << "|      ��ѡ��A-D���˵�ѡ��         |\n";
	cout << "|------------------------------------|\n";
}
void  showChildMenuTeacher()
{
	

	cout << "|-------------------------|\n";
	cout << "|      ��ʦ�����Ӳ˵�     |\n";
	cout << "|-------------------------|\n";
	cout << "| ��A�� ��  ��  ��  ʦ    |\n";
	cout << "|-------------------------|\n";
	cout << "| ��B�� ��  ʦ  ��  ��    |\n";
	cout << "|-------------------------|\n";
	cout << "| ��C�� ɾ  ��  ��  ʦ    |\n";
	cout << "|-------------------------|\n";
	cout << "| ��D�� ��  ѯ  ��  ʦ    |\n";
	cout << "|-------------------------|\n";
	cout << "| ��E�� ��  ��  ��  ��    |\n";
	cout << "|-------------------------|\n";
	cout << "|  ��ѡ��A-E���˵�ѡ��  |\n";
	cout << "|-------------------------|\n";
}


void  showChildMenuClasses()
{
	

	cout << "|-------------------------|\n";
	cout << "|      �༶�����Ӳ˵�     |\n";
	cout << "|-------------------------|\n";
	cout << "| ��A�� ��  ��  ��  ��    |\n";
	cout << "|-------------------------|\n";
	cout << "| ��B�� ��  ��  ��  ��    |\n";
	cout << "|-------------------------|\n";
	cout << "| ��C�� ɾ  ��  ��  ��    |\n";
	cout << "|-------------------------|\n";
	cout << "| ��D�� ��  ѯ  ��  ��    |\n";
	cout << "|-------------------------|\n";
	cout << "| ��E�� ��  ��  ��  ��    |\n";
	cout << "|-------------------------|\n";
	cout << "|  ��ѡ��A-E���˵�ѡ��  |\n";
	cout << "|-------------------------|\n";

}


void  showChildMenuStudent()
{
	

	cout << "|-------------------------|\n";
	cout << "|      ѧ�������Ӳ˵�     |\n";
	cout << "|-------------------------|\n";
	cout << "| ��A�� ��  ��  ѧ  ��    |\n";
	cout << "|-------------------------|\n";
	cout << "| ��B�� ѧ  ��  ��  ��    |\n";
	cout << "|-------------------------|\n";
	cout << "| ��C�� ɾ  ��  ѧ  ��    |\n";
	cout << "|-------------------------|\n";
	cout << "| ��D�� ��  ѯ  ѧ  ��    |\n";
	cout << "|-------------------------|\n";
	cout << "| ��E�� ��  ��  ��  ��    |\n";
	cout << "|-------------------------|\n";
	cout << "|  ��ѡ��A-E���˵�ѡ��  |\n";
	cout << "|-------------------------|\n";

}

void addTeacher()
{
	cout << " �� ��  ��  ��  ʦ��  \n";
	char name[32];
	cout << "��������ʦ������" << endl;;
	cin >> name;
	char sex;
	cout << "��������ʦ�Ա�F Ů��M �У���" << endl;
	cin >> sex;
	int age;
	cout << "��������ʦ���䣺" << endl;
	cin >> age;
	
	int experience;
	cout << "��������ʦ���䣺" << endl;
	cin >> experience;
	int id = teaMgr.getAutoId();
	CTeacher * pTeacher = new CTeacher();
	pTeacher->SetName(name);
	pTeacher->SetId(id);
	pTeacher->setAge(age);
	pTeacher->setExperience(experience);
	bool ret = teaMgr.Add(pTeacher);
	if (ret)
	{
		cout << "��ϲ����Ϣ¼��ɹ���" << endl;
	}
	else
	{
		cout << "��Ǹ����Ϣ¼��ʧ�ܣ�" << endl;
	}
}
void addStudent() {
	cout << " �� ��  ��  ѧ  ����  \n";
	char name[32];
	cout << "������ѧ��������" << endl;;
	cin >> name;
	char sex;
	cout << "������ѧ���Ա�F Ů��M �У���" << endl;
	cin >> sex;
	int age;
	cout << "������ѧ�����䣺" << endl;
	cin >> age;
	
	int cid;
	LOOP6:
	cout << "������ѧ���༶�ţ�" << endl;
	cin >> cid;
	CClasses * pC = (CClasses *)claMgr.Find(cid);
	if (pC == NULL) {
		cout << "û����صİ༶��Ϣ����������д" << endl;
		goto LOOP6;
	}

	int id = stuMgr.getAutoId();
	CStudent *pStudent = new CStudent();
	pStudent->SetName(name);
	pStudent->SetId(id);
	pStudent->setAge(age);
	pStudent->setCid(cid);
	bool ret = stuMgr.Add(pStudent);
	if (ret)
	{
		cout << "��ϲ����Ϣ¼��ɹ���" << endl;
	}
	else
	{
		cout << "��Ǹ����Ϣ¼��ʧ�ܣ�" << endl;
	}
}

void addClasses()
{
	cout << " �� ��  ��  ��  ����  \n";
	char name[32];
	cout << "������༶���ƣ�" << endl;;
	cin >> name;
	int tid;
LOOP5:
		cout << "����������ι��ţ�" << endl;
		cin >> tid;
	CTeacher * pElem = (CTeacher *)teaMgr.Find(tid);
	if (pElem == NULL) {
		cout << "��ʦ���Ų����ڣ����������룡" << endl;
		goto  LOOP5;
	}
	int id = claMgr.getAutoId();
	CClasses *pClasses = new CClasses();
	pClasses->SetId(id);
	pClasses->SetName(name);
	pClasses->setTid(tid);
	bool ret = claMgr.Add(pClasses);
	if (ret)
	{
		cout << "��ϲ����Ϣ¼��ɹ���" << endl;
	}
	else
	{
		cout << "��Ǹ����Ϣ¼��ʧ�ܣ�" << endl;
	}
}

void showTeacherList()
{
	cout << "|----------------------�� ��  ʦ  ��  ��------------------------|\n";
	int count = teaMgr.getElemCount();
	if (count == 0) {
		cout << "��δ¼���κν�ʦ��Ϣ" << endl;
	}
	else {
		for (int i = 0; i < count; i++)
		{
			CTeacher * pElem = (CTeacher*)teaMgr.getArray()[i];
			cout.setf(ios::left, ios::adjustfield);//��ʾ����
			cout << "���ţ�" << pElem->GetId() << endl;
			cout << "������" << pElem->GetName() << endl;
			cout << "�Ա�" << pElem->getSex() << endl;
			cout << "���䣺" << pElem->getAge() << endl;
			cout << "���䣺" << pElem->getExperience() << endl;
			cout << endl;
		}
	}
	cout << "|-----------------------------------------------------------------|\n";
	system("pause");
}

void showClassesList()
{
	cout << "|----------------------�� ��  ��  ��  ��------------------------|\n";
	int count = claMgr.getElemCount();
	if (count == 0) {
		cout<<"��δ¼���κΰ༶��Ϣ"<<endl;
	}
	else {
		for(int i=0;i<count;i++)
		{
			CClasses *pC = (CClasses*)claMgr.getArray()[i];
			CTeacher *pT = (CTeacher*)teaMgr.Find(pC->getTid());
			cout.setf(ios::left, ios::adjustfield);//��ʾ����
			cout << "�༶�ţ�" << pC->GetId() << endl;
			cout << "���ƣ�" << pC->GetName() << endl;
			cout << "�����Σ�" << (pT!=NULL?pT->GetName():"����")<<endl;
			cout << endl;
		}
	}
	cout << "|-----------------------------------------------------------------|\n";
	system("pause");
}

void showStudentList()
{
	cout << "|----------------------�� ѧ  ��  ��  ��------------------------|\n";
	int  count = stuMgr.getElemCount();
	if (count == 0)
	{
		cout << "��ʾ������ѧ����Ϣ��" << endl;
	}
	else  for (int i = 0; i< count; ++i)
	{
		CStudent *pS = (CStudent *)stuMgr.getArray()[i];
		CClasses   *pC = (CClasses   *)claMgr.Find(pS->getCid());
		cout.setf(ios::left, ios::adjustfield);

		cout << "ѧ�ţ�" << pS->GetId() << endl;
		cout << "������" << pS->GetName() << endl;
		cout << "�Ա�" << (pS->getSex() == 'F' ? "Ů" : "��") << endl;
		cout << "���䣺" << pS->getAge() << endl;
		cout << "�༶��"  << (pC != NULL ? pC->GetName() : "����") << endl;
		cout << endl;
	}

	cout << "|-----------------------------------------------------------------|\n";
	system("pause");

}

void deleteTeacher()
{
	cout << " �� ɾ  ��  ��  ʦ��  \n";
	int id;
	cout << "�������ʦ����" << endl;
	cin >> id;
	CTeacher* pT = (CTeacher*)teaMgr.Find(id);
	if (pT == NULL) {
		cout << "�޸ý�ʦ��Ϣ" << endl;
	}
	else{
		cout << "|-------------------------�� ��  ʦ  ��   Ϣ��----------------------------|\n";
		cout.setf(ios::left, ios::adjustfield);//��ʾ����
		cout << "���ţ�" << pT->GetId() << endl;
		cout << "������" << pT->GetName() << endl;
		cout << "�Ա�" << pT->getSex() << endl;
		cout << "���䣺" << pT->getAge() << endl;
		cout << "���䣺" << pT->getExperience() << endl;
		cout << "|-----------------------�� ȷ��ɾ��Y   ȡ��N ��---------------------------|\n";
		char choice;
		cin >> choice;
		if (choice == 'y' || choice == 'Y') {
			bool ret = teaMgr.Del(id);
			if (ret) {
				cout << "ɾ���ɹ�" << endl;
			}
			else {
				cout << "ɾ��ʧ��" << endl;
			}
		}
	}
	system("pause");
}

void deleteClasses()
{
	cout << " �� ɾ  ��  ��  ����  \n";
	int id;
	cout << "������༶��" << endl;
	cin >> id;
	CClasses* pC = (CClasses*)claMgr.Find(id);
	if (pC == NULL) {
		cout << "�޸ð༶��Ϣ" << endl;
	}
	else {
		cout << "|-------------------------�� ��  ��  ��   Ϣ��----------------------------|\n";
		
		cout.setf(ios::left, ios::adjustfield);//��ʾ����
		cout << "�༶�ţ�" << pC->GetId() << endl;
		cout << "���ƣ�" << pC->GetName() << endl;
		
		cout << "|-----------------------�� ȷ��ɾ��Y   ȡ��N ��---------------------------|\n";
		char choice;
		cin >> choice;
		if (choice == 'y' || choice == 'Y') {
			bool ret = claMgr.Del(id);
			if (ret) {
				cout << "ɾ���ɹ�" << endl;
			}
			else {
				cout << "ɾ��ʧ��" << endl;
			}
		}
	}
	system("pause");
}

void deleteStudent()
{
	cout << " �� ɾ  ��  ѧ  ����  \n";
	int id;
	cout << "������ѧ��" << endl;
	cin >> id;
	CStudent* pS = (CStudent*)stuMgr.Find(id);
	if (pS == NULL) {
		cout << "�޸�ѧ����Ϣ" << endl;
	}
	else {
		cout << "|-------------------------�� ѧ  ��  ��   Ϣ��----------------------------|\n";
		cout.setf(ios::left, ios::adjustfield);

		cout << "ѧ�ţ�" << pS->GetId() << endl;
		cout << "������" << pS->GetName() << endl;
		cout << "�Ա�" << (pS->getSex() == 'F' ? "Ů" : "��") << endl;
		cout << "���䣺" << pS->getAge() << endl;

		cout << "|-----------------------�� ȷ��ɾ��Y   ȡ��N ��---------------------------|\n";
		char choice;
		cin >> choice;
		if (choice == 'y' || choice == 'Y') {
			bool ret = stuMgr.Del(id);
			if (ret) {
				cout << "ɾ���ɹ�" << endl;
			}
			else {
				cout << "ɾ��ʧ��" << endl;
			}
		}
	}
	system("pause");
}

void findTeacher()
{
	cout << " �� ��  ѯ  ��  ʦ��  \n";

	int  id;
	cout << "��������ʦ���ţ�" << endl;
	cin >> id;

	CTeacher *pT =(CTeacher*) teaMgr.Find(id);
	if (pT != NULL) {
		cout << "|-------------------------�� ��  ʦ  ��   Ϣ��----------------------------|\n";
		cout.setf(ios::left, ios::adjustfield);//��ʾ����
		cout << "���ţ�" << pT->GetId() << endl;
		cout << "������" << pT->GetName() << endl;
		cout << "�Ա�" << pT->getSex() << endl;
		cout << "���䣺" << pT->getAge() << endl;
		cout << "���䣺" << pT->getExperience() << endl;
		cout << "|--------------------------------------------------------------------|\n";
		system("pause");
	}
	else {
		cout << "��Ǹ��δ���ҵ����ѧ����Ϣ��" << endl;
	}
}

void findClasses()
{
	cout << " �� ��  ѯ  ��  ����  \n";

	int  id;
	cout << "������Ҫ��ѯ�İ༶�ţ�" << endl;
	cin >> id;
	CClasses *pC = (CClasses *)claMgr.Find(id);
	if (pC != NULL)
	{
		cout << "|-------------------------�� ��  ��  ��   Ϣ��----------------------------|\n";

		
		cout.setf(ios::left, ios::adjustfield);//��ʾ����
		cout << "�༶�ţ�" << pC->GetId() << endl;
		cout << "���ƣ�" << pC->GetName() << endl;

		cout << "|------------------------------------------------------------------------|\n";
		//��һ�¼��̲����¹���
		system("pause");
	}
	else
	{
		cout << "��Ǹ��δ���ҵ���ذ༶��Ϣ��" << endl;
	}
}

void findStudent()
{
	cout << " �� ��  ѯ  ѧ  ����  \n";

	int  id;
	cout << "������Ҫ��ѯ��ѧ��ѧ�ţ�" << endl;
	cin >> id;
	CStudent *pS = (CStudent *)stuMgr.Find(id);
	if (pS != NULL)
	{
		cout << "|-------------------------�� ѧ  ��  ��   Ϣ��----------------------------|\n";

		cout.setf(ios::left, ios::adjustfield);

		cout << "ѧ�ţ�" << pS->GetId() << endl;
		cout << "������" << pS->GetName() << endl;
		cout << "�Ա�" << (pS->getSex() == 'F' ? "Ů" : "��") << endl;
		cout << "���䣺" << pS->getAge() << endl;

		cout << "|--------------------------------------------------------------------|\n";


		//��һ�¼��̲����¹���
		system("pause");
	}
	else
	{
		cout << "��Ǹ��δ���ҵ����ѧ����Ϣ��" << endl;
	}

}


//void showStudentList()
//{
//	cout << "|----------------------�� ѧ  ��  ��  ��------------------------|\n";
//	int count = stuMgr.getElemCount();
//	if (count == 0) {
//		cout<<"��δ¼���κ�ѧ����Ϣ"<<endl;
//	}
//	else {
//		for (int i = 0; i < count; i++)
//		//	CStudent * pSt = (CStudent*)stuMgr.getArray()[i];
//		//CClasses * pC = (CClasses*)claMgr.Find(i);
//		CStudent *p = (CStudent *)stuMgr.getArray()[i];
//		CClasses   *pC = (CClasses   *)claMgr.Find(p->getCid());
//	}
//	cout << "|-----------------------------------------------------------------|\n";
//}

