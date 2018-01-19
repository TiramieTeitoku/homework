
#include <iostream>
 
int main()
{
	int A[65536];
	A[0] = 1;
	int n = 0; //licznik 1
	int k = 0; //licznik 0
	for (int i = 1; i < 65536; i++) {
		if (A[i - (k+1)] == 1) {
			n++;
			A[i] = 1;
			for (int j = 1; j <= n; j++) {
				if ((i + j) <= 65535) {
					A[i + j] = 0;
					k = j;
				}
			}
			i += k;
		}
	}
	int unsigned x;
	std::cin >> x;
	std::cout << A[x];
	return 0;
}