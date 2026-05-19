//isthis67.c
//Tests if user input is equal to integer 67.
//Potatps

# include <stdio.h>

int main(void)
{
    int sixseven;

    printf("Is this 67?\nEnter a number: ");
    scanf("%d", &sixseven);

    if (sixseven == 67)
    {
        printf("yayyy! that is 67 c:\n");
    }

    else
    {
        printf("oh no brah...that is not 67 :'c\n");
    }

    return 0;
}
