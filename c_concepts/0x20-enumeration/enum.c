#include <stdio.h>

enum Day {
	Sunday,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday
};

int main() {
	enum Day today = Wednesday;

	printf("Today is ");

	switch (today) {
		case Sunday:
			printf("Sunday");
			break;
		case Monday:
			printf("Monday");
			break;
		case Tuesday:
			printf("Tuesday");
			break;
		case Wednesday:
			printf("Wednesday");
			break;
		case Thursday:
			printf("Thursday");
			break;
		case Friday:
			printf("Friday");
			break;
		case Saturday:
			printf("Saturday");
			break;
		default:
			printf("Invalid day");
	}

	printf("\n");

	return 0;
}
