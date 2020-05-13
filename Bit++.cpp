#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int n, x = 0;
	string e;
	
	cin >> n;
	
	while(n--) {
		cin >> e;
		if(e == "X++") {
			x++;
		}else if(e == "++X") {
			++x;
		}else if(e == "X--") {
			x--;
		}else if(e == "--X") {
			--x;
		}
	}
	
	cout << x << endl;
	
	
	return 0;
}
