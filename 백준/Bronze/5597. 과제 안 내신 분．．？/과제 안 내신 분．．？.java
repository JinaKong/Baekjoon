import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        int result[] = new int[30];
        int submittedID = 0;        // 이미 제출한 학번


        for(int i=0; i<28; i++){
            // 제출한 학번 입력받기
            submittedID = Integer.parseInt(br.readLine());
            // 제출했으면 1로 저장
            result[submittedID-1] = 1;
        }

        for(int i=0; i<30; i++){
            if(result[i] != 1){
                System.out.println(i+1);    // 1이 아니면 미제출자이므로 학번 출력
            }
        }

        br.close();
    }
}