#include <string>
#include <vector>
#include <algorithm>    //추가

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    // 두 배열 정렬
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    // 두 배열 비교해서, 다르면 해당 선수 리턴
    if(completion.size() == 0){ 
        return participant[0];      // 참가자가 1명인 경우 바로 return
    }
    
    int i=0;
    for( ; i < participant.size(); i++){
        if(participant[i] != completion[i]){
            return participant[i];  //중간 선수가 미완주한 경우 return
        }
    }
   
    return participant[i];   //마지막 선수가 미완주한 경우 해당 선수 return
}