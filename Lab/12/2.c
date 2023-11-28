2. Make 2 separate blank word files with text, "This is a test.". Open them in a C program as a binary file and compare the contents. Are the 2 files equal?
  #include<stdio.h>
#include<stdlib.h>

int compare(FILE *fptr1, FILE *fptr2) {
    char ch1, ch2;

    while ((ch1 = fgetc(fptr1)) != EOF && (ch2 = fgetc(fptr2)) != EOF) 
	{
        if (ch1 != ch2) 
		{
            return 0; // files are not equal
        }// end if
       if (ch1 != EOF || ch2 != EOF) 
 	   {
        return 0; // files are not equal wrt length  
       }// end if
	
    return 1; // Files are equal
   }// end while
}// end compare
int main()
{

FILE* fptr1;
FILE* fptr2;
fptr1= fopen("file1.txt", "w");
fptr2=fopen("file2.txt","w");
fprintf(fptr1,"%s %s %s %s","this","is","a","test");
fprintf(fptr2,"%s %s %s %s","this","is","a","test");
fptr1= fopen("file1.txt", "rb");
fptr2=fopen("file2.txt","rb");
    if (fptr1 == NULL || fptr2 == NULL) 
	{
        perror("Error opening files\n");
        return 1;
    }//end if
    if (compare(fptr1, fptr2)) 
	{
        printf("The files are equal.\n");
    }// end if 
	else 
	{
        printf("The files are not equal.\n");
    }// end else
    fclose(fptr1);
    fclose(fptr2);

    return 0;
}
