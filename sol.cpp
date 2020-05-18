#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[] = {1,2,3,3,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	int num;
	cin >> num;
	auto x = lower_bound(a, a+n, num);
	auto b = upper_bound(a, a+n, num);
	cout << b-x << "\n";
	return 0;
}
