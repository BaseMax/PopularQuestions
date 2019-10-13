#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n) { 
	if((n==0)||(n==1)) {
		return 1;
	}
	else {
		return n*fact(n-1);
	}
}
int main(int argc, char const *argv[]) {
	int n=10;
	int sum=0; // We can use float...
	for(int i=0; i<=n; i++) {
		sum+=( pow(x, i) / factorial(i) );
	}
	cout << sum;
	return 0;
}
