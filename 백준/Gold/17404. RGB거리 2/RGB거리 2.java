import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        int N = Integer.parseInt(br.readLine());
        int[][] dp  = new int[N][3];
        int[][] arr = new int[N][3];
        int ans=Integer.MAX_VALUE;
        for(int i = 0; i<N; i++){
            st = new StringTokenizer(br.readLine()," ");
            for(int j=0;j<3;j++){
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        for(int k=0;k<3;k++){
            for(int i=0;i<3;i++){
                if( i == k) dp[0][i] = arr[0][i];
                else dp[0][i] = 1000 * 1000 + 1;
            }

            for(int i=1;i<N;i++){
                dp[i][0] = Math.min(dp[i-1][1],dp[i-1][2])+arr[i][0];
                dp[i][1] = Math.min(dp[i-1][0],dp[i-1][2])+arr[i][1];
                dp[i][2] = Math.min(dp[i-1][0],dp[i-1][1])+arr[i][2];
            }

            for(int i=0;i<3;i++){
                if(i==k)continue;
                ans = Math.min(ans,dp[N-1][i]);
            }
        }

        bw.write(String.valueOf(ans));
        bw.flush();
        bw.close();
        br.close();
    }
}
