#include <stdio.h>
#include "temperature.h"
#include "../../convert.h"

float celsius_to_fahrenheit(float celsius);
float fahrenheit_to_celsius(float fahrenheit);
float celsius_to_kelvin(float celsius);
float kelvin_to_celsius(float kelvin);

void temperature_main(){
    int choice;
    float celsius;
    do {
        display_temperature_menu();

        choice = choice_menu();

        switch(choice) {
            case 1:
                celsius_to_fahrenheit_menu();
                celsius = get_value();
                printf("\n%.2f degrees Celsius is equal to \033[4m%.2f\033[0m degrees Fahrenheit.\n\n", celsius, celsius_to_fahrenheit(celsius));
                break;
            case 2:
                fahrenheit_to_celsius_menu();
                float fahrenheit = get_value();
                printf("\n%.2f degrees Fahrenheit is equal to \033[4m%.2f\033[0m degrees Celsius.\n\n", fahrenheit, fahrenheit_to_celsius(fahrenheit));
                break;
            case 3:
                celsius_to_kelvin_menu();
                celsius = get_value();
                printf("\n%.2f degrees Celsius is equal to \033[4m%.2f\033[0m Kelvin.\n\n", celsius, celsius_to_kelvin(celsius));
                break;
            case 4:
                kelvin_to_celsius_menu();
                float kelvin = get_value();
                printf("\n%.2f Kelvin is equal to \033[4m%.2f\033[0m degrees Celsius.\n\n", kelvin, kelvin_to_celsius(kelvin));
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
float celsius_to_fahrenheit(float celsius){
    return celsius * 9/5 + 32;
}
float fahrenheit_to_celsius(float fahrenheit){
    return (fahrenheit - 32) * 5/9;
}
float celsius_to_kelvin(float celsius){
    return celsius + 273.15;
}
float kelvin_to_celsius(float kelvin){
    return kelvin - 273.15;
}