public class LargestofTwo {
	private static Scanner sc;
	public static void main(String[] args) 
	{
		int number1, number2;
		sc = new Scanner(System.in);
		
		System.out.print(" Please Enter the First Number : ");
		number1 = sc.nextInt();	
		
		System.out.print(" Please Enter the Second Number : ");
		number2 = sc.nextInt();	
		
		if(number1 > number2) 
	    {
			System.out.println("\n The Largest Number = " + number1);          
	    } 
	    else if (number2 > number1)
	    { 
	    	System.out.println("\n The Largest Number = " + number2);        
	    } 
	    else 
	    {
	    	System.out.println("\n Both are Equal");
	    }		
	}	
}
