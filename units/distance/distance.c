#include <stdio.h>
#include "distance.h"
#include "../../convert.h"

void distance_main(){
    display_distance_menu();

    printf("Please enter your choice: ");
    int choice = get_choice();
    printf("You chose: %d\n", choice);
}