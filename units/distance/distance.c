#include <stdio.h>
#include "distance.h"
#include "../../convert.h"

float miles_to_kilometers(float miles);
float kilometers_to_miles(float kilometers);
float feet_to_meters(float feet);

void distance_main(){
    int choice;
    do {
        display_distance_menu();

        choice = choice_menu();

        switch(choice) {
            case 1:
                miles_to_kilometers_menu();
                float miles = get_value();
                printf("\n%.2f miles is equal to %.2f kilometers.\n\n", miles, miles_to_kilometers(miles));
                break;
            case 2:
                kilometers_to_miles_menu();
                float kilometers = get_value();
                printf("\n%.2f kilometers is equal to %.2f miles.\n\n", kilometers, kilometers_to_miles(kilometers));
                break;
            case 3:
                feet_to_meters_menu();
                float feet = get_value();
                printf("\n%.2f feet is equal to %.2f meters.\n\n", feet, feet_to_meters(feet));
                break;
            case 4:
                printf("Returning to main menu.\n\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while(choice != 4);
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
