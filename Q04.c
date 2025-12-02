#include<stdio.h>
enum weekday { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
int main()
{
    int input;
    printf("Enter a day number (0-6): ");
    scanf("%d", &input);
    
    switch(input)
    {
        case 0:
            printf("Today is Monday\n");
            break;
        case 1:
            printf("Today is Tuesday\n");
            break;
        case 2:
            printf("Today is Wednesday\n");
            break;
        case 3:
            printf("Today is Thursday\n");
            break;
        case 4:
            printf("Today is Friday\n");
            break;
        case 5:
            printf("Today is Saturday\n");
            break;
        case 6:
            printf("Today is Sunday\n");
            break;
        default:
            printf("invalid day\n");
    }
    
    return 0;
}