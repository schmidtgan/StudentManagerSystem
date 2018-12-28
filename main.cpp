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
//展示主菜单
void showMainMenu();
//展示教师子菜单
void  showChildMenuTeacher();
//展示班级子菜单
void  showChildMenuClasses();
//展示学生子菜单
void  showChildMenuStudent();
//实例化管理对象
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
			cout<<"您选择了"<<inputString<<"选项"<<endl;
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
				
				cout<<"您输入的选项不存在"<<endl;
				goto LOOP;
				
				break;

			}
	} 
	

	cout << "   感谢使用学生管理系统，再见！  \n";

	
	system("pause");
	return 0;
}

void showMainMenu()
{
	
	cout << "|------------------------------------|\n";
	cout << "|        欢迎进入学生管理系统！      |\n";
	cout << "|------------------------------------|\n";
	cout << "|     【A】 教    师   管   理       |\n";
	cout << "|------------------------------------|\n";
	cout << "|     【B】 班    级   管   理       |\n";
	cout << "|------------------------------------|\n";
	cout << "|     【C】 学    生   管   理       |\n";
	cout << "|------------------------------------|\n";
	cout << "|     【D】 退    出   系   统       |\n";
	cout << "|------------------------------------|\n";
	cout << "|      请选择【A-D】菜单选项         |\n";
	cout << "|------------------------------------|\n";
}
void  showChildMenuTeacher()
{
	

	cout << "|-------------------------|\n";
	cout << "|      教师管理子菜单     |\n";
	cout << "|-------------------------|\n";
	cout << "| 【A】 添  加  教  师    |\n";
	cout << "|-------------------------|\n";
	cout << "| 【B】 教  师  列  表    |\n";
	cout << "|-------------------------|\n";
	cout << "| 【C】 删  除  教  师    |\n";
	cout << "|-------------------------|\n";
	cout << "| 【D】 查  询  教  师    |\n";
	cout << "|-------------------------|\n";
	cout << "| 【E】 返  回  上  层    |\n";
	cout << "|-------------------------|\n";
	cout << "|  请选择【A-E】菜单选项  |\n";
	cout << "|-------------------------|\n";
}


void  showChildMenuClasses()
{
	

	cout << "|-------------------------|\n";
	cout << "|      班级管理子菜单     |\n";
	cout << "|-------------------------|\n";
	cout << "| 【A】 添  加  班  级    |\n";
	cout << "|-------------------------|\n";
	cout << "| 【B】 班  级  列  表    |\n";
	cout << "|-------------------------|\n";
	cout << "| 【C】 删  除  班  级    |\n";
	cout << "|-------------------------|\n";
	cout << "| 【D】 查  询  班  级    |\n";
	cout << "|-------------------------|\n";
	cout << "| 【E】 返  回  上  层    |\n";
	cout << "|-------------------------|\n";
	cout << "|  请选择【A-E】菜单选项  |\n";
	cout << "|-------------------------|\n";

}


void  showChildMenuStudent()
{
	

	cout << "|-------------------------|\n";
	cout << "|      学生管理子菜单     |\n";
	cout << "|-------------------------|\n";
	cout << "| 【A】 添  加  学  生    |\n";
	cout << "|-------------------------|\n";
	cout << "| 【B】 学  生  列  表    |\n";
	cout << "|-------------------------|\n";
	cout << "| 【C】 删  除  学  生    |\n";
	cout << "|-------------------------|\n";
	cout << "| 【D】 查  询  学  生    |\n";
	cout << "|-------------------------|\n";
	cout << "| 【E】 返  回  上  层    |\n";
	cout << "|-------------------------|\n";
	cout << "|  请选择【A-E】菜单选项  |\n";
	cout << "|-------------------------|\n";

}

void addTeacher()
{
	cout << " 【 添  加  教  师】  \n";
	char name[32];
	cout << "请输入老师姓名：" << endl;;
	cin >> name;
	char sex;
	cout << "请输入老师性别（F 女，M 男）：" << endl;
	cin >> sex;
	int age;
	cout << "请输入老师年龄：" << endl;
	cin >> age;
	
	int experience;
	cout << "请输入老师教龄：" << endl;
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
		cout << "恭喜，信息录入成功！" << endl;
	}
	else
	{
		cout << "抱歉，信息录入失败！" << endl;
	}
}
void addStudent() {
	cout << " 【 添  加  学  生】  \n";
	char name[32];
	cout << "请输入学生姓名：" << endl;;
	cin >> name;
	char sex;
	cout << "请输入学生性别（F 女，M 男）：" << endl;
	cin >> sex;
	int age;
	cout << "请输入学生年龄：" << endl;
	cin >> age;
	
	int cid;
	LOOP6:
	cout << "请输入学生班级号：" << endl;
	cin >> cid;
	CClasses * pC = (CClasses *)claMgr.Find(cid);
	if (pC == NULL) {
		cout << "没有相关的班级信息，请重新填写" << endl;
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
		cout << "恭喜，信息录入成功！" << endl;
	}
	else
	{
		cout << "抱歉，信息录入失败！" << endl;
	}
}

void addClasses()
{
	cout << " 【 添  加  班  级】  \n";
	char name[32];
	cout << "请输入班级名称：" << endl;;
	cin >> name;
	int tid;
LOOP5:
		cout << "请输入班主任工号：" << endl;
		cin >> tid;
	CTeacher * pElem = (CTeacher *)teaMgr.Find(tid);
	if (pElem == NULL) {
		cout << "老师工号不存在，请重新输入！" << endl;
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
		cout << "恭喜，信息录入成功！" << endl;
	}
	else
	{
		cout << "抱歉，信息录入失败！" << endl;
	}
}

void showTeacherList()
{
	cout << "|----------------------【 教  师  列  表】------------------------|\n";
	int count = teaMgr.getElemCount();
	if (count == 0) {
		cout << "尚未录入任何教师信息" << endl;
	}
	else {
		for (int i = 0; i < count; i++)
		{
			CTeacher * pElem = (CTeacher*)teaMgr.getArray()[i];
			cout.setf(ios::left, ios::adjustfield);//表示居左
			cout << "工号：" << pElem->GetId() << endl;
			cout << "姓名：" << pElem->GetName() << endl;
			cout << "性别：" << pElem->getSex() << endl;
			cout << "年龄：" << pElem->getAge() << endl;
			cout << "教龄：" << pElem->getExperience() << endl;
			cout << endl;
		}
	}
	cout << "|-----------------------------------------------------------------|\n";
	system("pause");
}

void showClassesList()
{
	cout << "|----------------------【 班  级  列  表】------------------------|\n";
	int count = claMgr.getElemCount();
	if (count == 0) {
		cout<<"尚未录入任何班级信息"<<endl;
	}
	else {
		for(int i=0;i<count;i++)
		{
			CClasses *pC = (CClasses*)claMgr.getArray()[i];
			CTeacher *pT = (CTeacher*)teaMgr.Find(pC->getTid());
			cout.setf(ios::left, ios::adjustfield);//表示居左
			cout << "班级号：" << pC->GetId() << endl;
			cout << "名称：" << pC->GetName() << endl;
			cout << "班主任：" << (pT!=NULL?pT->GetName():"暂无")<<endl;
			cout << endl;
		}
	}
	cout << "|-----------------------------------------------------------------|\n";
	system("pause");
}

void showStudentList()
{
	cout << "|----------------------【 学  生  列  表】------------------------|\n";
	int  count = stuMgr.getElemCount();
	if (count == 0)
	{
		cout << "提示：暂无学生信息！" << endl;
	}
	else  for (int i = 0; i< count; ++i)
	{
		CStudent *pS = (CStudent *)stuMgr.getArray()[i];
		CClasses   *pC = (CClasses   *)claMgr.Find(pS->getCid());
		cout.setf(ios::left, ios::adjustfield);

		cout << "学号：" << pS->GetId() << endl;
		cout << "姓名：" << pS->GetName() << endl;
		cout << "性别：" << (pS->getSex() == 'F' ? "女" : "男") << endl;
		cout << "年龄：" << pS->getAge() << endl;
		cout << "班级："  << (pC != NULL ? pC->GetName() : "暂无") << endl;
		cout << endl;
	}

	cout << "|-----------------------------------------------------------------|\n";
	system("pause");

}

void deleteTeacher()
{
	cout << " 【 删  除  教  师】  \n";
	int id;
	cout << "请输入教师工号" << endl;
	cin >> id;
	CTeacher* pT = (CTeacher*)teaMgr.Find(id);
	if (pT == NULL) {
		cout << "无该教师信息" << endl;
	}
	else{
		cout << "|-------------------------【 教  师  信   息】----------------------------|\n";
		cout.setf(ios::left, ios::adjustfield);//表示居左
		cout << "工号：" << pT->GetId() << endl;
		cout << "姓名：" << pT->GetName() << endl;
		cout << "性别：" << pT->getSex() << endl;
		cout << "年龄：" << pT->getAge() << endl;
		cout << "教龄：" << pT->getExperience() << endl;
		cout << "|-----------------------【 确认删除Y   取消N 】---------------------------|\n";
		char choice;
		cin >> choice;
		if (choice == 'y' || choice == 'Y') {
			bool ret = teaMgr.Del(id);
			if (ret) {
				cout << "删除成功" << endl;
			}
			else {
				cout << "删除失败" << endl;
			}
		}
	}
	system("pause");
}

void deleteClasses()
{
	cout << " 【 删  除  班  级】  \n";
	int id;
	cout << "请输入班级号" << endl;
	cin >> id;
	CClasses* pC = (CClasses*)claMgr.Find(id);
	if (pC == NULL) {
		cout << "无该班级信息" << endl;
	}
	else {
		cout << "|-------------------------【 班  级  信   息】----------------------------|\n";
		
		cout.setf(ios::left, ios::adjustfield);//表示居左
		cout << "班级号：" << pC->GetId() << endl;
		cout << "名称：" << pC->GetName() << endl;
		
		cout << "|-----------------------【 确认删除Y   取消N 】---------------------------|\n";
		char choice;
		cin >> choice;
		if (choice == 'y' || choice == 'Y') {
			bool ret = claMgr.Del(id);
			if (ret) {
				cout << "删除成功" << endl;
			}
			else {
				cout << "删除失败" << endl;
			}
		}
	}
	system("pause");
}

void deleteStudent()
{
	cout << " 【 删  除  学  生】  \n";
	int id;
	cout << "请输入学号" << endl;
	cin >> id;
	CStudent* pS = (CStudent*)stuMgr.Find(id);
	if (pS == NULL) {
		cout << "无该学生信息" << endl;
	}
	else {
		cout << "|-------------------------【 学  生  信   息】----------------------------|\n";
		cout.setf(ios::left, ios::adjustfield);

		cout << "学号：" << pS->GetId() << endl;
		cout << "姓名：" << pS->GetName() << endl;
		cout << "性别：" << (pS->getSex() == 'F' ? "女" : "男") << endl;
		cout << "年龄：" << pS->getAge() << endl;

		cout << "|-----------------------【 确认删除Y   取消N 】---------------------------|\n";
		char choice;
		cin >> choice;
		if (choice == 'y' || choice == 'Y') {
			bool ret = stuMgr.Del(id);
			if (ret) {
				cout << "删除成功" << endl;
			}
			else {
				cout << "删除失败" << endl;
			}
		}
	}
	system("pause");
}

void findTeacher()
{
	cout << " 【 查  询  教  师】  \n";

	int  id;
	cout << "请输入老师工号：" << endl;
	cin >> id;

	CTeacher *pT =(CTeacher*) teaMgr.Find(id);
	if (pT != NULL) {
		cout << "|-------------------------【 教  师  信   息】----------------------------|\n";
		cout.setf(ios::left, ios::adjustfield);//表示居左
		cout << "工号：" << pT->GetId() << endl;
		cout << "姓名：" << pT->GetName() << endl;
		cout << "性别：" << pT->getSex() << endl;
		cout << "年龄：" << pT->getAge() << endl;
		cout << "教龄：" << pT->getExperience() << endl;
		cout << "|--------------------------------------------------------------------|\n";
		system("pause");
	}
	else {
		cout << "抱歉、未查找到相关学生信息！" << endl;
	}
}

void findClasses()
{
	cout << " 【 查  询  班  级】  \n";

	int  id;
	cout << "请输入要查询的班级号：" << endl;
	cin >> id;
	CClasses *pC = (CClasses *)claMgr.Find(id);
	if (pC != NULL)
	{
		cout << "|-------------------------【 班  级  信   息】----------------------------|\n";

		
		cout.setf(ios::left, ios::adjustfield);//表示居左
		cout << "班级号：" << pC->GetId() << endl;
		cout << "名称：" << pC->GetName() << endl;

		cout << "|------------------------------------------------------------------------|\n";
		//敲一下键盘才向下滚动
		system("pause");
	}
	else
	{
		cout << "抱歉、未查找到相关班级信息！" << endl;
	}
}

void findStudent()
{
	cout << " 【 查  询  学  生】  \n";

	int  id;
	cout << "请输入要查询的学生学号：" << endl;
	cin >> id;
	CStudent *pS = (CStudent *)stuMgr.Find(id);
	if (pS != NULL)
	{
		cout << "|-------------------------【 学  生  信   息】----------------------------|\n";

		cout.setf(ios::left, ios::adjustfield);

		cout << "学号：" << pS->GetId() << endl;
		cout << "姓名：" << pS->GetName() << endl;
		cout << "性别：" << (pS->getSex() == 'F' ? "女" : "男") << endl;
		cout << "年龄：" << pS->getAge() << endl;

		cout << "|--------------------------------------------------------------------|\n";


		//敲一下键盘才向下滚动
		system("pause");
	}
	else
	{
		cout << "抱歉、未查找到相关学生信息！" << endl;
	}

}


//void showStudentList()
//{
//	cout << "|----------------------【 学  生  列  表】------------------------|\n";
//	int count = stuMgr.getElemCount();
//	if (count == 0) {
//		cout<<"尚未录入任何学生信息"<<endl;
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

