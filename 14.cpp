#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int c, v;
	cin >> c;
	int max1=0, max2=0, max3=0;
	for(int i=0; i<= c; i++) {
		cin >> v;
		if(v > max1) {
			max2=max1;
			max1=v;
		}
		else if(v > max2) {
			max3=max2;
			max2=v;
		}
		else if(v > max3) {
			max3=v;
		}
	}
	cout << max1 << endl;
	cout << max2 << endl;
	cout << max3 << endl;
	return 0;
}
