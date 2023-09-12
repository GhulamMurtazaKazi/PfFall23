/*
*Programmer:Ghulam Murtaza
*Date:12-9-23
*Description:This program is  for the solutions of quadratric equation.*/


//--included files--//
#include<stdio.h>
#include<math.h>
int main(){
    
    printf("Quadratic equation is in the form of\n");
    printf("ax^2+bx+c\n");
    printf("With the help of a, b, c we get 2 roots of \n");
    printf("Enter Values of a, b, c . \n");
    int a,b,c;

    printf("\nEnter Value of a:  ");          //Asking for Value of a
    scanf("%d",&a);

    printf("\nEnter Value of b:  ");          //Asking for Value of b
    scanf("%d",&b);

    printf("\nEnter Value of c:  ");          //Asking for Value of c
    scanf("%d",&c);

    int Discriminant;
    float X1, X2;
    Dsc = (b*b)-(4*a*c);


                        //Checking Discrement 
    if (Discriminant<0){
        printf("\nThe roots are imaginary");
    }
    else if (Discriminant==0){
        printf("\nThe Roots are Equal");
        X1 = (-b)/(float)(2*a);
        printf("\nAnswer...'%.2lf'",X1);
    }
    else{
        printf("\nReal and Unique Roots\n");
        X1 = (-b+sqrt(Dsc))/(float)(2*a);          // Calculating Root
        X2 = (-b-sqrt(Dsc))/(float)(2*a);          //Calculating Root
        printf("\nX1...'%.2lf'",X1);
        printf("\nX2...'%.2lf'",X2);
    }


}//end main
