#include <stdio.h>

int main() 
{
    int a = 100;
    int maximo = 0;
    while (a < 1000) 
    {
        int j = 100;
        while (j < 1000) 
        {
            int p = a * j;
            int r = 0;
            int temp = p;
            while (temp > 0) 
            {
                r = r * 10 + temp % 10;
                temp /= 10;
            }
            if (p == r && p > maximo) 
            {
                maximo = p;
            }
            j++;
        }
        a++;
    }
    printf("%d\n", maximo);
    return 0;
}