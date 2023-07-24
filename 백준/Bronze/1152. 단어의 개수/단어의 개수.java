import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        int i=0;
        int count = 0;

        // 문장을 공백으로 구분해서 저장
        String input[] = br.readLine().split(" ");

        // 문자열이 공백으로 '시작'하면, count 해서 총 단어 수에서 차감
        if(input.length > 0) {    // 문자열이 아예 입력되지 않는 경우 제외
            while (input[i].equals("")) {
                count++;
                i++;
            }
        }

        // 단어 수 출력
        System.out.println( input.length - count);
    }

}