// lab1_5.cpp: определяет точку входа для консольного приложения.
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
	printf("Введите фамилию студента, запись о котором хотите найти: ");
	scanf("%s", sp);
	for(int i = 0; i < ARR_SZ; i++) {
		if(!stricmp(sp, A[i].famil)) {
			printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n",stud[i].famil,stud[i].name, stud[i].facult,stud[i].Nomzach);
			flag = true;
		}
	}
	if(!flag)
		printf("Студенты с такими параметрами не найдены");
}

void nameSearch(student* A) {
	char sp[20];
	printf("Введите имя студента, запись о котором хотите найти: ");
	scanf("%s", sp);
	for(int i = 0; i < ARR_SZ; i++) {
		if(!stricmp(sp, A[i].name))
			printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n",stud[i].famil,stud[i].name, stud[i].facult,stud[i].Nomzach);
		else {
			printf("Студенты с такими параметрами не найдены");
		}
	}
}

void facultSearch(student* A) {
	char sp[20];
	printf("Введите название факультета: ");
	scanf("%s", sp);
	for(int i = 0; i < ARR_SZ; i++) {
		if(!stricmp(sp, A[i].facult))
			printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n",stud[i].famil,stud[i].name, stud[i].facult,stud[i].Nomzach);
		else {
			printf("Студенты с такими параметрами не найдены");
		}
	}
}

void nzSearch(student* A) {
	int sp = 0, i = 0;
	printf("Введите номер зачётной книжки: ");
	scanf("%d", &sp);
	while (sp != A[i].Nomzach) {
		i++;
	}
	if (!i) {
		printf("Студенты с такими параметрами не найдены");
	}
	printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n",stud[i].famil,stud[i].name, stud[i].facult,stud[i].Nomzach);
}

int _tmain(int argc, _TCHAR* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i = 0;

	for(i=0; i<ARR_SZ; i++) {
		printf("Введите фамилию студента\n");
		scanf("%20s",stud[i].famil);
	}

	for(i=0; i<ARR_SZ; i++) {
		printf("Введите имя студента %s\n",stud[i].famil);
		scanf("%20s",stud[i].name);
	}

	for(i=0; i<ARR_SZ; i++) {
		printf("Введите название факультета студента %s %s\n",stud[i].famil,stud[i].name);
		scanf("%20s",stud[i].facult);
	}

	for(i=0; i<ARR_SZ; i++) {
		printf("Введите номер зачётной книжки студента %s %s\n",stud[i].famil,stud[i].name);
		scanf("%d",&stud[i].Nomzach);
	}

	for(i=0;i<ARR_SZ;i++) {
			printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n",stud[i].famil,stud[i].name, stud[i].facult,stud[i].Nomzach);
		}
	printf("Выберите значение, по которому хотите искать:\n\n1 – фамилия;\n2 – имя;\n3 – факультет;\n4 – номер зачётной книжки\n");
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
			printf("Неизвестный идентификатор.");
	}
	getch();
	return 0;
}


