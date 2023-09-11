#include <iostream>
#include <stack> // 스택 라이브러리

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    	
	stack<int> s;	// 스택 s

	// 입력
	int N;	// 명령의 수
	int x;	//원소
	cin >> N;

	//연산
	string cmd;	//명령
	while (N--) {
		cin >> cmd;

		// 1. push X : 정수 X를 스택에 넣는 연산
		if (cmd == "push") {
			cin >> x;
			s.push(x);
		}

		// 2. pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 
		else if (cmd == "pop") {
			//스택에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
			if (s.empty()) {
				cout << "-1" << '\n';
			}
			else {
				// top의 정수 출력
				cout << s.top() << '\n';
				// top의 정수 삭제
				s.pop();
			}
		}
		else if (cmd == "size") {
			cout << s.size() << '\n';
		}
		else if (cmd == "empty") {
			if (s.empty()) {
				cout << "1" << '\n';
			}
			else {
				cout << "0" << '\n';
			}
		}
		else if (cmd == "top") {
			if (s.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << s.top() << '\n';
			}
		}
	}
	return 0;
}