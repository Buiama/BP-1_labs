#include <iostream>
using namespace std;

int main()
{
	int n;
	double x,s,k;
	cout << "n = "; cin >> n;
	cout << "x = "; cin >> x;
	s = 1;
	k = 1;
	for (int i = 1; i < n; i++) {
		k = k * i;
		double s1;
		s1 = pow(x, i) / k;
		s += s1;
		//cout << "\ns1 = " << s1;
		//cout << "\ns = " << s;
	}
	//cout << "\nk = " << k;
	cout << "\nS = " << s;
}
