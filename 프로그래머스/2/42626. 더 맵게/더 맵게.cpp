#include <string>
#include <vector>
#include <queue> //추가

using namespace std;

int solution(vector<int> scoville, int K) {
   
    // '최소' 힙 사용 (우선순위 큐)
    priority_queue <int, vector<int>, greater<int>> minQ;
    for(int i=0; i<scoville.size(); i++){
        minQ.push(scoville[i]);
    }
    
    int cnt = 0;
    while(minQ.size() >= 2 && minQ.top() < K){   //두번 꺼내야하므로 그냥 empty인지만 확인하면 안됨
        // 스코빌지수가 가장 낮은 두 음식 minQ에서 꺼내기
        int first = minQ.top();
        minQ.pop();
        int second = minQ.top();
        minQ.pop();
        
        // 두 음식 섞기
        int mixture = first + second*2;
        // 섞은 스코빌지수를 minQ에 넣기
        minQ.push(mixture);
        cnt ++; // 반복하는 횟수 카운트
    }
    
    // [주의] 반복문을 다 돌렸는데도 가장 작은 게 K 미만이면 -1리턴
    if(minQ.top() < K){
        return -1;
    }

    return cnt;
}