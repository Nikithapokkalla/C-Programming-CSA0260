#include <stdio.h>

int main(int argc, char **argv)
{
    int n = 5;
    int tab[5] = {10,15,90,200,110};
    int diff = tab[1] - tab[0], maxdiff = diff, i;

    for(i=2; i<n-1; i++)
    {
        if(diff > maxdiff)
            maxdiff = diff;

        diff = tab[i] - tab[i-1];
    }

    printf("%d\n", diff);

    return 0;
}
