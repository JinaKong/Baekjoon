#include <vector>
#include <queue> //추가(bfs)
//#include <pair>

using namespace std;

//1. 방향 배열 dx, dy 설정
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
bool visited[101][101]; // m과 n이 100 이하이므로
//2. 거리 저장하는 2차원 배열 dist 설정
int dist[101][101]; 
    

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    
    // 3. 행, 열 개수
    int n = maps.size();
    int m = maps[0].size();
    
    // 4. 큐 선언
    queue<pair<int, int>> q;
    
    // 5. 초기값 넣기
    ////visited[0][0] = true;
    q.push({0,0}); //pair니까 {,} 형식으로 push
    dist[0][0] = 1; //일단 첫 거리가 1
    
    // 6. q가 비지 않을 때까지
    while(!q.empty()){
        // front로 x, y 설정 후 pop
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        // for문으로 탐색
        for(int i=0; i<4; i++){
            // 1. nx, ny 설정
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            // 2. 예외 처리
            // 맵 경계 설정(0까지 가능, m-1까지 가능)
            if(nx<0 || nx>=n || ny<0 || ny>=m){
                continue;
            }
            // 방문한적 있다면
            if(visited[nx][ny])
                continue;
            // 문제상 벽으로 막혀져 있다면
            if(maps[nx][ny] == 0)
                continue;
        
            // 3. 방문
            visited[nx][ny] = true;
            q.push({nx, ny});
            dist[nx][ny] = dist[x][y] + 1;  // 거리 1 추가
            
        }
    }
    
    
    // 정답
    //answer = dist[m-1][n-1];
    // 도달할 수 없다면 -1 리턴
    //if(answer == 0) return -1;
    //else return answer;
    
    if(dist[n-1][m-1]==0){
        answer = -1;
    }else{
        answer = dist[n-1][m-1];
    }
    
    return answer;
}