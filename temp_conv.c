#include<stdio.h>
#include<ctype.h>

int main() {

	char unit;
	float temp;

	printf("\nIs the temperature in (F) or (C)?: ");
	scanf_s("%c", &unit);

	unit = toupper(unit);

	if (unit == 'C') {
		printf("\nEnter temperature in Celsius: \n");
		scanf_s("%f", &temp);
		temp = (temp * 9 / 5) + 32;
		printf("The temperature in Farenheit is: %.1f \n", temp);

	}
	else if (unit == 'F') {
		printf("\nEnter temperature in Farenheit: \n");
		scanf_s("%f", &temp);
		temp = ((temp - 32 ) * 5) / 9;
		printf("The temperature in Celsius is: %.1f \n", temp);

	}
	else {
		printf("Invalid input!");

	}

	return 0;
}