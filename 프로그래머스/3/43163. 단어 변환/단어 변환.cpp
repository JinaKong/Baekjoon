#include <string>
#include <vector>
#include <algorithm> //추가

using namespace std;

bool visited[50];
int answer = 50;

// check 함수
bool check(string a, string b){
    int cnt = 0;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            cnt ++;
        }
    }
    
    if(cnt == 1){
        return true;
    }
    return false;
}

// dfs 함수
void dfs(string begin, string target, vector<string> words, int step){
    // base condition : '최소' answer을 찾는 것이므로, 현재 진행한 step이 answer보다 크면 넘김 !!
    if(answer <= step){
        return;
    }
    // base condition : target을 만났다면 리턴
    if(begin == target){
        answer = min(answer, step);
        
        return;
    }
    
    // 모든 words를 탐색
    for(int i=0; i<words.size(); i++){
        // 문자 1개만 다르고, 방문하지 않은 단어이면 탐색
        if(check(begin, words[i]) && !visited[i]){ // // [주의] begin과 words[i]를 check하는 것!!! (target이 아님)
            visited[i] = true;
            // [주의] 얘는 words[i]에서 시작해서 target으로 !!!
            dfs(words[i], target, words, step+1); // 단계가 하나 추가되었으니 step+1
            visited[i] = false;
        }
    }
    
    return;
}

int solution(string begin, string target, vector<string> words) {
    
    dfs(begin, target, words, 0);
    
    // target 문자열을 만나지 못한 겨웅
    if(answer == 50){
        return 0;
    }
    // target 문자열을 만났다면 answer 리턴
    return answer;
}