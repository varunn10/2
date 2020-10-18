#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x,j,l;
	printf("ENTER SIZE OF ARRAY : ");
	scanf("%d",&l);
	char a[l],a_last;
	printf("ENTER A STRING : ");
	scanf("%s",a);
	printf("ENTER ROTATION FACTOR : ");
	scanf("%d",&x);
	for(j=0;j<x;j++)
	{
		a_last = a[l-1];
		for(i=l-1;i>=0;i--)
		{
			if(i>0)
			{
				a[i]=a[i-1];
			}
			else
			{
				a[i] = a_last;
			}
		}
	}
	printf("%s",a);
}
