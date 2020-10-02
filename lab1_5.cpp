// lab1_5.cpp: определ€ет точку входа дл€ консольного приложени€.
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
	printf("¬ведите фамилию студента, запись о котором хотите найти: ");
	scanf("%s", sp);
	for(int i = 0; i < ARR_SZ; i++) {
		if(!stricmp(sp, A[i].famil))
			printf("Cтудент %s %s обучаетс€ на факультете %s, номер зачЄтной книжки %d \n",stud[i].famil,stud[i].name, stud[i].facult,stud[i].Nomzach);
	}
}

void nameSearch(student* A) {
	char sp[20];
	printf("¬ведите им€ студента, запись о котором хотите найти: ");
	scanf("%s", sp);
	for(int i = 0; i < ARR_SZ; i++) {
		if(!stricmp(sp, A[i].name))
			printf("Cтудент %s %s обучаетс€ на факультете %s, номер зачЄтной книжки %d \n",stud[i].famil,stud[i].name, stud[i].facult,stud[i].Nomzach);
	}
}

void facultSearch(student* A) {
	char sp[20];
	printf("¬ведите название факультета: ");
	scanf("%s", sp);
	for(int i = 0; i < ARR_SZ; i++) {
		if(!stricmp(sp, A[i].facult))
			printf("Cтудент %s %s обучаетс€ на факультете %s, номер зачЄтной книжки %d \n",stud[i].famil,stud[i].name, stud[i].facult,stud[i].Nomzach);
	}
}

void nzSearch(student* A) {
	int sp = 0, i = 0;
	printf("¬ведите номер зачЄтной книжки: ");
	scanf("%d", &sp);
	while (sp != A[i].Nomzach) {
		i++;
	}
	printf("Cтудент %s %s обучаетс€ на факультете %s, номер зачЄтной книжки %d \n",stud[i].famil,stud[i].name, stud[i].facult,stud[i].Nomzach);
}

int _tmain(int argc, _TCHAR* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i = 0;

	for(i=0; i<ARR_SZ; i++) {
		printf("¬ведите фамилию студента\n");
		scanf("%20s",stud[i].famil);
	}

	for(i=0; i<ARR_SZ; i++) {
		printf("¬ведите им€ студента %s\n",stud[i].famil);
		scanf("%20s",stud[i].name);
	}

	for(i=0; i<ARR_SZ; i++) {
		printf("¬ведите название факультета студента %s %s\n",stud[i].famil,stud[i].name);
		scanf("%20s",stud[i].facult);
	}

	for(i=0; i<ARR_SZ; i++) {
		printf("¬ведите номер зачЄтной книжки студента %s %s\n",stud[i].famil,stud[i].name);
		scanf("%d",&stud[i].Nomzach);
	}

	for(i=0;i<ARR_SZ;i++) {
			printf("Cтудент %s %s обучаетс€ на факультете %s, номер зачЄтной книжки %d \n",stud[i].famil,stud[i].name, stud[i].facult,stud[i].Nomzach);
		}
	printf("¬ыберите значение, по которому хотите искать:\n\n1 Ц фамили€;\n2 Ц им€;\n3 Ц факультет;\n4 Ц номер зачЄтной книжки\n");
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
			printf("Ќеизвестный идентификатор.");
	}
	getch();
	return 0;
}


