import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static int[]arr;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        long ans=0;
        String str= "";
        long A = Integer.parseInt(br.readLine());
        long B = Integer.parseInt(br.readLine());
        long C = Integer.parseInt(br.readLine());
        arr = new int[10];
        ans = A*B*C;

        while(ans>0){
            arr[(int) (ans%10)]++;
            ans /= 10;
        }
        for(int i=0;i<10;i++)bw.write(arr[i]+"\n");
        bw.flush();
        bw.close();
        br.close();
    }
}
