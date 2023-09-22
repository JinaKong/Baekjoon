#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int n;  // 회의 수
    vector< vector<int> > meetings; // 회의 (2차원 벡터)
    int current_time = 0;   // 현재 시간
    int cnt = 0;        // 회의 최대개수 카운트
    
    // 입력
    cin >> n;
    
    int start, end;
    for(int i=0; i<n; i++){
        cin >> start >> end;
        // 0이 종료시간, 1이 시작시간으로 저장
        meetings.push_back( {end, start} );  
    }
    
    // 회의 종료시간 기준 정렬
    sort(meetings.begin(), meetings.end());
    
    // 회의 최대 개수 구하기
    for(int i=0; i<meetings.size(); i++){
        // 회의 시작시간이 현재시간보다 이르면 넘어가기
        if( meetings[i][1] < current_time){
            continue;
        }
        // 그렇지 않으면 cnt ++
        cnt ++;
        current_time = meetings[i][0];  // 현재시간을 종료시간으로 바꾸기
    }
    
    // 출력
    cout << cnt;
    
    return 0;
}
