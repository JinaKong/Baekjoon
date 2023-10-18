#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    
    // set 선언
    set<int> s;
    
    // set에 담기 (중복없이, 정렬되어 저장됨)
    for(int i=0; i<nums.size(); i++){
        s.insert(nums[i]);
    }
    
    int max_num = s.size();
    if(max_num > nums.size()/2){
        answer = nums.size()/2;
    }
    else{
        answer = max_num;
    }
    
    return answer;
}