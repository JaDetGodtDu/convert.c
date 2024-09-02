#include <stdio.h>

void display_intro(){
    printf("Welcome to the unit conversion program!\n");
    printf("This program will convert units of distance, weight, and temperature.\n");
    printf("==============================================================\n");
}
void display_menu(){
    printf("Please select an option from the menu below:\n");
    printf("1. Convert units of distance\n");
    printf("2. Convert units of weight\n");
    printf("3. Convert units of volume\n");
    printf("4. Quit the program\n");
}
int get_choice()
{
    int choice;
    scanf("%d", &choice);
    return choice;
}