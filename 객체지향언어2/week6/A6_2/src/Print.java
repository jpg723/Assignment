
public abstract class Print {
	
	int[] seats = new int[5];
	
	void print() {
		System.out.println("-------------------------");    

		for(int i = 0; i < 5; i++) {
			System.out.print((i + 1)+" "); //�����¼���ȣ ���
		}

		System.out.println("\n-------------------------");
		for(int i = 0; i < 5; i++){
			System.out.print(seats[i] + " ");
		}

		System.out.println("\n-------------------------");
	}

}
