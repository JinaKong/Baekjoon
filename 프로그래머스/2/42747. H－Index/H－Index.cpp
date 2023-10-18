#include <string>
#include <vector>
#include <algorithm> //추가
#include <iostream>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;

    // 인용횟수를 내림차순 정렬: greater<int>() 활용
    sort(citations.begin(), citations.end(), greater<int>());
    
    // h번 이상 인용이 h편 이상 && 나머지는 h번 이하 인용 => h의 최댓값
    int size = citations.size();
    int h = size;
    for(int h=size; h>0; h--){
        
        int cnt_more = 0;
        int cnt_less = 0;
        for(int i=0; i<size; i++){
            // h번 이상 인용된 논문을 cnt_more에 카운트
            if(citations[i] >= h){
                cnt_more ++;
            }    
            // h번 이하 인용된 논문을 cnt_less에 카운트
            else{
                if(citations[i] <= h){
                    cnt_less ++;
                }
            }
            
            // h번 이상 인용이 h편 이상 && h번 이하 인용된 논문이 나머지 논문 개수인지 확인
              if(cnt_more >= h){ 
                  cout << cnt_more << " "  <<  cnt_less << '\n';
                  return h; // 맞으면 해당 h가 답임 (큰 수부터 돌리므로 최댓값)
            }
        }
    }

    // 이전에 리턴되지 않았다면 h=0인 것
    return 0;
}