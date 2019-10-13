#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	float number;
	int power;
	cin >> number;
	cin >> power;
	float temp = 1;
	if(power != 0) {
		for(int i = 0; i < power; i++) {
			temp *= number;
		}
	}
	cout << temp << endl;
	return 0;
}
