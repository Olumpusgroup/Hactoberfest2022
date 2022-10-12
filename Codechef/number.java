import  java.util.*;
class numberinfosys {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int a[] = new int[n1];
        for (int i = 0; i < n1; i++) {
            a[i] = sc.nextInt();
        }
                int ans[]=new int[n1];
        for (int i = 0; i < n1; i++) {
            int n = a[i];
            int c = 0;
            while (n != 1) {
                if (n % 2 == 0) {
                    n = n / 2;
                    c++;
                } else if (n % 2 == 1) {
                    n = n * 3 + 1;
                    c++;
                }
              System.out.print(n+",");

            }
            System.out.println();
            ans[i]=c+1;

        }
        System.out.println("\n"+Arrays.toString(ans));
    }
}
