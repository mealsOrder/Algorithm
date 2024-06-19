
import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String str = br.readLine();
        double grade = 0.0;
        char alph = str.charAt(0);
        char flag = str.length()>1 ? str.charAt(1): '0';
        switch (alph){
            case 'A':
                grade = 4.0;
                break;
            case 'B':
                grade = 3.0;
                break;
            case 'C':
                grade = 2.0;
                break;
            case 'D':
                grade = 1.0;
                break;
            default:
                grade = 0.0;
        }
        if(flag == '+') grade+=0.3;
        else if(flag == '-') grade-=0.3;

        bw.write(String.valueOf(grade));
        bw.flush();
        bw.close();
        br.close();
    }
}