Consider Two integers a and b taken as input from the user. Using Loops iterate the value of
a till the value of b.
If the value of a<=9 the output should correspond to the English representation of the
numbers i.e., 8=Eight, 9=Nine etc.
If the iteration exceeds 9 then the programs should print if the exceeded number is even or
odd.
#include<stdio.h>
int main () {
	int a,b;
	printf("enter a and b\n");
	scanf("%d %d",&a,&b);
	while (a<=b) {
		switch (a)
{
	case 0:
		printf("zero\n");
		break;
		case 1:
			printf("one\n");
			break;
			case 2:
				printf("two\n");
				break;
					case 3:
				printf("three\n");
				break;
					case 4:
				printf("four\n");
				break;
					case 5:
				printf("five\n");
				break;
					case 6:
				printf("six\n");
				break;
					case 7:
				printf("seven\n");
				break;
					case 8:
				printf("eight\n");
				break;
					case 9:
				printf("nine\n");
				break;
				default:
					if (a%2==0) {
						printf("even\n");
					} else {
						printf("odd\n");
					}
					
}
++a;
}
return 0;
}  
