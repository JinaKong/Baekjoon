import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        int num;        // 나누어지는 수
        int k;
        int result = 0; // k번째로 작은 약수 저장

        /*
        num, k 입력 받기
         */
        String str = br.readLine();
        num = Integer.parseInt(str.split(" ")[0]);
        k = Integer.parseInt(str.split(" ")[1]);


        /*
        k번째로 작은 약수 찾기
         */
        int count = 0;      // 약수의 개수

        for(int i = 1; i <= num; i++){
            if(count < k){
                // k번째 약수를 찾을 때까지 반복

                if(num % i == 0){
                    // i가 약수이면
                    result = i;
                    count++;
                }
            }
        }

        /*
        출력
         */
        if(count < k)     // 약수의 개수가 적어서 k번째 약수가 없을 경우
            System.out.println(0);  //0 출력
        else
            System.out.println(result); // 그렇지 않으면 result 출력
    }
}