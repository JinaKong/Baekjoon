#include<string>
#include <iostream>
#include <stack> //추가


using namespace std;

bool solution(string s)
{
    // '스택' 선언
    stack<char> st;
    
    // 짝지어진 괄호인지 판단
    for(int i=0; i<s.length(); i++){
        // '(' 이면 stack에 푸시
        if(s[i] =='('){
            st.push('(');
        }
        // ')' 이면 
        else if(s[i] == ')'){
            // stack에 ')'가 있는지 확인! 있으면 pop()
            if( !st.empty() && st.top() == '(') // [주의] empty인지 확인해야 함
                st.pop();
            // stack에 ')'가 없다면 올바르지 않으니 false 리턴
            else 
                return false;
        }
    }
    
    // 스택이 비어있으면 true 리턴
    if(st.empty()){
        return true;
    }
    // 아니면 false 리턴
    else{
        return false;
    }
}