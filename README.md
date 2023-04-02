# _**_printf**
This proyect point is our own version of the printf function that we use in c.

## Build Status
We have an error but we do not know what it is because all of test did not have any mistake.

## Code Style
Betty coding style.

## Flow chart

![](https://github.com/Mvigil6343/holbertonschool-printf/blob/master/_printf%20flowchart.png)


## Functions
* printc  
   A function that prints a unique character.
* prints  
   A function that prints a string.
* printd  
   A function that prints an int.
* printmod  
   A function that prints a % after the command. 
* converter  
   A function that converts a string of numbers into any base of numbers. We use it for decimal but it can be used to convert the numbers to binary or another base.
* auxlist  
   A function that is used to check which format the user is using and choose the correct print function, for example: %d uses printd.

## How to use:
You call the function by writing __printf() later you can choose what to print with the symbol % and then you write what you want to print. It can also print even without the % symbol.
Syntax: _printf(format, "argument");

example 1:
```
_printf("Welcome to the code");
```
It will print: Welcome to the code  

example 2:
```
char a = "Day"
_printf("Good %s", a);
```
It will print: Good Day

## Authors:
Marcos Vigil & Leonardo Rodriguez

### Thank you for using our function.
