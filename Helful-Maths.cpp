#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	string S;
	
	cin >> S;
	
	int n = S.size();
	
	for(int i = 0; i<n-1; i+= 2) {
		int iMin = i;
		
		for(int j = i+2; j<n; j+=2) {
			if(S[j] < S[iMin]) {
				iMin = j;
			}
		}
		int temp = S[i];
		S[i] = S[iMin];
		S[iMin] = temp;
	}
	
	cout << S << endl;
	
	return 0;
}
