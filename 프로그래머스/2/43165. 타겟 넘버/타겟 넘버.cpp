#include <string>
#include <vector>
#include <iostream>

using namespace std;

//bool is_visited[20]; 
int answer = 0;

// dfs 함수
void dfs(vector<int> numbers, int target, int sum, int step){  
    //base condition
    if(step == numbers.size()){
        if(sum == target) answer ++;
        return;
    }
    
    //for(int i=step; i<numbers.size(); i++){
            //if(!is_visited[i]){
                //is_visited[i] = true;
                
                // dfs 두번 호출
                dfs(numbers, target, sum + numbers[step], step+1); //sum에서 numbers[i] 빼서 호출
                dfs(numbers, target, sum - numbers[step], step+1); //sum에서 numbers[i] 더해서 호출
                //is_visited[i] = false;
           // }
    //}
    //return;
}

int solution(vector<int> numbers, int target) {
    
    dfs(numbers, target, 0, 0);
    return answer;
}