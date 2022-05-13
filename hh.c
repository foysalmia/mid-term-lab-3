#include<stdio.h>

int main()
{
   int n,d;
    scanf("%d %d",&n,&d);

    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }



    for(int i=0; i<d; i++)
    {

        int j;

         int first = a[0];

        for(j = 0; j < n-1; j++)
        {
            a[j] = a[j+1];
        }

        a[j] = first;
    }


    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
