import java.io.*;
import java.util.*;

import static java.lang.System.exit;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        while(true){
            String str = br.readLine();
            if(str.equals("#"))break;
            else{
                // charAt(0) : 첫번째 인덱스의 문자를 spell 에 저장
                String spell = String.valueOf(str.charAt(0));
                // 맨 처음 들어가는 단어도 카운트 되었으므로 -1 해준다
                int res = countSpell(str,spell) -1;
                bw.write(spell+" "+res+"\n");
            }
        }
        bw.flush();
        bw.close();
        br.close();
    }
    // st 문자열에서 word를 찾아 대문자나 소문자로 변환하고 그것을 빈 문자열로 대체해
    // st 문자열 길이에서 word가 모두 제거된 길이를 배면 word가 나타난 횟수를 얻을 수 있음!
    static int countSpell(String st,String word){
        int a = st.length() - st.replace(word.toLowerCase(),"").length();
        int b = st.length() - st.replace(word.toUpperCase(),"").length();
        return a+b;
    }
}