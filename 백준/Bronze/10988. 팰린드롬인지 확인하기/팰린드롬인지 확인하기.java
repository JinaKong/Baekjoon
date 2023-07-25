import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringBuilder sb= new StringBuilder( br.readLine() );

        if(sb.toString().equals( sb.reverse().toString())){
            System.out.println(1);
        }
        else System.out.println(0);
        
        br.close();
    }
}

/* 또 다른 풀이법

import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 단어 입력받기
        String input = br.readLine();
        int L = input.length();   // 단어의 길이
        

        // 단어의 앞뒤 같은지 확인
        int flag = 1;   // flag를 1로 시작
        
        for(int i=0; i < L/2; i++){
            if( input.charAt(i) != input.charAt(L-i-1) ){
                flag = 0;   // 다르면 flag를 0으로
            }
        }

        // 출력
        System.out.println(flag);
    }
}
*/
