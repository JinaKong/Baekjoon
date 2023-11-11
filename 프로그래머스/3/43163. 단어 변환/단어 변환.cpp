#include <string>
#include <vector>
#include <queue> //추가

using namespace std;

// 방문여부 배열
bool visited[50];
// 변환 거리 저장하는 배열 -> X 이게 아니라 그냥 큐에 pair로 ㅎ같이 저장! (아마 순서가 바뀔 수 있어서 인듯)
//int dist[50];


int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    
    int len = begin.length();
    
    //큐 선언 <주의> pair로 선언해서, int에 거리 저장하기!!!
    queue<pair<string, int>> q;
    // 초기값
    q.push({begin, 1}); // 거리 1로 설정
    
    //탐색
    while(!q.empty()){
        // q에서 꺼내기
        string x = q.front().first;
        int dist = q.front().second;
        q.pop();
        
        for(int i=0; i<words.size(); i++){
            // 이미 방문했다면 넘어가기
            if(visited[i] == true)
                continue;
            
            
            // 에러 처리
            int cnt = 0;
            for(int j=0; j<len; j++){
                if(x[j] != words[i][j]) //[주의] words[i]의 [j]임!!
                    cnt++;
            }
            // 한 글자만 다르면
            if(cnt == 1){
                // 정답 출력 <주의> x가 아니라 words[i]를 비교해야 돼~
                if(words[i] == target){
                    return dist;
                }

                // 방문
                visited[i] = true;
                q.push({words[i], dist + 1});// <주의> 노드마다 dist를 저장해야지, 그냥 answer +1 를 하면 안됨 
                // <주의> 다시 begin을 words[i]로 설정! (x가 아님)    
                }
            
        }
    }
    
    return 0;
}