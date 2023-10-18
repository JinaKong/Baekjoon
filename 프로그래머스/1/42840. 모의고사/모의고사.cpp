#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    // 수포자들이 정답을 찍는 패턴
    vector<vector<int>> pattern = {{1,2,3,4,5}, {2, 1, 2, 3, 2, 4, 2, 5}, {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}};
    
    // 각 수포자의 정답수를 저장
    vector<int> cnt(3, 0);  // 3명 모두 0으로 초기화
    for(int i = 0; i < answers.size(); i++) {
    
        for (int j = 0; j < 3; j++) {
            int k = i % pattern[j].size();  // 패턴이 반복되므로 mod 활용
            if (answers[i] == pattern[j][k]) {
                cnt[j]++;   
            }
        }
    }

    // 가장 cnt가 높은 수포자 찾기
    int maxCount = max(cnt[0], cnt[1]);
    maxCount = max(maxCount, cnt[2]);

    // answer 벡터에 저장해서 return (여러명이면 오름차순)
    for (int i = 0; i < 3; i++) {
        if (cnt[i] == maxCount) {
            answer.push_back(i + 1); // 사람 번호는 1부터 시작
        }
    }

    return answer;
}
