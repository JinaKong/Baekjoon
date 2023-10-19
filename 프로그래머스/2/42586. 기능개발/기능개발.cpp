#include <string>
#include <vector>
#include <queue> //추가
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    int size = progresses.size();
    int cnt = 0;
    
    // 'queue' 사용
    queue<int> q;
    
    // [주의] 각 기능들이 개발되는 데 필요한 시간 계산
    vector<int> days;
    for(int i=0; i< size; i++){
        int cnt = 0;
        while(progresses[i] < 100){
            progresses[i] += speeds[i];
            cnt ++;
        }
        days.push_back(cnt);
    }
    
    // 같이 배포되는 개수 ㅁ구하기
    q.push(days[0]); // 처음 것을 넣고 시작
    for(int i=1; i<size; i++ ){ //1부터 시작
        if(days[i] <= q.front()){
            q.push(days[i]);
        }
        // 더이상 같이 배포할 게 없으면, q의 크기를 리턴
        else{
            answer.push_back(q.size());
            while(!q.empty()){
                q.pop();
            }
            // 다음 push
            q.push(days[i]);   
        }
    }
    
    if(!q.empty()){
        answer.push_back(q.size());
    }

    
    return answer;
}