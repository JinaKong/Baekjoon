#include <string>
#include <vector>

using namespace std;

bool is_visited[50];
int answer = 50;

bool check(string a, string b){
    int cnt = 0;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) cnt ++;
    }
    
    if(cnt == 1) return true;
    else return false;
}

void dfs(string begin, string target, vector<string> words, int step){
    //base condition
    if(step >= answer) return;
    if(begin == target){
        answer = min(answer, step);
        return;
    }
    
    for(int i=0; i<words.size(); i++){
        if(!is_visited[i] && check(begin, words[i])){
            is_visited[i] = true; // 이거 빼먹음
            // 재귀
            dfs(words[i], target, words, step+1);
            is_visited[i] = false;
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    //int answer = 0;
    
    dfs(begin, target, words, 0);
    
    if(answer == 50) return 0;
    else return answer;
}