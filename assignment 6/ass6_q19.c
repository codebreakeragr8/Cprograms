#include<stdio.h>
int main()
{
	for(int i=6;i>0;i--)
	{
		for(int j=1;j<7;j++)
		{
			if(j<i)
				printf(" ");
			else
				printf("%c",(64+j));
		}
		printf("\n");
	}
return 0;
}