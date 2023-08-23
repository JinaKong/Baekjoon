#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct student {	// 학생 정보 구조체
	string name;
	int kor, eng, math;
};

// 비교함수 cmp : sort 함수의 세번째 인자로 넣음
bool cmp(const student& s1, const student& s2) {	// student 벡터 중 두 점수를 비교해서, boolean값 리턴
	if (s1.kor != s2.kor) {
		return s1.kor > s2.kor;		// [조건 1] 국어 점수 감소하는 순서
	}
	if (s1.eng != s2.eng) {
		return s1.eng < s2.eng;		// [조건 2] (국어 점수가 같다면) 영어 점수 증가하는 순서
	}
	if (s1.math != s2.math) {
		return s1.math > s2.math;	// [조건 3] (국어, 영어 점수가 같다면) 수학 점수 감소하는 순서
	}
	return s1.name < s2.name;		// [조건 4] (국어, 영어, 수학 점수가 같다면) 이름 알파벳이 증가하는 순서

}


int main() {
	int N;	// 반 학생 n명
	vector<student> my_class;	// 학생 이름과 국어, 영어, 수학점수

	//입력
	cin >> N;

	my_class.assign(N, {});
	for (int i = 0; i < N; i++) {
		cin >> my_class[i].name >> my_class[i].kor >> my_class[i].eng >> my_class[i].math;
	}

	/*
	sort 함수 : 세번째 인자로 비교함수 cmp 넣기
				( 디폴트가 오름차순 정렬, greater<>() 넣으면 내림차순 정렬)
	*/
	sort(my_class.begin(), my_class.end(), cmp);	


	// 출력
	for (int i = 0; i < N; i++) {
		cout << my_class[i].name << '\n';
	}

	return 0;
}