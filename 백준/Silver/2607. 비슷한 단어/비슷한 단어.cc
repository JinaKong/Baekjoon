#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 문자열의 알파벳 빈도수를 계산하여 반환하는 함수
vector<int> getFrequency(const string& str) {
    vector<int> frequency(26, 0);   // 각 알파벳의 빈도수 저장하는 벡터
    
    for (char c : str) {
        frequency[c - 'A']++;
    }
    return frequency;
}

// 두 문자열이 비슷한지 검사하는 함수
bool areStringsSimilar(const string& base, const string& s) {
    int baseLength = base.size();
    int sLength = s.size();
    
    vector<int> baseFrequency = getFrequency(base);
    vector<int> sFrequency = getFrequency(s);

    int commonCount = 0;
    for (int j = 0; j < 26; j++) {
        commonCount += min(baseFrequency[j], sFrequency[j]);
    }
    
    if (baseLength == sLength) {
        return (commonCount == baseLength || commonCount == baseLength - 1);
    } else if (baseLength == sLength + 1) {
        return (commonCount == baseLength - 1);
    } else if (baseLength == sLength - 1) {
        return (commonCount == baseLength);
    }
    
    return false;
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

    for (int i = 0; i < n - 1; i++) {
        // 비교할 단어 입력받기
        cin >> s;
        
        // 두 단어가 비슷한지 검사하여 결과를 업데이트
        if (areStringsSimilar(base, s)) {
            result++;
        }
    }

    // 출력
    cout << result << '\n';
    
    return 0;
}