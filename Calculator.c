#include<stdio.h>
#include<stdlib.h>
void sum(int x, int y);
void sub(int,int);
int main()
{
	int check;
	do 
	{
		
		printf("Calculator\n");
		printf("Insert numbers and use add sign etc etc in a single like 1+2\n");
		int a,b;
		char ch;
		scanf("%d%c%d",&a,&ch,&b);
		switch(ch)
		{
			case '+':
				sum(a,b);
				break;
			case '-':
				sub(a,b);
			default:
				printf("Wrong Entry\n");
		}
		
		printf("press 0 Quit\nor press any whole number\n");
		scanf("%d",&check);
	}while(check!=0);
		
}

void sum(int x, int y)
{
	int sum=x+y;
	printf("SUM = %d\n",sum);
	return;
}
void sub(int x, int y)
{
	int sum=x-y;
	printf("DIFFERENCE = %d\n",sum);
	return;
}
// end of code finally


