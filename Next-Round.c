#include <stdio.h>
 
int main()
{
	int n, k, i, num = 0;
	
	scanf("%d %d", &n, &k);
	
	int p[n];
	
	for(i = 0; i<n; i++){
		scanf("%d", &p[i]);
	}
	
	for(i = 0; i<n; i++) {
		if(p[i] >= p[k-1] && p[i] > 0) {
			num++;
		}
	}
	
	printf("%d\n", num);
	
	
	return 0;
}