#include <stdio.h>
/* My name Is : Mahdi Jamadian.
 * My Gmail :  Mr.jamadian@gmail.com
 * Instagram :Mahdi_Jamadian
 * My Git hub : Mahdi_Jamadian
 * */
#define PI 3.14159265359
int main() {
    float x, y, r;
    int input;
    char Input;
    printf("---------------------------------------------------------------------\n");
    printf("Enter the letter ""M"" to calculate the circumference and the letter ""N"" to calculate the area. : ");
    scanf("%c", &Input);
    printf("Please specify your shape\n  1 = square, 2 = rectangle,3 = circle. \n Code : ");
    scanf("%d", &input);

    if (input == 1 & Input == 'M') {
        printf("One side * 4 = area of a square . \n");
        printf("Enter the value of the side : ");
        scanf("%f", &x);
        printf("Your Square Area : %.2f", x * 4);
    }
    else if (input == 1 & Input == 'N')
    {
        printf("One side * itself = perimeter Space . \n");
        printf("Enter the value of the side : ");
        scanf("%f", &x);
        printf("Your perimeter Space : %.2f", x * x);
    }
    else if(input == 2 & Input == 'M')
    {
        printf("Rectangular Area = (length + width) * 2 . \n");
        printf("Enter the length of the rectangle : ");
        scanf("%f",&x);
        printf("Enter the width of the rectangle : ");
        scanf("%f",&y);
        printf("Area of your rectangle : %.2f",(x+y)*2);
    }
    else if(input == 2 & Input == 'N')
    {
        printf("Rectangular perimeter = length * width  . \n");
        printf("Enter the length of the rectangle : ");
        scanf("%f",&x);
        printf("Enter the width of the rectangle : ");
        scanf("%f",&y);
        printf("perimeter of your rectangle : %.2f",y*x);
    }
    else if(input == 3 & Input == 'M')
    {
        printf("Circle area = Pi number (3.14) * radius * radius . \n");
        printf("Enter the Radius of the circle : ");
        scanf("%f",&r);
        printf("Area of circle : %.2f",PI * (r*r));
    }
    else if(input == 3 & Input == 'N')
    {
        printf("Circle perimeter = Pi number (3.14) *( radius + radius) . \n");
        printf("Enter the Radius of the circle : ");
        scanf("%f",&r);
        printf("perimeter of circle : %.2f",PI * (r+r));
    }
        return 0;
}
