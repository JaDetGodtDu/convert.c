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
    float fahrenheit;
    float kelvin;
    do {
        display_temperature_menu();

        choice = choice_menu();
        if (choice=='a')
        {
            celsius_to_fahrenheit_menu();
            celsius = get_value();
            printf("\n%.2f degrees Celsius is equal to \033[4m%.2f\033[0m degrees Fahrenheit.\n\n", celsius, celsius_to_fahrenheit(celsius));
        }
        else if (choice=='b')
        {
            fahrenheit_to_celsius_menu();
            fahrenheit = get_value();
            printf("\n%.2f degrees Fahrenheit is equal to \033[4m%.2f\033[0m degrees Celsius.\n\n", fahrenheit, fahrenheit_to_celsius(fahrenheit));
        }
        else if (choice=='c')
        {
            celsius_to_kelvin_menu();
            celsius = get_value();
            printf("\n%.2f degrees Celsius is equal to \033[4m%.2f\033[0m Kelvin.\n\n", celsius, celsius_to_kelvin(celsius));
        }
        else if (choice=='d')
        {
            kelvin_to_celsius_menu();
            kelvin = get_value();
            printf("\n%.2f Kelvin is equal to \033[4m%.2f\033[0m degrees Celsius.\n\n", kelvin, kelvin_to_celsius(kelvin));
        }
        else if (choice=='x')
        {
            printf("Returning to main menu.\n\n");
        }
    } while(choice != 'x');
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