#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    
    int big, small;
    int max_big = 0, max_small = 0;
    
    for(int i=0; i<sizes.size(); i++){
        // 현재 i번째 sizes의 가로, 세로 중 큰값과 작은값 찾기
        big = max(sizes[i][0], sizes[i][1]);
        small = min(sizes[i][0], sizes[i][1]);
        
        // 큰 값들 중 가장 큰 값, 작은 값들 중 가장 큰 값을 구하기
        max_big = max(max_big, big);
        max_small = max(max_small, small);
    }
    
    // 두 최댓값을 곱하면 됨
    return max_big * max_small;
}