#include <bits/stdc++.h>


using namespace std;

void SelSort(vector<int> &a, int n){
	int min_idx;
//	vector<vector<int>> N;
	
	for(int i = 0; i < n-1; i++) {
		min_idx = i;
		for(int j = i+1; j < n; j++){
			if(a[min_idx] > a[j]) min_idx = j;
		}
		swap(a[i], a[min_idx]);
	//	vector<int> X;
	//	for(int k = 0; k < n; k++) X.push_back(a[k]);
	//	N.push_back(X);
	} 
	
/*	for(int i = N.size() -1; i >= 0; i--) {
		cout << "Buoc " << i+1 << ": ";
		for(int j = 0; j < n; j++) {
			cout << N[i][j] << " ";
		}
		cout << "\n";
	} */
	
}

int main() {
	int n; cin >> n;
	vector<int> a(n);
	
	for(int i =0 ; i < n; i++) {
		cin >> a[i];
	}
	
	SelSort(a, n);
	
		
	return 0;
}
