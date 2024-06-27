import java.io.*;
import java.util.*;

public class Main {
        public static void main(String[] args) throws IOException {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
            StringTokenizer st = new StringTokenizer(br.readLine()," ");

            int A = Integer.parseInt(st.nextToken());
            int B = Integer.parseInt(st.nextToken());
            int C = Integer.parseInt(st.nextToken());

            int T = Integer.parseInt(br.readLine());
            int mx=0;
            for(int i=0;i<T;i++){
                int sum = 0;
                for(int j=0;j<3;j++){
                    st = new StringTokenizer(br.readLine()," ");
                    int x = Integer.parseInt(st.nextToken());
                    int y = Integer.parseInt(st.nextToken());
                    int z = Integer.parseInt(st.nextToken());
                    sum += x*A+y*B+z*C;
                }
                if(sum > mx){
                    mx = sum;
                }
            }
            bw.write(String.valueOf(mx));
            bw.flush();
            bw.close();
            br.close();
        }

}
