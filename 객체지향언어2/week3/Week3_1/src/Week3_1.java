import java.util.Arrays;

public class Week3_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int i;
		int[] iArr = {10, 20, 30, 40, 50};
		char[] chArr = {'a', 'b', 'c', 'd', 'e'};

		for(i = 0; i < iArr.length; i++)
		{
			System.out.print(iArr[i] + ", ");
		}

		System.out.println();
		System.out.println("** for-each문으로 출력");

		for(int a : iArr)
		{
			System.out.println(a);
		}
		for(char c : chArr)
		{
			System.out.println(c);
		}

		System.out.println("**Arrays.toString으로 출력");
		System.out.println("iArr : " + Arrays.toString(iArr));
		System.out.println("chArr : " + Arrays.toString(chArr));
		
		System.out.println("** println(배열이름)으로 출력");
		System.out.println(chArr);
		System.out.println(iArr);
	}

}
