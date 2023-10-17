#include <bits/stdc++.h>

using namespace std;

// 전역변수
int n, m;
int arr[9];
bool isused[9]; // 사용되었는지 여부저장


// 현재 k개를 찾은 상태에서, 총 m개의 수를 찾는 함수
void func(int k) { //인자: k
	// base condition : m개를 모두 택했으면 
  // base condition : 길이가 m이 되었을 때 
    if(k==m){
        // 출력
        for(int i=0; i<m; i++){
            cout << arr[i] << ' ';
        }
    cout << '\n';
    return;
    }
		
    // 1부터 n까지 확인하며 아직 사용되지 않은 수 찾기
    for (int i = 1; i <= n; i++) { 
        // 아직 i가 사용되지 않았으면
        if (!isused[i]) { 
            arr[k] = i; 
            isused[i] = 1; 

            // 재귀 (k+1개를 찾은 상태로 들어가기)
            func(k + 1); 
            isused[i] = 0; // k번째 수가 i일 때를 모두 확인했으니 다시 i를 사용되지 않았다고 표시!!
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

		// 입력
    cin >> n >> m;

		// 연산 및 출력
    func(0);
}