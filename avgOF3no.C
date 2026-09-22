#include<stdio.h>
void main()
{
int Number1,Number2,Number3,Average;
clrscr();
printf("Enter your number 1 :");
scanf("%d",&Number1);
printf("Enter number 2 :");
scanf("%d",&Number2);
printf("Enter your Number3:");
scanf("%d",&Number3);
Average=(Number1+Number2+Number3)/3;
printf("Your average is:%d",Average);
getch();
}
