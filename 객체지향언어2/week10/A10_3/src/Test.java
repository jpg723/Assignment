import java.util.Arrays;

public class Test {

	public static void main(String[] args) {
		Integer[] array = {1, 2, 3, 4, 5, 6};

		MyMath<Integer> mymath = new MyMath<Integer>();

		System.out.print("¹è¿­" + Arrays.toString(array) + "ÀÇ Æò±Õ: ");
		System.out.println(mymath.getAverage(array));
	}
}