#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;


int main() {
	int N;		// 도감에 수록된 포켓몬의 개수
	int M;		// 맞춰야할 문제의 개수
	string name;		// 입력되는 포켓몬의 이름
	vector<string> question;		// 입력되는 문제 

	// 맵을 두개 만들기!
	map<string, int> poketmon_name;	// key가 name인 맵
	map<int, string> poketmon_num;	// key가 num인 맵


	/*
	입력
	*/
	cin >> N >> M;
	
	// 포켓몬 이름과 번호 저장
	for( int i=1; i<=N; i++) {	
		cin >> name;

		// 맵 2개에 모두 저장!!
		poketmon_name[name] = i;
		poketmon_num[i] = name;
	}

	// 문제 저장
	question.assign(M, {});
	for (int i = 0; i < M; i++) {
		cin >> question[i];
	}

	/*
	출력
	*/
	for (int i = 0; i < M; i++) {
		//문제가 숫자면 포켓몬의 이름 출력
		if (isdigit(question[i][0]))	// isdigit() : 숫자인 경우 true 리턴 
			cout << poketmon_num[stoi(question[i])] << '\n';	//stoi() : string을 int형으로 변환
		//문제가 문자면 포켓몬의 번호 출력
		else
			cout << poketmon_name[question[i]] << '\n';
	}

	return 0;

}