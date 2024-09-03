#include <stdio.h>
#include "convert.h"
#include "units/distance/distance.h"
#include "units/temperature/temperature.h"
#include "units/weight/weight.h"

int main(){
    int choice;
    do {
        display_intro();
        display_menu();

        choice = choice_menu();

        switch(choice){
            case 1:
                distance_main();
                break;
            case 2:
                temperature_main();
                break;
            case 3:
                weight_main();
                break;   
            case 4:
                printf("Exiting program.\n");
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        } 
    } while (choice != 4);
        return 0;
}