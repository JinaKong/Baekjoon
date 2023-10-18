#include <vector>
#include <iostream>
#include <queue> // 추가

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    // 큐 사용!
    queue<int> q;
    
    // 큐에 arr의 숫자들 넣기
    for(int i=0; i<arr.size(); i++){
        // 가장 '뒤'가 같은지 확인 (연속한 중복만 안 되므로)
        if(!q.empty() && q.back() == arr[i]){
            continue;
        }
        q.push(arr[i]); // 가장 '뒤'에 삽입
    }
    
    // 출력
    while(!q.empty()){
        answer.push_back(q.front());
        q.pop();    // 가장 '앞' 삭제
    }
    
    return answer;
}