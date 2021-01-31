#include<bits/stdc++.h>

using namespace std;

int main () {
	long N;
	cin >> N;
	
	long ans = 0;
	int A;
	int B;
	
	for (int i=0; i<N; i++) {
		cin >> A;
		ans += A;
	}
	
	for (int i=0; i<N; i++) {
		cin >> B;
		ans += B;
	}
	
	cout << ans * N << "\n";
	
	return 0;
}