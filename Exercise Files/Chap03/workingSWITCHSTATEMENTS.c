// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>
#define	ONE (1)
#define	TWO (2)
#define	THREE (3)
#define	FOUR (4)

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

	int foo = 3;
	switch(foo){
	case ONE:
		puts ("one");
		break;
	case TWO:
			puts ("five");
			break;
	case THREE:
			puts ("two");
			break;
	case FOUR:
			puts ("three");
			break;
	}

	return 0;
}
