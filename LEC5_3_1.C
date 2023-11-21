#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c,d,e;
clrscr();
printf("enter A: ");
scanf("%d",&a);
printf("enter B: ");
scanf("%d",&b);
printf("enter C: ");
scanf("%d",&c);
printf("enter D: ");
scanf("%d",&d);
printf("enter E: ");
scanf("%d",&e);
(a>b)?(a>c)?(a>d)?(a>e)?printf("A is max")
		       :printf("E is max")
		 :(d>e)?printf("D is max")
		       :printf("E is max")
	   :(c>d)?(c>e)?printf("C is max")
		       :printf("E is max")
		 :(d>e)?printf("D is max")
		       :printf("E is max")
     :(b>c)?(b>d)?(b>e)?printf("B is max")
		       :printf("E is max")
		 :(d>e)?printf("D is max")
		       :printf("E is max")
	   :(c>d)?(c>e)?printf("C is max")
		       :printf("E is max")
		 :(d>e)?printf("D is max")
		       :printf("E is max");
getch();
}





