#include <stdio.h>
#include <string.h>
#include <math.h> 
int main()
{
    char str[20];
    printf("Enter a String : ");
    gets(str);
    int len = strlen(str);
    int i, num = 0;
 
    for (i = 0; i < len; i++)
    {
        num = num + ((str[len - (i + 1)] - '0') * pow(10, i));
    }
    printf("String  converted  to integer: %d\n", num);
 
    return 0;
}
 
