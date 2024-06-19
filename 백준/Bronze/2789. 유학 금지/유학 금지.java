import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder res = new StringBuilder();
        String k = "CAMBRIDGE";
        String str = br.readLine();
        String ans="";

        for(int i=0;i<str.length();i++){
            boolean flag = false;
            for(int j=0;j<k.length();j++){
                if( str.charAt(i) == k.charAt(j) ){
                    flag = true;
                }

            }
            if(!flag) res.append(str.charAt(i));
        }

        bw.write(res.toString());
        bw.flush();
        bw.close();
        br.close();
    }
}