#include <stdio.h>

int main()
{
    int count;
    int i = 1;
    
    while (count < 5) {
        if (i%3==0) 
        {
            printf("%d\n", i);
            count++;
        }
        i++;
    }
    return 0;
}