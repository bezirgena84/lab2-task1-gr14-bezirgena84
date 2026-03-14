/* main.c */
#include <stdio.h>
#include "student.h"

void sstudent(void)
{
		struct StudentData student;

		/* Ваши данные */
		student.stu_name = "Безирген";         
		student.stu_id = 2323438;            
		student.stu_age = 23;                

		/* Адрес */
		student.stuAddress.street = "ул. Ленина, д. 10, кв. 5";
		student.stuAddress.state = "Московская область";
		student.stuAddress.city = "Москва";
		student.stuAddress.country = "Russia";

		/* Вывод */
		printf("Hello, %s!\n", student.stu_name);
		printf("Student Id is: %d\n", student.stu_id);
		printf("Student Age is: %d\n", student.stu_age);
		printf("Country: %s, Region: %s, City: %s, Address: %s\n", 
					 student.stuAddress.country,
					 student.stuAddress.state, 
					 student.stuAddress.city,
					 student.stuAddress.street);
		printf("Goodbye!\n");
}

int main(void) {
		sstudent();
		return 0;
}
