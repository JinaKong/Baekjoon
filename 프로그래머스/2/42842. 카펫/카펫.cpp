// 가로 >= 세로
// 테두리 1줄은 갈색
// 즉, 가로-2와 세로-2는 노란색이어야 한다!
// 즉, (가로-2)*높이(-2) = 노란 칸의 개수 여야 한다!
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int sum = brown + yellow;
    for(int h=3; ; h++){
        if(sum%h == 0){
            int w = sum / h;
            
            //
            if((h-2)*(w-2) == yellow){
                answer.push_back(w);
                answer.push_back(h);
                return answer;
            }
        }
    }
    
    return answer;
}