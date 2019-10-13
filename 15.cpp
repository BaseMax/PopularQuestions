#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int c, v;
	cin >> c;
	int max1=-1, max2=-1, max3=-1;
	for(int i=0; i<= c; i++) {
		cin >> v;
		if(v >= 17 && v <= 20){
			max1=v;
		}
		else if(v >= 10 && v < 17){
			max2=v;
		}
		else if(v >= 0 && v < 10){
			max3=v;
		}
	}
	cout << max1 << endl;
	cout << max2 << endl;
	cout << max3 << endl;
	return 0;
}
