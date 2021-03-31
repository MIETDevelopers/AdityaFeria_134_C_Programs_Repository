//Program which interacts with user and take student's name, roll number and attendance percentage and stores it in the csv file. 
#include <stdio.h> //Including standard input output header files.
#include <stdlib.h>//Including standard library header files.
#include <string.h>//Including string header files. 
int main() 
{ 
    FILE* fp = fopen("C\\Desktop\\C_Programs\\AdityaFeria_134_C_Program_Repository\\Write_csv36.csv", "a+"); //File path.

    char name[50]; 
    int rollno, attendance; 

    if (!fp) { 
        // Error in file opening 
        printf("Can't open file\n"); 
        return 0; 
    }
    // Asking user input for the new record to be added.   
    printf("\nEnter Student Name\n"); 
    scanf("%s", &name); 
    printf("\nEnter Roll Number\n"); 
    scanf("%d", &rollno); 
    printf("\nEnter Attendance\n"); 
    scanf("%d", &attendance); 

    // Saving data in file 
    fprintf(fp, "%s, %d, %d\n", name, 
            rollno, attendance); 

    printf("\nNew student details added."); 

    fclose(fp); 
    return 0; 
}