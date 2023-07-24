import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        String S[] = new String[22];        // 각 문자열
        String alphabets[][] = new String[1000][20];  // 문자열의 각 알파벳
        int iterationNum[] = new int[1000];               // 각 알파벳을 반복할 횟수


        // 입력
        int T = Integer.parseInt(br.readLine());    // 테스트 케이스의 개수

        for (int i = 0; i < T; i++) {
            S = br.readLine().split(" ");

            iterationNum[i] = Integer.parseInt(S[0]);

            for (int l = 0; l < S[1].length(); l++) {
                alphabets[i] = S[1].split("");
            }
        }


        // 출력
        for (int t = 0; t < T; t++) {
            StringBuilder sb = new StringBuilder();

            for(int a =0; a < alphabets[t].length; a++){

                // iterationNum만큼 반복해서 출력
                for (int k = 0; k < iterationNum[t]; k++) {
                    sb.append(alphabets[t][a]);
                }
            }
            System.out.print(sb);
            System.out.println();
        }


    }

}