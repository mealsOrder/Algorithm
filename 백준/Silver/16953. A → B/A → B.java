import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        long A = Long.parseLong(st.nextToken());
        long B = Long.parseLong(st.nextToken());

        bw.write(String.valueOf(solve(A,B)));
        bw.flush();
        bw.close();
        br.close();
    }

    static int solve(long A,long B){
        int cnt = 1;

        while(B>A){
            if(B%2==0){
                B/=2;
            }else if(B%10==1){
                B = (B-1)/10;
            }else{
                return -1;
            }
            cnt++;
        }
        return A==B ? cnt: -1;
    }

}
