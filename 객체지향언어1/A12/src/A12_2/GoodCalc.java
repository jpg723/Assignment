package A12_2;

class GoodCalc extends Calculator{
	
	public int add(int num1, int num2) {
		return num1 + num2;
	}
	
	public int sub(int num1, int num2) {
		return num1 - num2;
	}
	
	public double ave(int[] arr) {
		
		double sum = 0;
		
		for(int i = 0; i < arr.length; i++) {
			sum += arr[i];
		}
		
		return sum / arr.length;
	}
}
