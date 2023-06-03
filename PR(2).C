#include<stdio.h>
#include<conio.h>
void main(){
int n;
int i=0;
clrscr();
printf("Enter the value of A:");
scanf("%d",&n);
do{
n=n/10;
i++;
}while(n!=0);
printf("%d",i);
getch();
}