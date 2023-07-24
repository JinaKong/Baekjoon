import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        int N = Integer.parseInt(br.readLine());
        StringBuilder sb= new StringBuilder();

        for(int i=0; i<N; i++){
            for(int k = (N-1); k>i; k--) {
                sb.append(" ");
            }
            sb.append("*");
            for(int j=i; j <= (2*i-1); j++) {
                sb.append("**");
            }
            sb.append("\n");
        }

        for(int i=N-2; i>=0; i--){
            for(int k = (N-1); k>i; k--) {
                sb.append(" ");
            }
            sb.append("*");
            for(int j=i; j <= (2*i-1); j++) {
                sb.append("**");
            }
            sb.append("\n");
        }

        System.out.println(sb);
    }
}