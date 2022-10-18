/* package codechef; // don't place package name! */

import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int x = sc.nextInt();
            int a[] = new int[n];
            if (k < x)
                System.out.println("-1");
            else {
                int i, j = 0;
                for (i = 0; i < n; i++) {
                    a[i] = j;
                    if (j == x - 1)
                        j = 0;
                    else
                        j++;
                }
                for (i = 0; i < n; i++) {
                    System.out.print(a[i] + " ");
                }
                System.out.println();
            }
            t--;
        }
        sc.close();
    }
}
