
class MyMath<T extends Number>{

	double sum = 0.0;
	double ave = 0.0;

	public double getAverage(T[] array) {

		for(int i=0; i<array.length; i++) {
			sum += array[i].doubleValue();
		}
		ave = sum / array.length;
		
		return ave;
	}

}
