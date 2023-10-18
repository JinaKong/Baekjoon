#include <string>
#include <vector>
#include <queue> //추가
#include <cmath>
#include <iostream>

using namespace std;

// 비교 구조체
struct cmp{
    bool operator()(const string &x1, const string &x2){
        
        // string을 '+'로 연결한 다음 바로 비교하면 아주 편함..!!!
        return x1+x2 < x2+x1;
    }
};
    

string solution(vector<int> numbers) {
    string answer = "";
    
    // 각 numbers를 우선순위 큐에 넣기 
    priority_queue<string, vector<string>, cmp> pq;   // 처음부터 숫자를 string으로 넣기!!! -> cmp에서 비교하기 쉽도록
    for(int i=0; i<numbers.size(); i++){
        string s = to_string(numbers[i]);
        pq.push(s); 
    }
    
    // pq의 정렬된 원소들을 answer에 넣기
    while(!pq.empty()){
        answer.append(pq.top());   //문자열이므로 .append(x) 사용
        pq.pop();
    }
    
    //[예외처리] 정렬된 answer가 0으로 시작하는 경우, 000이 반환되지 않도록 "0" 리턴 처리
    if(answer[0] == '0'){
        return "0";
    }
    
    return answer;
}