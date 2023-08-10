import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader( new InputStreamReader(System.in));
        Long n = Long.parseLong(br.readLine()); // 500,000제곱까지 표현되어야 하므로 int는 불가


        System.out.println(n*n);    // n의 제곱번 반복된다.
        System.out.println(2);    // O(n^2)의 시간복잡도이므로 최고차항은 2차

    }
}