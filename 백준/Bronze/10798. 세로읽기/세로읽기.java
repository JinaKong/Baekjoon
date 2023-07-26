import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String str[][] = new String[5][15];

        // 입력받기
        for(int i=0; i<5; i++){
            String input = br.readLine();

            for( int j=0; j<input.length(); j++){
                str[i][j] = input.split("")[j]; // 2차원 배열로 저장
            }
        }


        // 출력
        StringBuilder sb = new StringBuilder();
        
        for(int width=0; width<15; width++){
            for(int height=0; height<5; height++) {
                
                // 세로로 읽기 위해 height, width 순
                if(str[height][width] != null ) sb.append(str[height][width]);
            }
        }

        System.out.println(sb);
    }
}