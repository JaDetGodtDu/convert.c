#include <stdio.h>
#include "distance.h"
#include "../../convert.h"

float miles_to_kilometers(float miles);
float kilometers_to_miles(float kilometers);
float feet_to_meters(float feet);
float meters_to_feet(float meters);

void distance_main(){
    int choice;
    float miles;
    float kilometers;
    float feet;
    float meters;
    do {
        display_distance_menu();

        choice = choice_menu();

        switch(choice) {
            case 1:
                miles_to_kilometers_menu();
                miles = get_value();
                printf("\n%.2f miles is equal to \033[4m%.2f\033[0m kilometers.\n\n", miles, miles_to_kilometers(miles));
                break;
            case 2:
                kilometers_to_miles_menu();
                kilometers = get_value();
                printf("\n%.2f kilometers is equal to \033[4m%.2f\033[0m miles.\n\n", kilometers, kilometers_to_miles(kilometers));
                break;
            case 3:
                feet_to_meters_menu();
                feet = get_value();
                printf("\n%.2f feet is equal to \033[4m%.2f\033[0m meters.\n\n", feet, feet_to_meters(feet));
                break;
            case 4:
                meters_to_feet_menu();
                meters = get_value();
                printf("\n%.2f meters is equal to \033[4m%.2f\033[0m feet.\n\n", meters, meters_to_feet(meters));
                break;
            case 5:
                printf("Returning to main menu.\n\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while(choice != 5);
}

float miles_to_kilometers(float miles){
    return miles * 1.60934;
}

float kilometers_to_miles(float kilometers){
    return kilometers / 1.60934;
}

float feet_to_meters(float feet){
    return feet / 3.28084;
}

float meters_to_feet(float meters){
    return meters * 3.28084;
}
