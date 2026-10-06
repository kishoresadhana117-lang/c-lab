#include<stdio.h>
void main()
{
int year;
printf("Enter the Year(YYYY): ");
scanf("%d",&year);
if(year%4==0 && year%100!=0 || year%400)
printf("\n the given year %d is a leap year", year);
else
  printf("\n the given year %d is not a leap year", year);

}