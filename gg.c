#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i,n,k,t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		gets(b);
		n=strlen(b);
		a[0]=b[0];
		for(i=1,k=1;i<n-1;i++)
		{
			if(b[i]!=b[i+1])
				a[k++]=b[i];
			else if(b[i]==b[i+1])
			{
				a[k++]=b[i];
				i++;
			}
		}
		a[k++]=b[n-1];
		a[k]='\0';
		puts(a);
	}
}
