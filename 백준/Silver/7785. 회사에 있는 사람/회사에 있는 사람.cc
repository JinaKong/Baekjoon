#include <iostream>
#include <vector>
#include <set>

using namespace std;

struct logList {	// 출입 로그 구조체
	string name;
	string is_enter;
};


int main() {
	int n;		//기록된 출입 기록 수
	vector<logList> log;
	set<string> s;


	// 입력
	cin >> n;

	log.assign(n, {});
	for (int i = 0; i < n; i++) {
		cin >> log[i].name >> log[i].is_enter;
	}


	// 현재 회사에 있는 사람만 result 셋에 넣기
	for (int i = 0; i < n; i++) {
		if (log[i].is_enter == "enter")		// enter 이면 셋에 추가
			s.insert(log[i].name);		
		if (log[i].is_enter == "leave")		// leave 이면 셋에서 제거
			s.erase(log[i].name);
	}

	// 출력
	for (auto i = s.rbegin(); i != s.rend(); i++) {	// 역순으로 출력하려면 rbegin, rend 사용!
		cout << *i << '\n';
	}


	return 0;
}