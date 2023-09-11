#include <iostream>
#include <deque> // 덱 라이브러리

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    	
	deque<int> dq;   // 덱 dq

	// 입력
	int N;	// 명령의 수
	int x;	//원소
	cin >> N;

	//연산
	string cmd;	//명령
	while (N--) {
		cin >> cmd;

        //push_front X: 정수 X를 덱의 앞에 넣는다.
		if (cmd == "push_front") {
			cin >> x;
			dq.push_front(x);
		}
		
		//push_back X: 정수 X를 덱의 뒤에 넣는다.
		else if (cmd == "push_back") {
			cin >> x;
			dq.push_back(x);
		}
		
		// pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다 
		else if (cmd == "pop_front") {
			// 덱에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
			if (dq.empty()) {
				cout << "-1" << '\n';
			}
			else {
				// 가장 앞의 정수 출력
				cout << dq.front() << '\n';
				// 가장 앞의 정수 삭제
				dq.pop_front();
			}
		}
		
		// pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다 
		else if (cmd == "pop_back") {
			// 덱에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
			if (dq.empty()) {
				cout << "-1" << '\n';
			}
			else {
				// 가장 뒤의 정수 출력
				cout << dq.back() << '\n';
				// 가장 뒤의 정수 삭제
				dq.pop_back();
			}
		}
		
		//size: 덱에 들어있는 정수의 개수를 출력한다.
		else if (cmd == "size") {
			cout << dq.size() << '\n';
		}
		
		//empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
		else if (cmd == "empty") {
			if (dq.empty()) {   // 가장 앞과 뒤가 같으면 empty
				cout << "1" << '\n';
			}
			else {
				cout << "0" << '\n';
			}
		}
		
		//front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
		else if (cmd == "front") {
			if (dq.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << dq.front() << '\n';
			}
		}
		
		//back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
		else if (cmd == "back") {
			if (dq.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << dq.back() << '\n';
			}
		}
	}
	return 0;
}