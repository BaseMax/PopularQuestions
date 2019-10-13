#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int a, b, c;
	int delta;
	cin>> a >> b >> c;
	delta = (b*b) - (4*a*c);
	if(delta == 0) {
		cout << (-b)/(2*a) << endl;
	}
	else if(delta > 0) {
		cout << ((-b)+sqrt(delta))/(2*a) << endl;
		cout << ((-b)-sqrt(delta))/(2*a) << endl;
	}
	return 0;
}
