#include <bits/stdc++.h>

using namespace std;

void Insort(vector<int> &a, int n){
	int temp, j;
	for(int i = 1; i < n; i++) {
		temp = a[i];
		j = i-1;
		while(j >=0 && temp < a[j]) {
			a[j+1] = a[j];
			
			j--;
		}
		a[j+1]= temp;
		
		
		
		cout << "Buoc " << i <<": ";
		for(int k = 0; k <= i; k++) {
			cout << a[k] << ' ';
		}
		cout << "\n";
	}
}

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i <n; i++) {
		cin >> a[i];
	}
	
	Insort(a, n);
	
	return 0;
}
