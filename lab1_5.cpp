// lab1_5.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Windows.h"
#include "conio.h"
#define ARR_SZ 3

struct student {
	char famil[20];
	char name[20];
	char facult[20];
	int Nomzach;

} stud[ARR_SZ];

void famSearch(student* A) {
	char sp[20];
	bool flag = false;
	printf("������� ������� ��������, ������ � ������� ������ �����: ");
	scanf("%s", sp);
	for(int i = 0; i < ARR_SZ; i++) {
		if(!stricmp(sp, A[i].famil)) {
			printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n",stud[i].famil,stud[i].name, stud[i].facult,stud[i].Nomzach);
			flag = true;
		}
	}
	if(!flag)
		printf("�������� � ������ ����������� �� �������");
}

void nameSearch(student* A) {
	char sp[20];
	printf("������� ��� ��������, ������ � ������� ������ �����: ");
	scanf("%s", sp);
	for(int i = 0; i < ARR_SZ; i++) {
		if(!stricmp(sp, A[i].name))
			printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n",stud[i].famil,stud[i].name, stud[i].facult,stud[i].Nomzach);
		else {
			printf("�������� � ������ ����������� �� �������");
		}
	}
}

void facultSearch(student* A) {
	char sp[20];
	printf("������� �������� ����������: ");
	scanf("%s", sp);
	for(int i = 0; i < ARR_SZ; i++) {
		if(!stricmp(sp, A[i].facult))
			printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n",stud[i].famil,stud[i].name, stud[i].facult,stud[i].Nomzach);
		else {
			printf("�������� � ������ ����������� �� �������");
		}
	}
}

void nzSearch(student* A) {
	int sp = 0, i = 0;
	printf("������� ����� �������� ������: ");
	scanf("%d", &sp);
	while (sp != A[i].Nomzach) {
		i++;
	}
	if (!i) {
		printf("�������� � ������ ����������� �� �������");
	}
	printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n",stud[i].famil,stud[i].name, stud[i].facult,stud[i].Nomzach);
}

int _tmain(int argc, _TCHAR* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i = 0;

	for(i=0; i<ARR_SZ; i++) {
		printf("������� ������� ��������\n");
		scanf("%20s",stud[i].famil);
	}

	for(i=0; i<ARR_SZ; i++) {
		printf("������� ��� �������� %s\n",stud[i].famil);
		scanf("%20s",stud[i].name);
	}

	for(i=0; i<ARR_SZ; i++) {
		printf("������� �������� ���������� �������� %s %s\n",stud[i].famil,stud[i].name);
		scanf("%20s",stud[i].facult);
	}

	for(i=0; i<ARR_SZ; i++) {
		printf("������� ����� �������� ������ �������� %s %s\n",stud[i].famil,stud[i].name);
		scanf("%d",&stud[i].Nomzach);
	}

	for(i=0;i<ARR_SZ;i++) {
			printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n",stud[i].famil,stud[i].name, stud[i].facult,stud[i].Nomzach);
		}
	printf("�������� ��������, �� �������� ������ ������:\n\n1 � �������;\n2 � ���;\n3 � ���������;\n4 � ����� �������� ������\n");
	scanf("%d", &i);
	switch(i) {
		case 1:
			famSearch(stud);
			break;
		case 2:
			nameSearch(stud);
			break;
		case 3:
			facultSearch(stud);
			break;
		case 4:
			nzSearch(stud);
			break;
		default:
			printf("����������� �������������.");
	}
	getch();
	return 0;
}


