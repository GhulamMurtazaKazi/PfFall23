2. An automobile company has a serial number for engine parts starting from AA0 to FF9. The other
characteristics of parts to be specified in a structure are: Year of manufacture, material and quantity
manufactured.
● Specify a structure to store information corresponding to a part.
● Write a program to retrieve information on parts with serial numbers between BB1 and CC6.
#include <stdio.h>

typedef struct car
{
    char id[5];
    int year;
    char material[50];
    int quantity;
} car;


int main(){
    car data[60];
    int num;
    printf("Enter Number of Serial Numbers: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter Serial Number of Car %d: ", i+1);
        scanf("%s", &data[i].id);
        printf("Enter Year of Car %d: ", i+1);
        scanf("%d", &data[i].year);
        printf("Enter Material of Car %d: ", i+1);
        scanf("%s", &data[i].material);
        printf("Enter Quantitiy of Car %d: ", i+1);
        scanf("%d", &data[i].quantity);
    }
    for (int i = 0; i < num; i++)
    {
        if (strcmp(data[i].id, "BB1") > 0 && strcmp(data[i].id, "CC6") < 0)
        {
            printf("Serial Number: %s, Year: %d, Material: %s, Quantity: %d\n", data[i].id, data[i].year, data[i].material, data[i].quantity);
        }
    }
    
}
