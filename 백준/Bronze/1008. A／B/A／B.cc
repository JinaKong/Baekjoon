#include <stdio.h>

using namespace std;

int main() {
	double A, B;	// 정수가 아닌 double형으로 선언

	scanf("%lf %lf",&A,&B);	// double형 입력은 %lf

	printf("%.9lf", A/B);	// 소수점 9자리로 출력

	return 0;
}