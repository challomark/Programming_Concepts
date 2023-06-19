#include <stdio.h>

struct student
{
	int rollno;
	char name[20];
	float marks;
};

void main()
{
	struct student s1 = {1, "Mark", 90.91};
	struct student s2 = {2, "Challo", 92};

	printf("Information for s1");
	printf("\n%d %s %f", s1.rollno, s1.name, s1.marks);
	printf("\nInformation for s2");
	printf("\n%d %s %f\n", s2.rollno, s2.name, s2.marks);
}
