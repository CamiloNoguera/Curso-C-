#include <string>
#include <iostream>
#include <math.h>

using std::string;
using std::cout;

int genToken(string key);

int main() {
	cout << "Token of Miguel: " << genToken("Miguel") << "\n";
} 

int genToken(string key) {
	int lenKey = key.length();
	int token = 0;
	
	for(int i = 0; i < lenKey; i++) {
		token += key[i] * pow(10, i);
		token %= 2000000000; 
	} 

	return token;
}
