#include <stdio.h>
int main()
{
	int x=10;
	static int y=x;
	if(x==y)
	{
		printf("e");
	}else if(x>y){
		printf("g");
	}else{
		printf("l");
	}
	return 0;
}
