#include <stdio.h>
struct Student {
	int sno;
	char name[10];
	int score;
};
int main()
{
	int num_students;
	printf("�л� �� �Է�:");
	scanf_s("%d", &num_students);

	struct Student* std;
	std = (struct Student*)malloc(sizeof(struct Student) * num_students);
	
	for (int i=o; i<a;i++){
		printf("�л�#%d-%d �й� �Է�:", a, i + 1);
		scanf_s("%d", &(std[i].sno));

		printf("�л� # %d-%d �̸� �Է�:", a, i + 1);
		scanf_s("%s", std[i].name, 10);

		printf("�л� # %d-%d �����Է�:", a, i + 1);
		scanf_s("%d", &(std[i].score));

	}
	int sum = 0;
	for (int i = 0; i < a; i++) {
		sum += std[i];
	}
}