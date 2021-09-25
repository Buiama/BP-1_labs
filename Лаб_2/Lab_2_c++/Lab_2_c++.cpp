#include <iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	if (abs(y) >= pow(x, 2) && abs(x) >= pow(y, 2)) cout << "\nYes, this point belongs to this plane\n";
	else cout << "\nNo, this point does not belong to this plane\n";
}
