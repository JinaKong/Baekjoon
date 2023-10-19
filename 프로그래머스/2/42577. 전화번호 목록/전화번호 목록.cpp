#include <string>
#include <vector>
#include <algorithm> //추가

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    // 전화번호 벡터 정럴 => string이므로 '사전순' 정렬됨!!
    sort(phone_book.begin(), phone_book.end());
    
    // 접두사인 게 있는지 확인
    for(int i=0; i<phone_book.size()-1; i++){
        // str.substr(시작점, 크기) 사용!!
        string subStr = phone_book[i+1].substr(0, phone_book[i].size());
        if(phone_book[i] == subStr){
            return false;
        }
    }
    return true;
}