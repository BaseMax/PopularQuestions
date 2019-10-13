#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int num, sum=0;
	cin >> num;
	for(int i=1; i<num; i++) {
		if(num%i==0) {
			sum+=i;
		}
	}
	if(sum==num) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	return 0;
}
