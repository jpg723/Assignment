import java.util.Arrays;

public class Test {

	public static void main(String[] args) {
		Integer[] array = {1, 2, 3, 4, 5, 6};

		MyMath<Integer> mymath = new MyMath<Integer>();

		System.out.print("�迭" + Arrays.toString(array) + "�� ���: ");
		System.out.println(mymath.getAverage(array));
	}
}