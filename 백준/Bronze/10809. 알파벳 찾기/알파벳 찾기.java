import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        // 단어 입력받기
        String words[] = br.readLine().split("");

        
        int result = 0;
        StringBuilder sb = new StringBuilder();
        
        for(char ch='a'; ch<='z'; ch++){    
            // 알파벳 만큼 반복
            for(int i=0; i<words.length; i++){  
                // 단어 길이만큼 반복
                result = -1;        // 알파벳이 단어에 포함되어 있지 않으면 -1

                if(Character.toString(ch).equals(words[i])) {
                    result = i;     // 포함되어 있으면 해당 i 값    
                    break;
                }
            }
            sb.append( result ).append(" ");    // result 값 출력
        }
        System.out.println(sb);
        
    }
}