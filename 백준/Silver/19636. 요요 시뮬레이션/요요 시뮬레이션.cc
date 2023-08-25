#include <iostream>
#include <tuple>

using namespace std;

// tuple 사용
tuple<int, int, int> Info(int w0, int i0, int d, int t, int i, int a) {
	int w1 = w0, w2 = w0;	// 몸무게
	int m1 = i0, m2 = i0;	// 기초 대사량 (metabolic)

	while(d--) {	// d는 다이어트 기간
		// 다이어트 중 체중변화 : 일일 에너지 섭취량 - 일일 기초 대사량 - 일일 활동 대사량
		w1 += i - m1 - a; 
		w2 += i - m2 - a;

		// m2는 일일 기초대사량 변화도 고려
		if (abs(i - m2 - a) > t) {	//
			m2 += float(i - m2 - a) / 2.0;	// m2가 음수가 될 수 있으므로, 음수 나눗셈을 위해 float로 타입 변환
		}
	}

	return { w1, w2, m2 };
}


int main() {
	// 입력
	int before_weight, before_intake;	// 다이어트 전 체중, 일일 에너지 섭취량
	int t;		// 기초대사량 변화 역치
	int d;		// 다이어트 기간 
	int diet_intake, diet_metabolic;	// 다이어트 기간 일일 에너지 섭취량, 일일 활동 대사량

	cin >> before_weight >> before_intake >> t;
	cin >> d >> diet_intake >> diet_metabolic;

	// tuple 이용한 체중 계산
	tuple<int, int, int> tmp = Info(before_weight, before_intake, d, t, diet_intake, diet_metabolic);
	int after_weight = get<0>(tmp);					// 다이어트 후 체중
	int after_weight_metablic = get<1>(tmp);		// 기초대사량 변화 고려한 체중
	int changed_metabolic = get<2>(tmp);			// 변화한 기초 대사량

	
	// 예상 체중, 기초 대사량 출력
	if (after_weight <= 0) {	// 체중이 0 이하이면 Danger Diet 출력
		cout << "Danger Diet\n";
	}else{
		cout << after_weight << " " << before_intake << '\n';
	}

	// 기초대사량 변화 고려시의 예상 체중, 기초 대사량 출력
	if (after_weight_metablic <= 0 || changed_metabolic <= 0) {	// 체중이 0 이하거나, 기초대사량이 0 이하이면 Danger Diet 출력
		cout << "Danger Diet\n";
	}else {
		cout << after_weight_metablic << " " << changed_metabolic << ' ';

		// 요요인지 출력
		if (changed_metabolic < before_intake) {	
			cout << "YOYO";
		}else {
			cout << "NO";
		}
	}

	return 0;

}