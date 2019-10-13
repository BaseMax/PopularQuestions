#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int num, result=0;
	cin>>num;
	for(int i=1;num>0;i*=2) {
		result=result+((num%10)*i);
		num/=10;
	}
	cout << result;
	return 0;
}
