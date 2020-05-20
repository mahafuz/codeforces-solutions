#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	
	int n, num;
	
	vector<int> T;
	
	cin >> n;
	
	while(n--) {
		cin >> num;
		T.push_back(num);
	}
	
	cout << "===========" << endl;
	
	int first = 0;
	int second = 0;
	
	
	
	for(int x: T) {
		if(x > first) {
			second = first;
			first = x;
		}else if( x > second && x != first) {
			second = x;
		}
	}
	
	cout << first << " " << second << endl;
	
	return 0;
}
