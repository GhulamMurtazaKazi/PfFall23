/*
*Programmer:Ghulam Murtaza
*Date:12-9-23
*Description:This program is  for the solutions of quadratric equation.*/


//--included files--//
#include<stdio.h>
#include<math.h>
int main () {
    float a,b,c,d;
    printf("enter a,b,c\n");
    scanf("%f %f %f ",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if (a==0) {
        printf("invalid a can't be equal to 0");
    } else {
        if  (d==0) {
            printf("roots are equal");
            printf("%f",-b/(2*a));
        } else if (d>0) {
                d=sqrt(d);
                printf("root 1:%f",(-b+d)/(2*a));
                printf("root 2:%f",(-b-d)/(2*a));
            
        } else {
            d=fabs(d);
            d=sqrt(d);
            printf("root 1:%f+%fi",(-b/(2*a)),(d/(2*a)));
            printf("root 2:%f-%fi",(-b/(2*a)),(d/(2*a)));
            
        }
    }
    
    return 0;
}
