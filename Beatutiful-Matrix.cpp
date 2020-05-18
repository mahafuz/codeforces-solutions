#include <iostream>

using namespace std;


int main() {
	int i, j, k;
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			cin >> k;
			if(k == 1) {
				cout << abs(3-(i+1))+abs(3-(j+1));
			}
		}
	}
	
	
	
	return 0;
}
