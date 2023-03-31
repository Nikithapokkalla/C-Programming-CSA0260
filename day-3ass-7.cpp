#include <stdio.h>
#include <string.h>
int sumascii(char [], int);
 
int main()
{
    char str1[30];
    int sum;
 
    printf("Enter a string: ");
    scanf("%s", str1);
    sum = sumascii(str1, 0);
    printf("The sum of all ascii values in '%s' is %d.\n", str1, sum);
 
    return 0;
}
 
int sumascii(char str[], int num)
{
    if (num < strlen(str))
    {
        return (str[num] + sumascii(str, num + 1));
    }
 
    return 0;
}
