#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	cin >> n;
	if(n >= 1) {
		int value;
		cin >> value;
		int sum=value;
		int min=value;
		int max=value;
		for(int i=2; i<=n; i++) {
			cin >> value;
			sum+=value;
			if(value > max) {
				max=value;
			}
			if(value < min) {
				min=value;
			}
		}
		cout << min << endl;
		cout << max << endl;
		cout << sum << endl;
		cout << sum - min << endl;
		cout << sum - max << endl;
	}
	return 0;
}
