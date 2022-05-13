#include<stdio.h>
int main()
{
    int n,tmp;
    scanf("%d\n",&n);
    char a[n+1];
    fgets(a,n+1,stdin);

    for(int i=0; i<n; i++)
    {
        if(a[i]>=97)
        {
            a[i] -= 32;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[j] <a[i])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }


    int count = 0;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]!=a[i+1])
        {
            count++;
        }
    }

    if(count==25)
        printf("YES");
    else
        printf("NO");



    return 0;
}
