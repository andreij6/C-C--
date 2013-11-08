// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

int main( int argc, char ** argv ) {
	int x  = 5;
//	while(x>0) {
//		printf("x is %d\n", x);
//		--x;
//	}

//	do {
//		printf("x is %d\n", x);
//		--x;
//	} while(x);

	while(--x){
		printf("x is %d\n", x);
	}
	return 0;
}
