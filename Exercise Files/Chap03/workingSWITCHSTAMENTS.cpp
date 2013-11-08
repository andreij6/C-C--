// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>
const int iONE = 1;
const int iTWO = 2;
const int iTHREE = 3;
const int iFOUR = 4;

int main( int argc, char ** argv ) {
//	int foo = 3;
//	switch(foo){
//	case 1:
//		puts ("one");
//		break;
//	case 5:
//			puts ("five");
//			break;
//	case 2:
//			puts ("two");
//			break;
//	case 3:
//			puts ("three");
//			break;
//	case 4:
//			puts ("four");
//			break;
//	}

	int foo = 43;
	switch(foo){
	case iONE:
		puts ("one");
		break;
	case iTWO:
			puts ("five");
			break;
	case iTHREE:
			puts ("two");
			break;
	case iFOUR:
			puts ("three");
			break;
	default:
		puts("default");
		break;
	}

	return 0;
}
