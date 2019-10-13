#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	long int x;
	int count=0;
	cin>>x;
	while(x>=1) {
		count++;
		x/=10;
	}
	cout << count;
	return 0;
}
