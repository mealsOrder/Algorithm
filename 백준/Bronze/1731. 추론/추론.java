
import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());
        int ans =0;
        int[]arr = new int[N];
        for(int i=0;i<N;i++){
            arr[i] = Integer.parseInt(br.readLine());
        }
        if(arr[0]+arr[2] == 2*arr[1]){
            int d = arr[1]-arr[0];
            ans = arr[0] + N*d;
        }
        else{
            int r = arr[1]/arr[0];
            ans = (int) (arr[0]*Math.pow(r,N));
        }
        bw.write(String.valueOf(ans));
        bw.flush();
        bw.close();
        br.close();
    }
}