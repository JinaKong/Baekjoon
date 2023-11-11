#include <string>
#include <vector>

using namespace std;

bool visited[200];

void dfs(int start, int n, vector<vector<int>> computers){
    // 방문 표시
    visited[start] = true;
    
    // start 컴퓨터와 연결된 것 탐색
    for(int i=0; i<n; i++){
        // 연결되어 있고, 방문하지 않았다면
        if(computers[start][i]==1 && visited[i]==0){
            visited[i] = true;
            //재귀
            dfs(i, n, computers);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    //<POINT> 아직 방문하지 않은 컴퓨터에서 탐색 시작!
    for(int i=0; i<n; i++){
        if(visited[i] == 0){
            // 재귀
            dfs(i, n, computers);
            // 네트워크 1개 추가
            answer ++;  
        }
    }

    return answer;
}