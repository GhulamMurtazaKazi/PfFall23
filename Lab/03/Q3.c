QUESTION#3
Calculate the hypotenuse of a right angled triangle with given two sides in C.
  #include<stdio.h>
#include<math.h>
int main () {
	float P,B,hypotenuse;
	printf("enter perpendicular and base\n");
	scanf("%f %f",&P,&B);
	printf("hypotenuse=(P^2+B^2)^1/2");
	hypotenuse=hypot(P,B);
	printf("hypotenuse=%f",hypotenuse);
	return 0;
	
}
  
