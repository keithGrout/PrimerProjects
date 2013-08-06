//
//  main.c
//  PrimerProjects
//
//  Created by Keith on 7/12/13.
//  Copyright (c) 2013 Appology. All rights reserved.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


 #define MINUTESINHOUR 60
int minutesConverter(void);
bool badLimits(int begin, int end, int low, int high);
int get_int (void);
void nextTen(void);
void days2weeks(void);
void cmToFeet(void);
void floatCuber(float);
void sumOfSquares(void);
void inception(void);
void tempConversion(float);
void tempConversionCaller(void);
double power(double n, int p);
void charlatan(void);

//program reads input as a stream of chars unil encountering EOF.
    //Have the program print each input character and its ASCII decimal value
    //Note that chars preceding the space character in the ASCII sequence are nonprinting
    //characters. Treat them specially. If the nonprinting character is a newline, or tab
    // print /n or /t, respectively. Otherwise use control-character notation. For instance
    //ASCII 1 is control+A, which can be displayed as ^A. Note that the AScII value for A
    //is the value for Ctrl+A plus 64. A similar relation holds for all nonprinting characters.
    //Print 10 pairs per line, except start a fresh line each time a newline character
    //is encountered.


int main(int argc, const char * argv[])
{
   
    
    
    
    

    return 0;
}





















/*
//user enters character
//display prints A on the first row
//on the second row it prints A, A+1... up until A + row number;
//When A + row number is reached, it prints A + row number, down to A (A+3,A+2, A+1)until A is printed
//after the row reaches the character, the program terminates



char letter;
    printf("Enter a capital letter: ");
    scanf("%c", &letter);
    int size = letter + 1 - 'A'; //tells how many letters there are before and including letter
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", letter - j);
        }
        printf("\n");
    }
 
 ****************************************
char lets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

for (int row = 0; row < 6; row++)
{
    for (int column = 0; column <= row; column++)
    {
        printf("%c", lets[5] - column);
    }
}   printf("\n");










int minutesConverter(void)
{

    //converts time in minutes to time in hours and minutes.
    int minutes, hours, remainingMins;
    printf("Please enter a number of minutes.\n");
    printf("(enter 0 to exit)");
    scanf("%d", &minutes);
    
    while ( minutes > 0) {
        
        hours = minutes / MINUTESINHOUR;
        remainingMins = minutes % MINUTESINHOUR;
        printf("%d minutes is %d hours and %d minutes. \n", minutes, hours, remainingMins);
        printf("Please enter more minutes. (Enter 0 to quit) \n");
        scanf("%d", &minutes);
        
    }
    printf("Thank you for coming!!");
    
    return 0;
}

void nextTen(void)
{
    int integer, i;
    printf("enter integer: \n");
    scanf("%d", &integer);
    i = integer;
    
    while ( i <= integer + 10)
    {
        printf("%d ", i);
        ++i;
    }
}



void days2weeks(void)
{
    int days, daysRemaining, weeks;
    printf("Enter number of days: ");
    scanf("%d", &days);
    
    while (days > 0)
    {
        weeks = days / 7;
        daysRemaining = days % 7;
        printf("%d days are %d weeks, %d days.\n", days, weeks, daysRemaining);
        printf("Please enter more days, or enter '0' to quit. \n");
        scanf("%d", &days);
        
    }
    printf("Quitter.");
}

void cmToFeet(void)
{
    const float CM_IN_INCH = 2.54;
    const float CM_IN_FOOT = 2.54 * 12;
    
    printf("Please enter a height in centimeters.\n");
    float centimeters,cmLeft, inches;
    int feet;
    scanf("%f", &centimeters);
    
    while (centimeters > 0)
    {
        feet = (int) (centimeters / CM_IN_FOOT);
        cmLeft = centimeters - (feet * CM_IN_FOOT );
        inches = cmLeft / CM_IN_INCH;
        printf("%.f cm = %d feet, %.1f inches.\n", centimeters, feet, inches);
        printf("\n");
        printf("Enter a height in cm (or press 0 to quit. ");
        scanf("%f", &centimeters);
    }
}



void sumOfSquares(void){
    int sum, i, ints;
    sum = 0;
    i = 0;
    printf("How many consecutive ints would you like to add? ");
    scanf("%d", &ints);
    while (i++ < ints) {
        sum = sum + (i * i);
        
    }
    printf("%d", sum);
}


void floatCuber(float n)
{
    
    
    float reFloat, cubed;
    reFloat = n;
    
    cubed = reFloat * reFloat * reFloat;
    printf("Your float cubed is %.1f\nSick float.", cubed);
    
}


void inception(void)
{
    
    float n;
    printf("Gimme a float bro.\n");
    scanf("%f", &n);
    floatCuber(n);
}

void tempConversion(float fahren)
{
    const float scale = 1.8;
    const float celsAdj = 32;
    const float kelAdj = 273.16;
    
    float fahrenheit = fahren;
    float celsius = (fahrenheit - celsAdj) / scale;
    float kelvin = celsius + kelAdj;
    
    printf("When Fahrenheit = %.2f\n", fahrenheit);
    printf("Celsius = %.2f\n", celsius);
    printf("Kelvin = %.2f\n", kelvin);
}


void tempConversionCaller(void)
{
    
    printf("Yo. Psst. Lemme get that Fahrenheit bro.");
    float fahrenheit;
    int status;
    status = scanf("%f", &fahrenheit);
    
    while (status == 1)
    {
        tempConversion(fahrenheit);
        printf("Now another one. Unless you wanna quit? Then enter 'q' for quitter.\n");
        status = scanf("%f", &fahrenheit);
    }
}

void charlatan(void){
    char latan;
    printf("Enter an upper case letter: ");
    scanf("%c", &latan);
    int size = (latan) + 1 - 'A';
    int tmp = 0;
    for (int i = 0; i < size; ++i)
    {
        for (int h = 1; h < size - i; h++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
            tmp = 'A'+j;
        }
        
        for (int k = 1; k <= i; k++) {
            printf("%c",tmp - k );//65          66,65    67,66,65    latan - 4    latan - 4, latan -3,
        }                                            //lat -4    -3,-4     -2-3-4
        printf("\n"); //print a new line
    }
}
 
 #define CPPARTICHOKES 1.25
 #define CPPBEETS .65
 #define CPPCARROTS .89
 #define DISCOUNT .05
 #define LOWSHIPPING 3.50
 #define MEDIUMSHIPPING 10
 #define HIGHSHIPPINGBASE 8
 #define SHIPPINGPERPOUND .10

 double artichokes, totalArts, beets, totalBeets, carrots, totalCarrs;
    artichokes = 0;
    totalArts = 0;
    beets = 0;
    totalBeets = 0;
    carrots = 0;
    totalCarrs = 0;
    int selection;
    double subTotal, discountTotal, shipping, grandTotal;
    discountTotal = 0;
    subTotal = 0;
    double beetsCost, artichokesCost, carrotsCost;
    
    
    printf("Choose item, and enter pounds desired:\n");
    printf("a. artichokes\nb. beets\nc. carrots\n");
    
    while((selection = getchar()) != 'q')
    {
        
        switch (selection)
        {
            case 'a':
            {
                printf("Enter pounds of artichokes:\n");//get pounds of arts
                scanf("%lf", &artichokes);
                totalArts += artichokes;
                break;
            }
            case 'b':
            {
                printf("Enter pounds of beets:\n");//get pounds of beets
                scanf("%lf", &beets);
                totalBeets += beets;

                break;
            }
            case 'c':
            {
                printf("Enter pounds of carrots:\n");//get pounds of carrs
                scanf("%lf", &carrots);
                totalCarrs += carrots;

                break;
            }
            default:
                break;
        }
        printf("Choose item, and enter pounds desired:\n");
        printf("a. artichokes\nb. beets\nc. carrots\nq to checkout\n");
        getchar();//strips the 'n' that scanf left behind
    }

    double totalPounds = totalArts + totalCarrs + totalBeets;
    //getchar();//eat newline (put to alert that there is still a buffer waiting to be read)
    //calculate cost per veggie, total pounds * cost per pound
    artichokesCost = totalArts * CPPARTICHOKES;
    beetsCost = totalBeets * CPPBEETS;
    carrotsCost = totalCarrs * CPPCARROTS;

    subTotal = artichokesCost + beetsCost + carrotsCost;
    //compute discount if order is at least $100
    if (subTotal >= 100)
    {
        discountTotal = subTotal * DISCOUNT;
    }
    
    //compute shipping
    if (totalPounds <= 5)
    {
        shipping = LOWSHIPPING;
    }
    else if (totalPounds < 20)
    {
        shipping = MEDIUMSHIPPING;
    }
    else
    {
        shipping = HIGHSHIPPINGBASE + (totalPounds * SHIPPINGPERPOUND);
    }
    
    grandTotal = subTotal - discountTotal + shipping;
    printf("\t\t\t\tCost Per Lb\t\tLBs Ordered\t\tTotal Cost\n");
    printf("Artichokes:%16.2lf %15.2lf %14.2lf\n", CPPARTICHOKES, totalArts, artichokesCost);
    printf("Beets:%21.2lf %15.2lf %14.2lf\n", CPPBEETS, totalBeets, beetsCost);
    printf("Carrots:%19.2lf %15.2lf %14.2lf\n\n", CPPCARROTS, totalCarrs, carrotsCost);
    printf("Subtotal:%50.2lf\n", subTotal);
    printf("Discount:%50.2lf\n", discountTotal);
    printf("Shipping:%50.2lf\n\n", shipping);
    printf("Grand Total:%50.2lf\n", grandTotal);
 
 int get_int (void)
 {
 
 int input;
 char ch;
 
 while (scanf("%d", &input) != 1)
 {
 while ((ch = getchar()) != '\n')
 {
 putchar(ch);
 }
 printf(" is not an integer.\nPlease enter an ");
 printf("integer val, such as 12, -23, 4 etc.");
 }
 
 return 0;
 }
 bool badLimits(int begin, int end, int low, int high)
 {
 bool notGood = false;
 if (begin > end)
 {
 printf("%d isn't smaller than %d", begin, end);
 notGood = true;
 }
 if (begin < low || end < low)
 {
 printf("Values must be %d or greater.\n", low);
 notGood = true;
 }
 if (begin > high || end > high)
 {
 printf("Values must be %d or lower.\n", high);
 notGood = true;
 }
 return notGood;
 }
 
 
 int get_int (void)
 {
 
 int input;
 char ch;
 
 while (scanf("%d", &input) != 1)
 {
 while ((ch = getchar()) != '\n')
 {
 putchar(ch);
 }
 printf(" is not an integer.\nPlease enter an ");
 printf("integer val, such as 12, -23, 4 etc.");
 }
 
 return 0;
 }
 
 
 
 

*/