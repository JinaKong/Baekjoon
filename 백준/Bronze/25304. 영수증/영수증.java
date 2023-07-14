import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int totalAmount = 0;        // 영수증에 적힌 총 금액
        int N = 0;                   // 영수증에 적힌 물건 수

        int amount,quantity = 0;    // 각 물건의 가격과 수량
        int subAmount = 0;          // 각 물건의 가격과 수량으로 계산한 금액

        /*
        입력받기
         */
        totalAmount = Integer.parseInt(br.readLine());
        N = Integer.parseInt(br.readLine());
        for(int i=1; i<=N; i++) {
            String input = br.readLine();
            StringTokenizer st = new StringTokenizer(input);

            amount = Integer.parseInt(st.nextToken());
            quantity = Integer.parseInt(st.nextToken());

            subAmount += amount * quantity;
        }
        br.close();

        /*
        출력
         */
        if (totalAmount == subAmount)
            System.out.println("Yes");  // 영수증의 값과 계산값이 일치하면 Yes 출력
        else System.out.println("No");

    }
}