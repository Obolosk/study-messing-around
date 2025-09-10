#include <bits/stdc++.h>

using namespace std;


bool ok = true;
void next_bit_string(string& x){
	int i = x.length()-1;
		
	while(i >= 0 && x[i] != 'A'){
		x[i] = 'A';
		i--;
	}
	if(i >= 0) x[i] = 'B';
	else ok = false;
	
}


int main() {
	int t; cin >> t;
	while(t--){
		ok = true;
		int n; cin >> n;
		
		string x(n, 'A');
		
		
		while(ok){
			cout << x << ' ';
			next_bit_string(x);
		}

		cout << "\n";
	}
	return 0;
}
