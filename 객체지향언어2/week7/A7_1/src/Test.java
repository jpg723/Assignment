import java.util.Scanner;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	      int[] arr;
	      int sum = 0, num, average;
	      
	      Scanner sc = new Scanner(System.in);

	    try {
	    	
			  System.out.print("정수의 개수: ");
			  num = sc.nextInt();
			  arr = new int[num];

			  for(int i = 0; i < num; i++) {
				  System.out.print("정수를 입력하시오: ");
				  arr[i] = sc.nextInt();
			  }
			  
			  for(int i = 0; i < num; i++) {
				  sum += arr[i];
			  }
			  average = sum / num;
			  
			  System.out.println("평균은 " + average);
		} 
	    
	    catch (ArithmeticException e) {
			e.printStackTrace();
		}
	    
		catch (NegativeArraySizeException e) {
			e.printStackTrace();
		}
	    
		catch (ArrayIndexOutOfBoundsException e) {
			e.printStackTrace();
		}
	    
		catch (NullPointerException e) {
			e.printStackTrace();
		}
	}
}
