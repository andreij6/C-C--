// working.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	string response;
	cout << "Type a string: " << flush;
	//cin >> response;		this gets the first word
	getline(cin, response);
	cout << "The string is " << response << endl;
	return 0;
}
