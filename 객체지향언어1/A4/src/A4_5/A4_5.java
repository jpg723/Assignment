package A4_5;

import java.util.ArrayList;

public class A4_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		ArrayList<Double>list = new ArrayList<>();
		double sum = 0, max = 0;
		
		for(int i = 0; i < 4; i++) {
			
			list.add((double)i + 1);
			System.out.print(list.get(i) + " ");
			
			sum += list.get(i);
			
			if(max < list.get(i))
				max = list.get(i);
		}
		
		System.out.println("\n합은 " + sum);
		System.out.println("최대값은 " + max);
	}

}
