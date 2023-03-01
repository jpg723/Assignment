package A4_4;

import java.util.Arrays;

public class A4_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		double array[] = {1.0, 2.0, 3.0, 4.0};
		double sum = 0, max = 0;
		
		System.out.print("toString() 로 출력: ");
		System.out.println(Arrays.toString(array));
		
		for(int i = 0; i < array.length; i++) {
		
			System.out.print(array[i] + " ");
			sum += array[i];
			
			if(max < array[i])
				max = array[i];
		}
		
		System.out.println("\n합은 " + sum);
		System.out.println("최대값은 " + max);
	}

}
