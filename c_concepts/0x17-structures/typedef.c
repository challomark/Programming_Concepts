#include <stdio.h>

typedef struct student
{
	int rollno;
	char name[20];
	float marks;
}student;

void main()
{
	student s = {10, "Mark", 89};
	printf("%d %s %f\n", s.rollno, s.name, s.marks);
}
