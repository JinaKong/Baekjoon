#include <string>
#include <vector>

using namespace std;

int answer = 0;
//int sum = 0; //sum도 전역변수로 설정할 필요 XX

//step은 물론이고 sum도 인자로 받아야 함
void dfs(vector<int> numbers, int target, int step, int sum){
    //base condition
    if(step == numbers.size()){
        if(sum == target) answer ++;
        return;
    }
    
    dfs(numbers, target, step+1, sum+numbers[step]);
    dfs(numbers, target, step+1, sum-numbers[step]);
    
}


int solution(vector<int> numbers, int target) {
    
    dfs(numbers, target, 0, 0);
    
    return answer;
}