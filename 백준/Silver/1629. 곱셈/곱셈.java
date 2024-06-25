import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        long A = Long.parseLong(st.nextToken());
        long B = Long.parseLong(st.nextToken());
        long C = Long.parseLong(st.nextToken());

        bw.write(String.valueOf(func(A,B,C)));
        bw.flush();
        bw.close();
        br.close();
    }

    public static long func(long a,long b,long c){
        if(b==1) return a%c;

        long model = func(a,b/2,c);
        // 홀수일때
        if(b%2==1) return (model*model%c) * a%c;
        //짝수일때
        return (model*model)%c;
    }

}
