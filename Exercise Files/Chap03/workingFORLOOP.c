// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

int main( int argc, char ** argv ) {
	//char s[] = {'s','t','r','i','n','g',0};
	char s[] = "string";

	printf("string is: %s\n", s);

	//for(int i=0; s[i] !=0; ++i)		same result
	for(char * cp = s; *cp; ++cp){
		printf ("char is %c\n", *cp);
	}
	return 0;
}
