//============================================================================
// Name        : test1.cpp
// Author      : Mihai
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream f("test1.in");
	ofstream g("test1.out");

	string s;
	getline(f, s);

	f >> s;

	int i = 0;
	i++;
	cout << s << i << endl; // prints the content of the input file
	return 0;
}
