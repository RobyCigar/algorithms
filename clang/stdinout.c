#include <stdio.h>

int main() {
    char ch; // Declare varible "ch" as a char
    char s[100]; // Declare array "s" as a char
    char sen[100]; // Declare array "sen" also as a char
    
    scanf("%c",&ch);// Read a char type variable, store it on the location named "ch"
    scanf("%s",s); // Read a string and store ir on array named "s"
    scanf("\n"); // Read an "enter"/next line
    
    //We need to read a next line, so the next command work
    scanf("%[^\n]%*s",sen);//Read a string until, including spaces, until you receive a                               next line and store it on array named "sen"
    
    printf("%c\n",ch); //Print char type variable and create a new line, take char from "ch" variable
    printf("%s\n",s); //Print string and create a new line, take string from "s" array
    printf("%s",sen); //Print string, take string from "sen" array
    
    return 0;
}
