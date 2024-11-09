#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum = 0;
    int i = 1;

    for (i = 1; i < argc; i++)
      {
        char *arg = argv[i];
        int j = 0;
        
        
        while (arg[j] != '\0')
	  {
            if (arg[j] < '0' || arg[j] > '9')
	      {
                printf("Error\n");
                return 1;
            }
            j++;
        }

        
        sum += atoi(arg);
    }

    printf("%d\n", sum);
    return 0;
}


