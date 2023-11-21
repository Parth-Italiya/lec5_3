#include<stdio.h>
#include<conio.h>

void main(){
int choice,eng,guj,hin;
clrscr();
printf("======Jhakaas Telecom Service=====\n\n");

printf("press 1 for english..\n");
printf("press 2 for hindi..\n");
printf("press 3 for gujarati..\n");
scanf("%d",&choice);
switch(choice){
	case 1:
		 printf("press 1 for internet recharge..\n");
		 printf("press 2 for top-up recharge..\n");
		 printf("press 3 for  special recharge..\n");
		 printf("enter your choice: ");
		 scanf("%d",&eng);
		 switch(eng){
			case 1:
				printf("you have successfully done internet recharge");
				break;
			case 2:
				printf("you have successfully top-up recharge");
				break;
			case 3:
				printf("you have successfully done special recharge");
				break;
			default:
				printf("enter valid choice");
				break;
		}
		break;
	case 2:
		printf("internet recharge ke liye 1 dabaye\n");
		printf("top-up recharge ke liye 2 dabaye\n");
		printf("special recharge ke liye 3 dabaye\n");
		printf("enter your choise");
		scanf("%d",&hin);
		switch(hin){
			case 1:
				printf("internet recharge safal\n");
				break;
			case 2:
				printf("top-up safal\n");
				break;
		       case 3:
				printf("special recharge safal\n");
				break;
			default:
				printf("sahi choice chuniye..\n");
				break;
		}
		break;
	case 3:
		printf("internet recharge mate 1 dabaye\n");
		printf("top-up recharge mate 2 dabaye\n");
		printf("special recharge mate 3 dabaye\n");
		printf("enter your choise");
		scanf("%d",&hin);
		switch(hin){
			case 1:
				printf("internet recharge safal\n");
				break;
			case 2:
				printf("top-up safal\n");
				break;
		       case 3:
				printf("special recharge safal\n");
				break;
			default:
				printf("sachi choice chuniye..\n");
				break;
		}
		break;
		}
		getch();
		}













