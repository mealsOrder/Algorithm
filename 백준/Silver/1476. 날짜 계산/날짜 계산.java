import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static int[][] map ;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine()," ");
        int year=1;
        int E = Integer.parseInt(st.nextToken());
        int S = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int e=1;
        int s=1;
        int m=1;
        while(true){
            if(e == E && s ==S && m == M){
                bw.write(String.valueOf(year));
                break;
            }
            e = year%15+1;
            s = year%28+1;
            m = year%19+1;
            year++;
        }
        bw.flush();
        bw.close();
        br.close();
    }
}