// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

int main( int argc, char ** argv ) {
	for(int i = 1; i <= 5; ++i){
		int x = printf("Hello, World!\n") * 5;
		printf("printf returned %d\n", x);
	}
		return 0;

}
