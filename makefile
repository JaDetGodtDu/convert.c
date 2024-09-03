#Defines the compiler.
CC = gcc 

#Defines the name of the target/exe file
TARGET = conv 

#Defines the files to be compiled
SRCS =  convert.c \
		convert_ui.c \
		units/distance/distance.c \
		units/distance/distance_ui.c \
		units/temperature/temperature.c \
		units/temperature/temperature_ui.c \

#Defines the object files
OBJS = $(SRCS:.c=.o)

#Defines the flags to be passed to the compiler
CFLAGS = -Wall -Wextra -Werror

#Defines the default target
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

#Defines the rule to compile the object files
%.exe: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
#Defines the rule to clean the object files and the target
clean:
	rm -f $(OBJS) $(TARGET)