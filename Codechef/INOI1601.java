 class Check {
     public static void main(String args[]) {
         int index = 0;
         int result = 1;
         while (true) {
             ++index;
             if (index % 2 == 0)
                 continue;
             else if (index % 5 == 0)
                 break;
             result *= 3;

         }
         System.out.println(result);
     }
 }