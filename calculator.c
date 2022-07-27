#include <stdio.h>
#include <math.h>
int main()
{
    int key;

    while(1)
    {
        printf("\nEnter the key for operation you want to perform- \n");
        printf("1 for addition\n");
        printf("2 for subtraction\n");
        printf("3 for multiplication\n");
        printf("4 for division\n");
        printf("5 for exponent\n");
        printf("6 for logarithm\n");
        printf("0 for quitting");

        printf("\nEnter your command: ");
        scanf("%d", &key);

        if(key == 1)
        {
            float x, y;
            printf("Enter the two numbers: ");
            scanf("%f", &x);
            scanf("%f", &y);
            printf("The sum is %f\n", x+y);
        }
        else if(key == 2)
        {
            float x, y;
            printf("Enter the two numbers (mind the order): ");
            scanf("%f", &x);
            scanf("%f", &y);
            printf("The difference is %f\n", x-y);
        }

        else if(key == 3)
        {
            float x, y;
            printf("Enter the two numbers: ");
            scanf("%f", &x);
            scanf("%f", &y);
            printf("The product is %f\n", x*y);
        }
        else if(key == 4)
        {
            float x, y;
            printf("Enter the two numbers (mind the order): ");
            scanf("%f", &x);
            scanf("%f", &y);
            printf("The product is %f\n", x/y);
        }
    }
    
}