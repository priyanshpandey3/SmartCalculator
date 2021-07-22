#include<stdio.h> 
#include<conio.h>
#include"Armstrong.c"
#include"Automorphic.c"
#include"binary_decimal.c"
#include"EvenOdd.c"
#include"factorial.c"
#include"Fibonacci.c"
#include"LCM.c"
#include"GCD.c"
#include"Multiplicationtable.c"
#include"palindrome.c"
#include"power.c"
#include"prime.c"
#include"sumofnaturalnumber.c"
#include"Ugly.c"

 
int main() 
{ 

int choice, n,n2,ans,n3,h;
do
{


printf("Welcome to Our Smart Calculator! \n");

printf(" 1.Factorial of a number \n 2.Sum of natural number \n 3.Power of a number \n 4.Identifying Even or Odd \n 5.Print Multiplication table of a number \n 6.Fibonacci series \n 7.To identify the number is Prime or not. \n 8.LCM of 2 numbers \n 9.GCD of 2 numbers \n 10.To check whether a number is Armstrong or not \n 11.To check whether a number is Ugly Number or not");
printf("\n 12.To check whether a number is Automorphic number or not \n 13.To check whether a number is Palindrome or not\n 14.To change number from Decimal to Binary \n 15.Exit");


printf("\n Enter your choice ");
    scanf("%d", &choice);


 if(choice==15){
           break;
           }
            else{
    printf("Enter a number(having boundary value range [0 200]): ");
    scanf("%d", &n);
if(n<201 && n>0){


switch (choice)
{

case 1:

    fact(n);
    break;

case 2:
    sumofnaturalnumber(n);
    break;

case 3:
    power(n);
    break;

case 4:
    EvenOdd(n);
      break;

case 5:
    multiplicationtable(n);
    break;


case 6:
    Fibonacci(n);
    break;


case 7:
    prime(n);
    break;

case 8:

    printf("Enter second integer");
    scanf("%d", &n2);

    LCM(n,n2);

    break;

case 9 :

    printf("Enter second integer");
    scanf("%d", &n2);

    GCD(n,n2);


    break;

case 10 :
    Armstrong(n);
    break;

case 11 :
    Ugly(n);
    break;

case 12:
    Automorphic(n);

    break;

case 13:
    palindrome(n);

    break;

case 14:
  decimal(n);
    break;

default:
printf("Error! The operator is not correct");
    break;
}
            }

else {
    printf("The given number is out of range.");
}
            }
printf("\nDo u want to continue again? \nPress 1 for terminate or press any other key for continue");

    scanf("%d", &h);

    }while(h!=1);


   printf("\nThank You");
   getch();
    return 0;
}


