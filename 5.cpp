#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int x, y, z;
	cin >> x;
	cin >> y;
	cin >> z;
	if((x + y > z) && (x + z > y) && (y + z > x)) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	return 0;
}
