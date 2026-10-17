#include <stdio.h>
#pragma warning(disable: 4996)
#include <windows.h>

int main() {
	int grade;
	printf("enter your grade: ");
	scanf("%d, &grade");

	switch (grade)
	{
	case 1:
		printf("grade 1\n");
		break;
	case 2:
		printf("grade 2\n");
		break;
	case 3:
		printf("grade 3\n");
		break;
	default:
		printf("wrong text\n");
	}
}
