import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int L = Integer.parseInt(st.nextToken());
        int []H = new int[N];
        st = new StringTokenizer(br.readLine());
        for(int i=0;i<N;i++){
            H[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(H);
        for(int i=0;i<N;i++){
            if(H[i] <= L) L++;
        }
        System.out.println(L);
    }
}