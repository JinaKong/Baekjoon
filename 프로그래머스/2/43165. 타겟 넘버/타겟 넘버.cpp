#include <string>
#include <vector>
#include <queue> // BFS 

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0; // 결과를 저장할 변수
    int cnt = 0; // 현재 처리 중인 숫자의 인덱스

    queue<int> q; // BFS를 위한 큐
    q.push(0); // 초기값을 큐에 넣음

    while (cnt < numbers.size()) { // 숫자 목록을 모두 처리할 때까지 반복
        int size = q.size(); // 현재 큐의 크기를 저장 (현재 레벨의 노드 수)

        for (int i = 0; i < size; i++) { // 현재 레벨의 노드들에 대해 반복
            int x = q.front(); // 큐에서 값을 꺼내옴
            q.pop(); // 꺼낸 값은 큐에서 제거

            q.push(x + numbers[cnt]); // 현재 숫자를 더해서 큐에 추가
            q.push(x - numbers[cnt]); // 현재 숫자를 뺴서 큐에 추가
        }
        
        cnt++; // 다음 숫자로 이동
    }

    while (!q.empty()) { // 큐가 비어있을 때까지 반복
        if (q.front() == target) answer++; // 큐의 첫 번째 값이 목표값과 일치하면 결과를 증가
        q.pop(); // 큐에서 값을 제거
    }

    return answer; // 최종 결과 반환
}
