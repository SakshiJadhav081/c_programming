#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, max, num;

    if (argc < 2)
    {
        printf("Please provide numbers as command line arguments.\n");
        return 1;
    }
    max = atoi(argv[1]);

    for (i = 2; i < argc; i++)
    {
        num = atoi(argv[i]);

        if (num > max)
        {
            max = num;
        }
    }

   
    printf("Maximum number is: %d\n", max);

    return 0;
}