#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 문자열의 알파벳 빈도수를 계산하여 반환하는 메소드
vector<int> getFrequency(const string& str) {
    vector<int> frequency(26, 0);   // 각 알파벳의 빈도수 저장하는 벡터
    
    for (char c : str) {
        frequency[c - 'A']++;
    }
    return frequency;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    string base;    // 첫번째 단어
    string s;       // 주어지는 단어들
    int result = 0;  // 비슷한 단어 수
    
    // 입력
    cin >> n;
    cin >> base; 

    // 첫번째 단어의 알파벳 빈도수
    vector<int> baseFrequency = getFrequency(base);
    int baseLength = base.size();   // 첫번째 단어의 길이

    for (int i = 0; i < n - 1; i++) {
        // 비교할 단어 입력받기
        cin >> s;
        int sLength = s.size();

        // s의 알파벳 빈도수 계산
        vector<int> sFrequency = getFrequency(s);
        
        // 두 단어의 각 알파벳 빈도수의 공통 개수를 commonCount로 카운트
        int commonCount = 0;
        for (int j = 0; j < 26; j++) {
            commonCount += min(baseFrequency[j], sFrequency[j]);
        }
        
        //비슷한 단어로 판단되면 result +1
        //두 단어의 길이가 같으면
        if (baseLength == sLength) {
            //commonCount가 첫번째 문자열의 길이와 같거나 1 작아야 한다
            if (commonCount == baseLength || commonCount == baseLength - 1) {
                result++;
            }
        //입력받은 문자열이 1 길면
        } else if (baseLength == sLength + 1) {
            //commonCount가 첫번째 문자열의 길이보다 1 작아야 한다
            if(commonCount == baseLength - 1){
                result++;
            }
        //입력받은 문자열이 1 작으면
        } else if (baseLength == sLength - 1) {
            //commonCount가 첫번째 문자열의 길이와 같아야 한다
            if(commonCount == baseLength){
                result++;
            }
        }
    }

    // 출력
    cout << result << '\n';
    
    return 0;
}
