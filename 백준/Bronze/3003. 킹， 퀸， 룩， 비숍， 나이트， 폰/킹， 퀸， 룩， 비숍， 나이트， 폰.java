import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        // 입력받기
        String input = br.readLine();
        String pieces[] = input.split(" ");
        
        // 출력
        StringBuilder sb= new StringBuilder();

        sb.append(1-Integer.parseInt(pieces[0])).append(" ");
        sb.append(1-Integer.parseInt(pieces[1])).append(" ");
        sb.append(2-Integer.parseInt(pieces[2])).append(" ");
        sb.append(2-Integer.parseInt(pieces[3])).append(" ");
        sb.append(2-Integer.parseInt(pieces[4])).append(" ");
        sb.append(8-Integer.parseInt(pieces[5])).append(" ");

        System.out.println(sb);
    }
}