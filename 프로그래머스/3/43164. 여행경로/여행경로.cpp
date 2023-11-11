// 공항 10,000개 이하 -> 항공권 9999개 이하
// 주어진 항공권 모두 사용
// 경로가 없는 경우는 주어지지 X
// 항상 첫 출발은 ICN
// 가능한 경로 2개 이상이면 알파벳 순서 앞서는 경로로
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> answer;
bool visited[100001];
bool is_full = false;


void dfs(string start, vector<vector<string>> tickets, int step){
    int t = tickets.size();
    
    // base condition
    if(step == t){   // <POINT 3> 모든 항공권을 썼는지 확인!!
        is_full = true; //모두 썼으면 true
    }
    
    // start 지점 넣기 (정렬되어 있으니 그냥 넣으면 됨)
    answer.push_back(start);

    for(int i=0; i<t; i++){
        if(tickets[i][0] == start && !visited[i]){
            visited[i] = true;
            dfs(tickets[i][1], tickets, step+1);
            
            if(!is_full){
                // <POINT 4> 백트래킹!!! 
                answer.pop_back();
                visited[i] = false;
            }
        }
    }
    
}

vector<string> solution(vector<vector<string>> tickets) {

    //<POINT 1> 먼저 정렬하기. 그러면 알파벳 순으로 안 될 일이 ㅓ없음
    sort(tickets.begin(), tickets.end());
    
    //<POINT 2> start 지점도 인자로 보내기
    dfs("ICN", tickets, 0);
    
    return answer;
}