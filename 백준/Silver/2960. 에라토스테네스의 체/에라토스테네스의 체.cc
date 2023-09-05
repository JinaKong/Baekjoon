#include <iostream>
#include <vector>

using namespace std;
/*
에라토스테네스의 체 활용
*/
int findPrime(int n, int k) {

    vector<bool> is_prime(n + 1, true); //소수인지 판단한 여부를 배열에 저장!
    int count = 0; //지운 개수

    for (int i = 2; i <= n; i++) {  // 0,1은 소수가 될 수 없으니 제외

        //이미 지운 수인지 확인 
        if (!is_prime[i]) { 
            continue;
        }
        for (int j = i; j <= n; j += i) {
            // 이미 지운 수인지 확인
            if (!is_prime[j]) { 
                continue;
            }
            // k번째 지워지는 수이면 리턴
            if ((++count) == k) {
                return j;
            }
            is_prime[j] = false; //현재 수 지우기
        }
    }
    return -1;
}
int main() {

    //입력
    int n, k; 
    cin >> n >> k;

    //연산 및 출력
    cout << findPrime(n, k);

    return 0;
}