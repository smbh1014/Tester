#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 1001

using namespace std;

vector<int> P;

int summation(int N) {
	int sum = 0;
	for (int i = P.size(); i > 0; i--) {
		for (int k = 0; k < i; k++)
			sum += P[k];
	}
	return sum;
}

int main() {

	int N, p;

	cin >> N;
	for (int n = 1; n <= N; n++) {
		cin >> p;
		P.push_back(p);
	}
	sort(P.begin(), P.end());

	cout << summation(N);

	return 0;

}