#include <iostream>
#include <stack> // 스택 라이브러리

using namespace std;

bool isValid( string input ){
    
    stack<char> s;    // 스택 s
    
    for(int i = 0; i< input.length(); i++){
        char ch = input[i]; // 문자열의 각 문자 ch
        
        // '(' 이면 스택에 넣기
        if(ch == '('){
            
            s.push(ch);
        }
        // ')' 이면 스택에 '('이 있어야 유효함
        else if(ch == ')'){
            
            // 스택에 '('이 없으면 0 리턴
            if(s.empty() || s.top() != '('){
                return 0;
            }
            // 스택에 '('가 있다면 pop
            else{
                s.pop(); 
            }
        }
    }
    // 모두 pop한 이후스택이 비어있어야 유효
    return s.empty();
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    	
	int T;	        // 입력의 수
	cin >> T;
	
	string input;	//입력된 괄호문자열
	bool result;
	
	while (T--) {
	    //입력
		cin >> input;   // 괄호문자열 입력받기
		
		//연산
		result = isValid(input);    // 유효한 괄호문자열인지 확인
		
		//출력
		if(result == 0){
		    cout << "NO" << '\n';
		}
		else if(result == 1){
		    cout << "YES" << '\n';
		}
	}
	return 0;
}