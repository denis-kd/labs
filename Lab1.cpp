#include "stdafx.h"
#include "time.h"
#include "stdlib.h"
#include "conio.h"
#include "locale.h"

// ������� lab1f() ��������� ���������� ������� 1
void lab1f() {

	const int ARRAY_SIZE = 20;
	int max = 0, min = 0, A[ARRAY_SIZE] = {0};

	for(int i = 0; i < ARRAY_SIZE; i++) {

		A[i] = 1 + rand() % 250;
		if( max < A[i]) max = A[i];

	}

	min = *A;
	for(int i = 0; i < ARRAY_SIZE; i++) {

		if( min > A[i]) min = A[i];

	}

	printf("�������� ����� ���������� � ���������� ���������� �������: %d", max - min);

}

// ������� lab2f() ��������� ���������� ������� 2
void lab2f() {

	const int ARRAY_SIZE = 20;
	int A[ARRAY_SIZE] = {0};
	printf("\n������, ����������� ������������� ����������\n");
	for(int i = 0; i < ARRAY_SIZE; ) {

		A[i] = rand();
		printf("%d ", A[i++]);

	}

}

// ������� lab3f() ��������� ���������� ������� 3
void lab3f() {

	int size = 0, *A = NULL;
	printf("\n������� ������ �������: ");
	scanf("%d", &size);
	A = (int*)malloc(sizeof(int) * size);
	
	for(int i = 0; i < size; i++) {

		*(A + i) = rand();
		printf("%d\n", *(A + i));

	}
	
	free(A); A = NULL;
}

// ������� lab4f() ��������� ���������� ������� 4
void lab4f() {

	int M[15][8] = {0};
	int colSum = 0, rowSum = 0;

	for(int i = 0; i < 15; i++) {
		for(int j = 0; j < 8; j++) {

			M[i][j] = rand() % 399;
			printf("%d\t", M[i][j]);

		}
		printf("\n");
	}

	for(int i = 0; i < 15; ) {
		for(int j = 0; j < 8; j++) {

			rowSum += M[i][j];
		}

		printf("����� �������� %d-� ������: %d\n", ++i, rowSum);
		rowSum = 0;
	}

	for(int j = 0; j < 8; ) {
		for(int i = 0; i < 15; i++) {

			colSum += M[i][j];
		}

		printf("����� �������� %d-�� �������: %d\n", ++j, colSum);
		colSum = 0;
	}

}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	lab1f();
	lab2f();
	lab3f();
	lab4f();
	getch();
	return 0;
}
