#include <stdio.h>
#include "weight.h"
#include "../../convert.h"

float pounds_to_kilograms(float pounds);
float kilograms_to_pounds(float kilograms);
float ounces_to_grams(float ounces);
float grams_to_ounces(float grams);

void weight_main(){
    int choice;
    float pounds;
    float kilograms;
    float ounces;
    float grams;

    do {
        display_weight_menu();

        choice = choice_menu();

        switch(choice) {
            case 1:
                pounds_to_kilograms_menu();
                pounds = get_value();
                printf("\n%.2f pounds is equal to \033[4m%.2f\033[0m kilograms.\n\n", pounds, pounds_to_kilograms(pounds));
                break;
            case 2:
                kilograms_to_pounds_menu();
                kilograms = get_value();
                printf("\n%.2f kilograms is equal to \033[4m%.2f\033[0m pounds.\n\n", kilograms, kilograms_to_pounds(kilograms));
                break;
            case 3:
                ounces_to_grams_menu();
                ounces = get_value();
                printf("\n%.2f ounces is equal to \033[4m%.2f\033[0m grams.\n\n", ounces, ounces_to_grams(ounces));
                break;
            case 4:
                grams_to_ounces_menu();
                grams = get_value();
                printf("\n%.2f grams is equal to \033[4m%.2f\033[0m ounces.\n\n", grams, grams_to_ounces(grams));
                break;
            case 5:
                printf("Returning to main menu.\n\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while(choice != 5);
};
float pounds_to_kilograms(float pounds){
    return pounds / 2.20462;
}
float kilograms_to_pounds(float kilograms){
    return kilograms * 2.20462;
}
float ounces_to_grams(float ounces){
    return ounces * 28.3495;
}
float grams_to_ounces(float grams){
    return grams / 28.3495;
}