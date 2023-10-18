#include <string>
#include <vector>
#include <algorithm> //추가

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i=0; i<commands.size(); i++){
        // commands의 변수들 저장 (배열의 index이므로 모두 -1 해서 저장)
        int start = commands[i][0]-1;
        int end = commands[i][1]-1;
        int k = commands[i][2]-1;
        
        // start부터 end까지만 temp 벡터에 저장
        vector<int> temp;
        for(int t=start; t<=end; t++){
            temp.push_back(array[t]);
        }
        
        // temp 백터 정렬
        sort(temp.begin(), temp.end());
        
        // k번째 수 answer에 저장
        answer.push_back(temp[k]);
    }       
    return answer;
}