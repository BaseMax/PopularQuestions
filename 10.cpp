#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int a, b, temp1, temp2, max;
	cin >> a;
	cin >> b;
	temp1=a;
	temp2=b;
	while(temp1 != temp2) {
		if(temp1 > temp2) {
			temp1 -= temp2;
		}
		else {
			temp2 -= temp1;
		}
	}
	cout << temp1 << endl;
	if(a > b) {
		max = a;
	}
	else {
		max = b;
	}
	while(true) {
		if(max % a == 0 && max % b == 0) {
			break;
		}
		else {
			++max;
		}
	}
	cout << max << endl;
	return 0;
}
