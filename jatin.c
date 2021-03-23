#include <stdio.h>//header file
void displayString(char str[]);

int main()//main function
{
    char str[50];
    printf("Enter String: \n");
    fgets(str, sizeof(str), stdin);  //reading user input.           
    displayString(str);     // Passing string to a function.    
    return 0;
}
void displayString(char str[])
{
	//output.
    printf("String Output: ");
    puts(str);
}
