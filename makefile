#VARIABLES ======================================================
# Defines the compiler to be used
CC = gcc 

# Defines the name of the target executable file
TARGET = conv 

# Defines the source files to be compiled
SRCS =  convert.c \
        convert_ui.c \
        units/distance/distance.c \
        units/distance/distance_ui.c \
        units/temperature/temperature.c \
        units/temperature/temperature_ui.c \
        units/weight/weight.c \
        units/weight/weight_ui.c \
#================================================================

# Defines the object files by replacing .c with .o in the source files
OBJS = $(SRCS:.c=.o)

# Defines the flags to be passed to the compiler
CFLAGS = -Wall -Wextra -Werror

# Defines the default target, which is the executable file
$(TARGET): $(OBJS)
    # Links the object files to create the executable
	$(CC) $(OBJS) -o $(TARGET)

# Defines the rule to compile .c files into .o object files
%.exe: %.c
    # Compiles the source file into an object file with the specified flags
	$(CC) $(CFLAGS) -c $< -o $@

# Defines the rule to run the executable file
run: $(TARGET)
    # Runs the executable
	./$(TARGET)

# Defines the rule to clean the object files and the target executable
clean:
    # Removes the object files and the executable
	rm -f $(OBJS) $(TARGET)