#include <stdio.h>
int main()
{  
    int input,remainder,sum=0,temp;
    scanf("%d",&input);
    temp=input;
    while(input!=0)
    {
    	remainder=input%10;
    	sum=sum+(remainder*remainder*remainder);
    	input=input/10;
	}
	(sum==temp)?printf("Armstrong"):printf("Not an Armstrong");
	return 0;
}
