6. Take an array with N elements as input, and then output the frequency of each element present in the
array. Example:
Input: {2, 4, 2, 3, 5, 5, 4, 4}
Output:
Frequency of 2 = 2
Frequency of 4 = 3
Frequency of 3 = 1
Frequency of 5 = 2
  #include <stdio.h>

int main() {
    int i=0,j=1,size,count=1,x;
    float numbers[1000];
    printf("enter the size of array\n");
    scanf("%d",&size);
    while (i<size) {
        printf("enter a number\n");
        scanf("%f",&numbers[i]);
        ++i;
    }
    i=0;
    while (i<size)  {
    while (j<size) {
        if (numbers[i]==numbers[j]) {
        ++count; 
    }
    ++j;
        }
        printf("the frequency for index %d is %d\n",i,count);
        count=1;
        ++i;
        x=i-1;
        while (x>=0) {
        if  (numbers[i]==numbers[x])
          { 
		  ++i;
		  x=i-1;
             }  else { 
			 --x;
             	
			 }
             
        }
        j=i+1;
}
    return 0;
}
