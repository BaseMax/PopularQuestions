#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int sum=0, num;
	cout << "Enter number: ";
	cin >> num;
	for(;num>0;num/=10) {
		sum=sum*10+num%10;
	}
	cout << sum << endl;
	return 0;
}
