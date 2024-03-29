#include <stdio.h>

int main()
{
    float salary, final_salary, hours;

    printf("Enter the salary(per hours): ");
    scanf("%f", &salary);
    printf("Enter the hours worked: ");
    scanf("%f", &hours);

    final_salary = salary * hours;
    printf("The total salary is: $%.2f\n", final_salary);
    return 0;

}