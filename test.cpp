#include <bits/stdc++.h>


using namespace std;


int task(vector<int> &a, int n) {
    int c = 1e7;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(a[i] + a[j]) < abs(c)) {
                c = a[i] + a[j];
            }
        }
    }
    return c;
}

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<int> a(n);
		
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		
		
		cout << task(a, n) << "\n";
	}

	return 0;
}

