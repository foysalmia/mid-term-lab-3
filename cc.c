#include<stdio.h>

int main()
{
    int n;
    scanf("%d\n",&n);
    char str[n+1];
    fgets(str,n+1,stdin);
    int check = 0;
    for(int i=0,j=1;i<n;i++,j++){
        if(str[i]==str[j]){
            check++;
        }
    }

    printf("%d",check);
    return 0;
}
