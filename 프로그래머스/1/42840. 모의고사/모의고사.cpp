#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> rule = {{1, 2, 3, 4, 5}, {2, 1, 2, 3, 2, 4, 2, 5}, {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    // 페어로 선언
    vector<pair<int, int>> score = {{0,1}, {0,2}, {0,3}};

    // 맞춘 개수 페어에 저장
    for(int i=0; i<3; i++){                                
        for(int j=0; j<answers.size(); j++){
            int num = j % rule[i].size();
            //cout << num << ' ';
            //cout << rule[i][num] << ' ';
            if(answers[j] == rule[i][num])
                score[i].first++;
        }
        cout << score[i].first <<' ';
        //cout << endl;
    }
        
    // 최댓값 찾기
    int max_score = max(score[0].first, score[1].first);
    max_score = max(max_score, score[2].first);
    //cout << max_score;
        
    // 정답 출력
    for(int i=0; i<3; i++){
        if(score[i].first == max_score)
            answer.push_back(i+1);
    }
    
    return answer;
}