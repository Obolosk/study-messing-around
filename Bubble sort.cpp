#include <bits/stdc++.h>

using namespace std;

void BubSort(vector<int> &a, int n) {
	for(int i = 0; i < n; i++) {
		bool check = false;
		for(int j = 0; j < n-i-1; j++) {
			if(a[j] > a[j+1]){
				check = true;
				swap(a[j], a[j+1]);
				
			} 
		}
		if(!check) break;
	/*	cout << "Buoc " << i+1 << ": "; 
		for(int k = 0; k < n; k++) {
			cout << a[k] << ' ';
		}
		cout << "\n";*/
	}
}

int main() {
	int n; cin >> n;
	vector<int> a(n);
	
	for(int i =0; i < n; i++) {
		cin >> a[i];
	}
	
	BubSort(a, n);
	
	return 0;
}
