/* If his basic salary is less than Rs. 1500, then HRA = 10% of basic
salary and DA = 90% of basic salary. If his salary is either equal to
or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic
salary. If the employee's salary is input through the keyboard write
a program to find his gross salary. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float basic_salary,gross_salary,HRA,DA;
    printf("Hello world!\n");
    printf("Please enter the basic salary of the employee\n");
    scanf("%f",&basic_salary);

    //if the basic salary is less than Rs 1500,then the HRA = 10% of basic salary
    //and DA = 90% of the basic salary
    if(basic_salary < 1500)
    {
     gross_salary = basic_salary + ((10 * basic_salary) / 100) + ((90 * basic_salary) / 100);

     printf("The gross salary of a person whose basic salary is %f less than Rs 1500 is equal to %f \n", basic_salary, gross_salary);
    }
    // if the basic salary is equal to or greater than 1500 then the HRA = Rs 500
    //and DA = 98% of the basic salary.
    else
    {
        gross_salary = basic_salary + 500 + ((98 * basic_salary) / 100);
        printf("The gross salary of a person whose basic salary %f is equal to or greater than Rs 1500 is equal to %f \n", basic_salary, gross_salary);

    }
    return 0;
}
