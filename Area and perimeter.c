#include <stdio.h>
#include <string.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    char shape_select[15];
    char inputap[15];
    double num1, num2, num3;

    printf("What will you like to calculate? Options: Area or Perimeter.\n");
    scanf("%14s", &inputap); // gets area or perimeter

    if (strcmp(inputap, "Area") == 0 || strcmp(inputap, "area") == 0)
    { // IF AREA CHOSEN
        printf("What shapes area would you like to calculate? Options: Circle, Rectangle, Square, Triangle and Hexagon.\n");
        scanf("%14s", &shape_select); // gets shape

        if (strcmp(shape_select, "Circle") == 0 || strcmp(shape_select, "circle") == 0)
        {
            printf("Enter the radius of the circle:\n");
            scanf("%lf", &num1);

            num2 = PI*num1*num1; // calculates area and assigns to num2
            printf("The area of the circle is approximately: %lf", num2);

        } else if (strcmp(shape_select, "Rectangle") == 0 || strcmp(shape_select, "rectangle") == 0)
        {
            printf("Enter the length of the rectangle:\n");
            scanf("%lf", &num1);

            printf("Enter the width of the rectangle:\n");
            scanf("%lf", &num2);

            printf("The area of the rectangle is: %lf", num1*num2);
        } else if (strcmp(shape_select, "Square") == 0 || strcmp(shape_select, "square") == 0)
        {
            printf("Enter the length of the square:\n");
            scanf("%lf", &num1);
            
            printf("The area of the square is: %lf", num1 * num1);
        } else if (strcmp(shape_select, "Triangle") ==0 || strcmp(shape_select, "triangle") == 0)
        {
            printf("Enter the height of the triangle:\n");
            scanf("%lf", &num1);

            printf("Enter the length of the base of the triangle:\n");
            scanf("%lf", &num2);

            printf("The area of the triangle is: %lf", (num1*num2)/2);
        } else if (strcmp(shape_select, "Hexagon") ==0 || strcmp(shape_select, "hexagon") == 0)
        {
            printf("Enter the length of one side of the hexagon:\n");
            scanf("%lf", &num1);

            printf("The area of the hexagon is approximately: %lf", (3 * sqrt(3)/2)*pow(num1, 2));
        }
        
        
    } else if (strcmp(inputap, "Perimeter") == 0 || strcmp(inputap, "perimeter") == 0) 
    { // IF PERIMETER CHOSEN
        printf("What shapes perimeter would you like to calculate? Options: Circle, Rectangle, Square, Triangle, Hexagon.\n");
        scanf("%14s", &shape_select);

    if (strcmp(shape_select, "Circle") == 0 || strcmp(shape_select, "circle") == 0)
        { // If circle is chosen:
            printf("Enter the radius of the circle:\n");
            scanf("%lf", &num1);

            num2 = 2*PI*num1; // calculates perimeter and assigns to num2
            printf("The perimeter of the circle is approximately: %lf", num2);

        } else if (strcmp(shape_select, "Rectangle") == 0 || strcmp(shape_select, "rectangle") == 0)
        {
            printf("Enter the length of the rectangle:\n");
            scanf("%lf", &num1);

            printf("Enter the width of the rectangle:\n");
            scanf("%lf", &num2);

            printf("The perimeter of the rectangle is: %lf", 2*(num1+num2)); // calculates and prints perimeter
        } else if (strcmp(shape_select, "Square") == 0 || strcmp(shape_select, "square") == 0)
        {
            printf("Enter the length of the square:\n");
            scanf("%lf", &num1);
            
            printf("The perimeter of the square is: %lf", num1 * 4); // calculates perimeter of square and prints
        } else if (strcmp(shape_select, "Triangle") == 0 || strcmp(shape_select, "triangle") == 0)
        {
            printf("Enter the length of one side:\n");
            scanf("%lf", &num1);

            printf("Enter the length of the second side:\n");
            scanf("%lf", &num2);

            printf("Enter the length of the third side:\n");
            scanf("%lf", &num3);

            printf("The perimeter of the triangle is: %lf", num1+num2+num3);
        } else if ((strcmp(shape_select, "Hexagon") ==0 || strcmp(shape_select, "hexagon") == 0))
        {
            printf("Enter the length of one side:\n");
            scanf("%lf", &num1);

            printf("The perimeter of the hexagon is: %lf", num1*6);
        }
        

    } else
    {
        printf("Error: Invalid selection.");
    }
}