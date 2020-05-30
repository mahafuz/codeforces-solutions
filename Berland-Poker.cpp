#include <iostream>
#include <cmath>

using namespace std;



int main() {
	
	int t;
	
	cin >> t;
	
	for(int i = 0; i < t; i++) {
		int n, m, k;
		
		cin >> n >> m >> k;
		
		int a = n/k;
		
		if( a >= m ) {
			cout << m << endl;
		}
		else {
			int d = a;
			int e = ceil(1.0*(m-a)/(k-1));
			cout << d-e << endl;
		}
	}
	
	return 0;
}
