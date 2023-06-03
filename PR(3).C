#include<stdio.h>
#include<conio.h>
void main(){
int num;
int first;
int last;
int sum;
clrscr();
printf("Enter the value of A:");
scanf("%d",&num);
first=num;
while(first>=10){
first=first/10;
}
last=num%10;
sum=first+last;
printf("The Sum of First And Last Digit Is: %d" ,sum);
getch();
}