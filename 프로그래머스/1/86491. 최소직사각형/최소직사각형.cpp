//가로, 세로 구분하지 않고 big, small로 정렬
// 모든 명함이 들어가는 가장 작은 지갑의 크기 구하기
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    // big, small로 구분하기
    vector<int> big;
    vector<int> small;
    for(int i=0; i< sizes.size(); i++){
        big.push_back( max(sizes[i][0], sizes[i][1]) );
        small.push_back( min(sizes[i][0], sizes[i][1]) );
    }
    
    
    // big 중에 가장 큰 것과 small 중에 가장 큰 것 구하기
    sort(big.begin(), big.end(), greater<>());
    sort(small.begin(), small.end(), greater<>());
    
    // 최소 명함 크기
    answer = big[0] * small[0];
    
    return answer;
}