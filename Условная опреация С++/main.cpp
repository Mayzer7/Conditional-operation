/* Условная опреация */
#include <iostream> 
using namespace std;
int main()
{
	int x, y, max;
	cin >> x >> y;
	(x > y) ? cout << x : cout << y << endl;
	max = (x > y) ? x : y;
	cout << max <<  endl;
	return 0;
}