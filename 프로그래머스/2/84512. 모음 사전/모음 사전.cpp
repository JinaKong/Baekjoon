#include <string>
#include <vector>

using namespace std;

int answer = 0;
int cnt = 0;

void dfs(string target, string temp){
    char c[5] = {'A', 'E', 'I', 'O', 'U'};
    
    //base condition
    if(temp == target){
        answer = cnt;
        return;
    }
    
    // 탐색
    for(int i=0; i<5; i++){
        if(temp.length() < 5){
            cnt ++;
            // 재귀
            dfs(target, temp + c[i]);
        }
    }
}

int solution(string word) {
    //int answer = 0;
    
    dfs(word, "");  //<POINT> ""를 보내야 한다
    
    return answer;
}