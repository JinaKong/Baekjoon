#include <iostream>
#include <vector>

using namespace std;


// k원을 만드는 데 필요한 동전 개수의 최솟값 구하는 메소드
int getMinCoinNum(int k, vector<int> coins){
    
    int cnt = 0;
    int totalCnt = 0;
    
    // 가치가 큰 동전부터 확인하기 위해 반복문 역순
    for(int i = coins.size()-1; i >= 0; i--){
        if(k >= coins[i]){
            
            cnt = k / coins[i]; // 동전 개수
            k -= coins[i] * cnt;
            
            totalCnt += cnt;    // 총 동전 개수
        }
    }
    
    return totalCnt;
}

int main()
{
    int n;  // 동전 종류 수 (각 동전의 개수는 매우 많음)
    int k;  // 만드려는 가치
    vector<int> coins;  // 주어지는 동전 (각 동전은 배수!!)
    
    // 입력
    cin >> n >> k;
    
    int input;
    for(int i=0; i<n; i++){ 
        cin >> input;
        coins.push_back(input); // 동전의 가치 (오름차순으로 주어짐)
    }
    
    
    // 연산 및 출력
    cout << getMinCoinNum(k, coins);
    
    return 0;
}
