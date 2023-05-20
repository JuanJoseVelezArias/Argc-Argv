#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
    }
    
    int N1 = atoi(argv[1]);
    int N2 = atoi(argv[2]);

    printf("%d\n", N1 * N2);
    return 0;
}