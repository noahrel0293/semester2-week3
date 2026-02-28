
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Noah Leach
 * ID:20229280
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250;
   float ni_rate = 0.08;
   float tax_rate = 0.15;
    // calculate the deductions and final take-home salary
   float ni_cont = salary * ni_rate;
   float ni_deducted = salary - ni_cont;
   float tax_cont = (ni_deducted - 12500) * tax_rate;
   float take_home = ni_deducted - tax_cont;
    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f",salary);
    printf("NI contribution £%.2f",ni_cont);
    printf("Tax contribution £%.2f",tax_cont);
    printf("Take home salary £%.2f",take_home);
    return 0;
 }