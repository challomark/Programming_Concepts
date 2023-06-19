#include <stdio.h>

struct student
{
	int rollno;
	char name[20];
	float marks;
}s3 = {2};

void main()
{
	struct student s1 = {1, "Mark", 90.91};
	struct student s2;
	
	printf("Enter information for s2");
	scanf("%d %s %f", &s2.rollno, s2.name, &s2.marks);

	printf("Information for s1");
	printf("\n%d %s %f", s1.rollno, s1.name, s1.marks);
	printf("\nInformation for s2");
	printf("\n%d %s %f\n", s2.rollno, s2.name, s2.marks);
	printf("Information for s3");
	printf("\n%d %s %f\n", s3.rollno, s3.name, s3.marks);
}
