import java.io.*;
import java.lang.Math;
import java.util.StringTokenizer;


public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    /*
    각 자리의 값을 배열로 저장하는 함수
     */
    public static int[] findDigitNum(int num, int numLength) {

        int[] digitNum = new int[numLength];   // 각 자리의 값 저장할 배열
        for(int i=numLength-1; i>=0; i--) {
            digitNum[i] = (num % (int)Math.pow(10,i+1) ) / (int)Math.pow(10,i);
        }

        return digitNum;
    }

    /*
    곱셈 및 출력 함수
     */
    public static void multiplyAndPrint(int A, int[] digitNumOfB, int numLength) throws IOException {

        int subResult = 0;      // 자리수별 곱셈 결과값
        int finalResult = 0;    // 최종 곱셈 결과값

        for(int i=0; i<numLength; i++){
            subResult = A * digitNumOfB[i];
            bw.write(subResult+"\n");   // 자리수별 곱셈 과정 출력

            finalResult += subResult * (int)Math.pow(10,i); // 최종 곱셈 결과값에 추가
        }

        bw.write(finalResult+"\n"); // 최종 곱셈 결과값 출력
        bw.flush();
    }


    public static void main(String[] args) throws IOException {

        int A,B = 0;            // 곱셈할 세자리 자연수 A, B
        int numLength = 3;      // A,B의 길이
        int digitNumOfB[] = {0};   // A,B의 각 자리수 값

        //A, B 입력받기 (line으로 구분해서 입력됨)
        A = Integer.parseInt(br.readLine());
        B = Integer.parseInt(br.readLine());
        br.close();

        // B의 각 자릿수 값 계산해서 배열에 저장
        digitNumOfB = findDigitNum(B, numLength);

        // 곱셈 및 출력
        multiplyAndPrint(A, digitNumOfB, numLength);
        bw.close();
    }
}