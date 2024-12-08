#include <stdio.h>
#include <limits.h>

union types{
	short int x;
	unsigned char y;
};


int main(){
union types t;

	t.x = 32765;
	t.y = 1;
	printf("%d\n", t.x);
	printf("%d\n", t.y);
	t.y = 2;
	printf("%d\n", t.x);
	printf("%d", t.y);
}
