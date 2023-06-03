#include<stdio.h>
#include<conio.h>
void main(){
char alphabet='a';
clrscr();
do{
printf("%c\n",alphabet);
alphabet=alphabet+4;
}while(alphabet<='z');
getch();
}
