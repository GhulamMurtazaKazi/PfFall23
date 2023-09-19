#include<stdio.h>
int main () {
int time;
printf("enter the time");
scanf("%d",&time);
if (time>5 && time<11)
{ 
	printf("Good morning");
} 
else if (time>12 && time<18)
{ 
	printf("Good evening");
}  
else if (time>18 && time<24)
{ 
	printf("Good night");
}
return 0;
}
