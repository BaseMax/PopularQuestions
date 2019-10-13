#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int num, result=0, d=1, temp;
	cin >> num;
	temp=num;
	while(temp%2==0) {
		d*=10;
		temp/=10;
	}
	while(num>=2) {
		result=result*10+num%2;
		num/=2;
	}
	result=result*10+num;
	cout << result*d << endl;
	return 0;
}
