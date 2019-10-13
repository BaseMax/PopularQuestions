#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	// int64+ is better for long long and big number!
	int a=1, b=1, c, n=100;
	// cin >> n;
	cout << a << ',' << b;
	for(int i=3;i<=n;i++) {
		cout<<',';
		c=a+b;
		cout<<c;
		a=b;
		b=c;
	}
	return 0;
}
