/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int num, i, sum = 0;  //declare variables  
    printf(" Enter a positive number: ");  
    scanf("%d", &num);   //get user inputs
      
    for (i = 0; i <= num; i++)  
    {  
        sum = sum + i;   //calculation
    }  
      
    printf("\n Sum of the first %d number is: %d", num, sum);   //display output
    getch();  
}  
