
import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine()," ");

        long N = Long.parseLong(st.nextToken());
        long M = Long.parseLong(st.nextToken());

        long a = Math.min(N,M);
        long b = Math.max(N,M);

        long sigma = b*(b+1)/2;
        long sub = (a-1)*a/2;
        long ans = sigma - sub;

        bw.write(String.valueOf(ans));
        bw.flush();
        bw.close();
        br.close();
    }
}