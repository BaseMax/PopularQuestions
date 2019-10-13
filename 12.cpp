#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int n, a, m=0;
	cin >> n;
	a=n;
	while(n>0) {
		m=m*10+n%10;
		n/=10;
	}
	if(m==a) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	return 0;
}
