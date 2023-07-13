import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int num1, num2, num3 = 0;   // 주사위의 눈
        int reward = 0;         // 상금

        String input = br.readLine();
        StringTokenizer st = new StringTokenizer(input);
        num1 = Integer.parseInt(st.nextToken());
        num2 = Integer.parseInt(st.nextToken());
        num3 = Integer.parseInt(st.nextToken());
        br.close();

        if(num1==num2){
            if(num2==num3)
                reward = 10000 + num1*1000;
            else reward = 1000 + num1*100;
        }
        else if (num1==num3){
            reward = 1000 + num1*100;
        }
        else if (num2==num3){
            reward = 1000 + num2*100;
        }
        else{
            // 셋 중 가장 큰 수 찾기
            int MAX = num1>num2 ? num1:num2;
            MAX = MAX>num3 ? MAX:num3;

            reward = MAX*100;
        }

        bw.write(reward +"\n");
        bw.flush();
        bw.close();
    }
}