import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int res = Integer.parseInt(br.readLine());

        while(true){
            String op = br.readLine();

            if(op.equals("="))break;
            int num = Integer.parseInt(br.readLine());
            if(op.equals("+")) res +=num;
            else if(op.equals("-"))res-=num;
            else if(op.equals("*"))res*=num;
            else res/=num;

        }
        System.out.println(res);
    }
}