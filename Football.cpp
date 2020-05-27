#include <iostream>
#include <string>

using namespace std;


int main() {
	
	string n;
	
	cin >> n;
	
	int contigues = 1;
	
	for(size_t i = 1; i < n.length(); ++i) {
		if(n[i] == n[i-1]) {
			contigues += 1;
			
			if(contigues == 7) {
				cout << "YES" << endl;
				return 0;
			}
		}else {
			contigues = 1;
		}
	}
	
	cout << "NO" << endl;
	return 0;
}
