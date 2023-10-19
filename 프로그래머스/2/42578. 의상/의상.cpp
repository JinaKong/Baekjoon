#include <string>
#include <vector>
#include <map> //추가
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
    
    // map에 종류 - 의상의 수 저장
    map<string, int> type_num;
    
    for(int i=0; i<clothes.size(); i++){
        type_num[clothes[i][1]] += 1;
    }
    
    // 중복없는 의상 조합의 수 카운트
    // 한 종류만 입을 때
    int cnt = clothes.size();   
    // 조합할 때
    //int temp = 0;
    //if(type_num.size() > 1){
        int temp = 1;
        for (const auto& [key, value] : type_num){
            temp *= (value + 1); //이 종류를 입지 않는 경우도 포함하기위해 +1
            cout << '[' << key << "] = " << value << "; ";
        }
    //}

    // 최종 리턴
    //return cnt += temp;
    return temp -1; // 모두 안 입는 경우 제외하기 위해 -1
}