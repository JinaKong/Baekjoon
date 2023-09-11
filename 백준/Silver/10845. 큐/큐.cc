#include <iostream>
#include <queue> // 큐 라이브러리

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    	
	queue<int> q;   // 큐 q

	// 입력
	int N;	// 명령의 수
	int x;	//원소
	cin >> N;

	//연산
	string cmd;	//명령
	while (N--) {
		cin >> cmd;

		// 1. push X : 정수 X를 큐에 넣는 연산
		if (cmd == "push") {
			cin >> x;
			q.push(x);
		}

		// 2. pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 
		else if (cmd == "pop") {
			//큐에서에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
			if (q.empty()) {
				cout << "-1" << '\n';
			}
			else {
				// 가장 앞의 정수 출력
				cout << q.front() << '\n';
				// 가장 앞의 정수 삭제
				q.pop();
			}
		}
		else if (cmd == "size") {
			cout << q.size() << '\n';
		}
		else if (cmd == "empty") {
			if (q.empty()) {   // 가장 앞과 뒤가 같으면 empty
				cout << "1" << '\n';
			}
			else {
				cout << "0" << '\n';
			}
		}
		else if (cmd == "front") {
			if (q.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << q.front() << '\n';
			}
		}
		else if (cmd == "back") {
			if (q.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << q.back() << '\n';
			}
		}
	}
	return 0;
}