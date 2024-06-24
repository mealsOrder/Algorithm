import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;
import java.util.stream.Stream;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder sb = new StringBuilder();
        String[] arr = new String[5];
        boolean flag = false;
        for(int i=0;i<5;i++){
            arr[i] = br.readLine();
            if(arr[i].contains("FBI")){
                sb.append(i+1).append(" ");
                flag = true;
            }
        }
        if(flag) System.out.println(sb);
        else System.out.println("HE GOT AWAY!");
        bw.flush();
        bw.close();
        br.close();
    }
}
