import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        while(true){
            int ans = 0;
            String str = br.readLine();
            if(str.equals("#")) break;
            for(int i=0;i<str.length();i++){
                int oc = str.length()-1-i;
                ans += (int) (check(str.charAt(i))*Math.pow(8,oc));
            }
            bw.write(String.valueOf(ans)+"\n");
        }
        bw.flush();
        bw.close();
        br.close();
    }
    static int check(char a){
        int num=0;
        if (a == '-') {
            num = 0;
        } else if (a == '\\') {
            num = 1;
        } else if (a == '(') {
            num = 2;
        } else if (a == '@') {
            num = 3;
        } else if (a == '?') {
            num = 4;
        } else if (a == '>') {
            num = 5;
        } else if (a == '&') {
            num = 6;
        } else if (a == '%') {
            num = 7;
        } else if (a == '/') {
            num = -1;
        }
        return num;
    }
}