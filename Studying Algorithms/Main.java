// https://codeforces.com/gym/102951/problem/B

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);

        StringTokenizer st = new StringTokenizer(r.readLine());
        int N = Integer.parseInt(st.nextToken());
        int X = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(r.readLine());

        int[] algs = new int[N];

        for (int i = 0; i < N; i ++) {
            algs[i] = Integer.parseInt(st.nextToken());
        }
        
        int ans = 0;
        int amount = 0;
        Arrays.sort(algs);

        for (int i: algs) {
            if (amount + i <= X) {
                ans += 1;
                amount += i;
            }
            else {
                break;
            }
        }

        pw.println(ans);

        pw.close();
    }
}