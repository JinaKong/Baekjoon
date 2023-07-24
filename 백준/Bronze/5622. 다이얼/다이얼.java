import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        int time = 0;   // 전화를 거는 데 걸리는 시간

        // 입력받기
        String input[] = br.readLine().split("");

        
        // 각 문자를 누르는 데 걸리는 시간 구해서 합하기
        for(int i=0; i< input.length; i++){
            // 필요한 시간이 세 문자마다 달라짐
            time += (input[i].charAt(0) - 'A') / 3 + 3;     

            // 단, S와 Z는 4개씩이라서 -1, 마지막 Y,Z도 밀려서 -1
            if( input[i].equals("S") || input[i].equals("V") ||
                input[i].equals("Y") || input[i].equals("Z")) {
                time -= 1;
            }
        }

        // 출력
        System.out.println(time);
    }
}