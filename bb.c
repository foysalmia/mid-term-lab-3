#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n],max = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>=max){
            max = a[i];
        }
    }


    int mintotal = 0;

    for(int i =0;i<n;i++){
        mintotal += max-a[i];
    }

    printf("%d",mintotal);
    return 0;
}
