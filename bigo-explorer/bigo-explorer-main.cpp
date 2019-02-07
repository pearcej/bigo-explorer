/*This program is designed to explore big o notion and algorithms 
by Dr. Jan Pearce of Berea College
Licensed under a Creative Commons Attribution,
Share Alike 3.0 United States License */

#include <iostream>
#include <cmath>

using namespace std;

int looponconstant(int n) {
	/* looponconstant demonstrates O(1) behavior
	pre: n is a positive integer
	pos:{ returns an integer count of the number of iterations*/

	int count = 0;
	for (int i = 0; i < 1; i++) {
		count = count + 1;   ////we are interested in how often this line executes
	return (count);
	}
}

int looponconstant2(int n) {
	/* looponconstant2 also demonstrates O(1) behavior
	pre: n is a positive integer
	post: returns an integer count of the number of iterations */

	int count = 0;
	for (int i = 0; i < 10; i++) {
		count = count + 1;   //we are interested in how often this line executes
	}
	return (count);
}

int loopwn(int n) {
	/* loopwn demonstrates O(n) behavior
	pre:  n is a positive integer
	post:  returns an integer count of the number of iterations */

	int count = 0;
	for (int i = 0; i < n; i++) {
		count = count + 1; //we are interested in how often this line executes
	}
	return (count);
}


int sequential(int n) {
	/* sequential also demonstrates O(n) behavior
	pre: n is a positive integer
	post: returns an integer count of the number of iterations */

	int count = 0;
	for (int i = 0; i < n; i++) {
		count = count + 1;   //we are interested in how often this line executes   
	}
	for (int i = 0; i < n; i++) {
		count = count + 1;   //we are interested in how often this line executes
	}
	return (count);
}

int nestedwconstant(int n) {
	/* nestedwconstant demonstrates O(n) behavior
	pre:  n is a positive integer
	post:  returns an integer count of the number of iterations */

	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			count = count + 1;   //we are interested in how often this line executes
		}
	}
	return (count);
}

int twonested(int n) {
	/* twonested demonstrates O(n^^2) behavior
	pre:  n is a positive integer
	post:  returns an integer count of the number of iterations */

	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			count = count + 1;   //we are interested in how often this line executes
		}
	}
	return (count);
}

int threenested(int n) {
	/* loopwn demonstrates O(n**3) behavior
	pre:  n is a positive integer
	post:  returns an integer count of the number of iterations */

	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				count = count + 1;   //we are interested in how often this line executes
			}
		}
	}
	return (count);
}

int powern(int n) {
	/* powern demonstrates O(2**n)) behavior
	pre:  n is a positive integer
	post:  returns an integer count of the number of iterations */

	int count = 0;
	for (int i = 0; i < pow(2,n); i++) {
		count = count + 1;   //we are interested in how often this line executes
	}
	return (count);
}

int halving(int n) {
	/* twonested demonstrates O(log(int n)) behavior
	pre:  n is a positive integer
	post:  returns an integer count of the number of iterations */

	int count = 0;
	int loopcounter = n;
	while (loopcounter > 1) {
		count = count + 1;   //we are interested in how often this line executes
		loopcounter = loopcounter / 2; // in C++ this is integer division
	}
	return (count);
}

int main() {
	int n;
	cout << "Please enter n: ";
	cin >> n;

	while (n > 0) {
		cout << "\nfor n = " << n << ":" << endl;
		cout << "\tlooponconstant(" << n << ") = " << looponconstant(n) << endl;
		cout << "\tlooponconstant2(" << n << ") = " << looponconstant2(n) << endl;
		cout << "\tloopwn(" << n << ") = " << loopwn(n) << endl;
		cout << "\tsequential(" << n << ") = " << sequential(n) << endl;
		cout << "\tnestedwconstant(" << n << ") = " << nestedwconstant(n) << endl;
		cout << "\ttwonested(" << n << ") = " << twonested(n) << endl;
		cout << "\tthreenested(" << n << ") = " << threenested(n) << endl;
		cout << "\tpowern(" << n << ") = " << powern(n) << endl;
		cout << "\thalving(" << n << ") = " << halving(n) << "\n" << endl;

		cout << "Please enter another n: ";
		cin >> n;
	}
	return 0;
}