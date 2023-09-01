#include <iostream>

using namespace std;
typedef long long ll;

//while문을 사용해서 최대공약수 gcd 구하기
int getGcdByIter(int a, int b) {
	while (b != 0) {
		// a > b 로 가정
		a = a % b;
		swap(a, b);	// a % b < b 이므로 a > b의 가정을 위반하므로 swap
	}

	return a;
}

// 재귀를 사용해서 최대공약수 gcd 구하기
int getGcdByRecur(int a, int b) {
	if (b == 0) {
		return a;
	}

	return getGcdByRecur(b, a % b);
}

int main() {
	//입력
	int a, b;
	cin >> a >> b;

	//연산
	int gcd = getGcdByRecur(max(a, b), min(a, b));	// 최대공약수
	int lcm = a * b / gcd;			// 최소공배수

	// 출력
	cout << gcd << "\n" << lcm;

	return 0;
}