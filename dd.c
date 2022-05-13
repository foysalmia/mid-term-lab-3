#include<stdio.h>

int main()
{
    long long n = 1001;
    char str[n];
    scanf("%s",str);

    if(str[0]>=97)
    {
        str[0] = str[0] - 32;
    }

    printf("%s",str);
    return 0;
}
