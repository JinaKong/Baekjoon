#include <iostream>
#include <queue>    //큐

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);
	
    int N;  //연산 개수
    int x;  //원소
    priority_queue<int> max_heap;   //우선순위 큐 (최대 힙)
    
    //입력
    cin >> N;
    
    //연산 및 출력
    while(N--){
        
        cin >> x;
        // 입력된 x가 0이 아니면 배열에 x 추가
        if(x != 0){
            max_heap.push(x);
        }
        // 입력된 x가 0이면 최대힙에서 가장 큰 값 출력 및 제거
        else{
            // 최대힙이 비어있다면 0 출력
            if(max_heap.empty()){
                cout << '0' << '\n';
            }
            else{
                cout << max_heap.top() << '\n';
                max_heap.pop();
            }
        }
    }
    return 0;
}
