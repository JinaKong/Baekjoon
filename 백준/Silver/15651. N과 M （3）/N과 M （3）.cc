#include <bits/stdc++.h>

using namespace std;

int n,m;
int arr[9];
int is_used[9];

// 현재 k개를 선택한 상황에서 총 m개 선택하기
void func(int k){
    // base condition
    if(k == m){
        //출력
        for(int i=0; i<m; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    
    // 1 부터  n꺄지 확인 
    for(int i=1; i<=n; i++){
        //if(is_used[i] == 0){  // 중복 가능이므로 이것만 제거
            arr[k] = i;
            is_used[i] = 1;
            //재귀
            func(k+1);
            is_used[i] = 0;
        //}
    }
}


int main(){
    //입력
    cin >> n >> m;
    
    //출력
    func(0);
    
}