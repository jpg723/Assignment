import java.util.Arrays;
import java.util.Scanner;

public class Test {
	public static int searchArray(int arr[], int num) throws NotFoundExecption
	{
		for(int i=0;i<arr.length;i++){
			if(arr[i] == num)
				return i;
		}
		throw new NotFoundExecption();
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		
		int[] arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		
		System.out.println("�迭 " + Arrays.toString(arr));
		System.out.print("ã������ ���ڸ� �Է��ϼ���. >> ");
		int data = sc.nextInt();
		
		try {
			searchArray(arr, data);
			System.out.println("�����ʹ� �ε��� " + arr[data] + "�� ����");
			
		} catch (NotFoundExecption e) {
			System.out.println("�����ʹ� �迭�� ����!");
			e.printStackTrace();
		}
	}

}
