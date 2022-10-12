import java.util.Collections;
import java.util.Scanner;

class makediv3 {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            for (int i = 1; i <=n ; i++) {
                if(i==1||i==n){
                    System.out.print("3");

                }
                else
                    System.out.print("0");
            }
            System.out.println();


        }
    }
}
