import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        // 입력받기
        String input = br.readLine();
        String pieces[] = input.split(" ");

        // 각 체스말의 수 배열로 저장
        int num[] = {1,1,2,2,2,8};    

        // 출력
        StringBuilder sb= new StringBuilder();
        for(int i=0; i<6; i++){
            sb.append(num[i]-Integer.parseInt(pieces[i])).append(" ");
        }
        System.out.println(sb);
    }
}