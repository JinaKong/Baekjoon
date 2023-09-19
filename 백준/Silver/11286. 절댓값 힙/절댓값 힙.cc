#include <iostream>
#include <queue>    //큐
#include <vector>   //벡터

using namespace std;

// 비교 구조체 
struct cmp{
    bool operator()(const int& x1, const int& x2){
        // x1과 x2의 절댓값이 같으면, 작은 수를 앞으로 
        if( abs(x1) == abs(x2) ){
            return x1 > x2;
        }
        // 절댓값이 작은 수를 앞으로
        else{
            return abs(x1) > abs(x2);            
        }
    }
    
};

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);
	
    int N;  //연산 개수
    int x;  //원소
    // 우선순위 큐 (cmp 지정)
    priority_queue<int, vector<int>, cmp> pq ;
    
    //입력
    cin >> N;
    
    //연산 및 출력
    while(N--){
        
        cin >> x;
        // 입력된 x가 0이 아니면 pq에 x 추가
        if(x != 0){
            pq.push(x);
        }
        // 입력된 x가 0이면 pq에서 절댓값이 가장 작은 값 출력 및 제거 
        else{
            // pq가 비어있다면 0 출력
            if(pq.empty()){
                cout << '0' << '\n';
            }
            else{
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }
    return 0;
}
