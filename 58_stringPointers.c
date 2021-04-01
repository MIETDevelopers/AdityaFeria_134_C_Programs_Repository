//A C Program to read the string in pointers loaction and give it as output.(Pre-Defined) 			
#include <stdio.h>

int main(void) {
  char name[] = "Aditya Feria";

  printf("%c \n", *name);     	
  printf("%c \n", *(name+3));	
  printf("%c \n", *(name+8));   

  char *namePtr;

  namePtr = name;
  printf("%c \n", *namePtr);     
  printf("%c \n", *(namePtr+2)); 
  printf("%c \n", *(namePtr+7)); 
}