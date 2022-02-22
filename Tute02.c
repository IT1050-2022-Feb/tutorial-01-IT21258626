/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.
e.g.

Distance -> 20
Amount = 20 x 50 = 1000

*/

#include <stdio.h>

int main() {

  int distance; //declare variables
  float amount;

  printf("Enter distance : ");
  scanf("%d", &distance); //get user inputs

  if(distance<=30)
  {
    amount = distance * 50; //calculate amount
  }
  else
  {
    amount = 30 * 50 + (distance-30) * 40;
  }

  printf("Your amount is : %.2f" , amount);

  return 0;
}
