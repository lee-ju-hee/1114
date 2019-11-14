#include <stdio.h>
int b=0;
void sub()
{
	static int scount=0;
	int acount=0;
	
	printf("scount= %d\n", scount);
	printf("scount= %d\n", acount);
	printf("static global variable=%d\n", b);
	scount++;
	acount++;
	b++;
}

int main()
{
	sub();
	sub();
	sub();
	
	return 0;
}
