# Unit Conversion Program

## Conversion of distance, temperature and weight

### Really good terminal program, with great scalability and ease of use

#### Many advanced conversion. Much WOW!

For compiling and running this program, you will need to have GCC installed.
I run it locally on a windows machine with chocolatey installed.

You can either make use of the makefile included in this repository with the following commands:

    For compiling the program:
        $ make

    For running the program:
        $ make run
    or simply:
        $ ./conv

    For cleaning up the program folder(s) after use:
        $ make clean

<br>
Or you can paste this gcc line into your terminal and run it as you usually would:

```sh
gcc -c convert.c -o convert.o && gcc -c convert_ui.c -o convert_ui.o && gcc -c units/distance/distance.c -o units/distance/distance.o && gcc -c units/distance/distance_ui.c -o units/distance/distance_ui.o && gcc -c units/temperature/temperature.c -o units/temperature/temperature.o && gcc -c units/temperature/temperature_ui.c -o units/temperature/temperature_ui.o && gcc -c units/weight/weight.c -o units/weight/weight.o && gcc -c units/weight/weight_ui.c -o units/weight/weight_ui.o && gcc convert.o convert_ui.o units/distance/distance.o units/distance/distance_ui.o units/temperature/temperature.o units/temperature/temperature_ui.o units/weight/weight.o units/weight/weight_ui.o -o conv
```

<br>
It will be compiled into a file called conv.exe. <br>
Type this line into your terminal to run the .exe file:

```sh
./conv
```