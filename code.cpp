#include <bits/stdc++.h>

using namespace std;

class PhanSo {
	private:
		long long tu, mau;
	public:
		PhanSo(long long tu, long long mau) {
			this -> tu = tu;
			this -> mau = mau;
		}
		
		friend istream &operator>>(istream &is, PhanSo &a) {
			is >> a.tu >> a.mau;
			return is;
		}
		
		void Rutgon() {
			long long gcd = __gcd(tu, mau);
			tu /= gcd;
			mau /= gcd;
		}
		
		friend PhanSo operator+(const PhanSo &a, const PhanSo &b) {
			PhanSo c(0,1);
			c.tu = a.tu * b.mau + a.mau * b.tu;
			c.mau = a.mau * b.mau;
			c.Rutgon();
			return c;
		}
		
		friend PhanSo operator-(const PhanSo &a, const PhanSo &b) {
			PhanSo c(0,1);
			c.tu = a.tu * b.mau - a.mau * b.tu;
			c.mau = a.mau * b.mau;
			c.Rutgon();
			return c;
		}
		
		friend PhanSo operator*(const PhanSo &a, const PhanSo &b) {
			PhanSo c(0,1);
			c.tu = a.tu * b.tu;
			c.mau = a.mau * b.mau;
			c.Rutgon();
			return c;
		}
		
		friend PhanSo operator/(const PhanSo &a, const PhanSo &b) {
			PhanSo c(0,1);
			c.tu = a.tu * b.mau;
			c.mau = a.mau * b.tu;
			c.Rutgon();
			return c;
		}
		
		friend ostream& operator<<(ostream &os, PhanSo a) {
			os << a.tu << "/" << a.mau;
			return os;
		}
		
};

int main() {
	int t; cin >> t;
	while(t--) {
		PhanSo a(0, 1), b(0,1);
		cin >> a >> b; cin.ignore();
		cout << "Calculation? + - * /" << endl;
		string t;
		cin >> t;
		if(t == "+") cout << a+b;
		else if(t == "-") cout << a-b;
		else if(t == "*") cout << a*b;
		else if(t == "/")cout << a/b;
		cout << endl;
	}
	return 0;
}
