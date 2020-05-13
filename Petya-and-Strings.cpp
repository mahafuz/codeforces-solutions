#include <iostream>

using namespace std;

int main() {
	
	string x, y;
	
	getline(cin, x);
	getline(cin, y);
	
	int len = x.length();
	
	for(int i=0; i<len; i++) {
		if(x[i]<92) {
			x[i] += 32;
		}
		if(y[i]<92) {
			y[i] += 32;
		}
	}
	
	if(x < y) {
		cout << -1;
	}else if(y < x) {
		cout << 1;
	}else if(x == y) {
		cout << 0;
	}
	
	
	return 0;
}
