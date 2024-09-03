#include <stdio.h>

void display_intro(){
    printf("=====================================================================\n");
    printf("             Welcome to the unit conversion program!\n");
    printf("This program will convert units of distance, weight, and temperature.\n");
    printf("=====================================================================\n\n");
}
void display_menu(){
    printf("Please select an option from the menu below:\n");
    printf("    1. Convert units of distance\n");
    printf("    2. Convert units of temperature\n");
    printf("    3. Convert units of weight\n");
    printf("    4. Quit the program\n");
}
char* get_choice()
{
    static char choice[10];
    scanf("%9s", choice);
    return choice;
}
int choice_menu() {
    char* choice_str = get_choice();
    int choice;

    // Try to convert the choice to an integer
    if (sscanf(choice_str, "%d", &choice) == 1) {
        printf("\nYou chose: %d\n\n", choice);
        return choice;
    } else {
        // If it's not an integer, return the first character
        printf("\nYou chose: %c\n\n", choice_str[0]);
        return choice_str[0];
    }
}
float get_value()
{
    float value;
    scanf("%f", &value);
    return value;
}