import java.util.Scanner;

class Reserve extends Print {
	Scanner sc = new Scanner(System.in);

	int[] seats = new int[5];
	boolean flag = true;

	void reserve() {

		while(true) {
			flag = true;
			for(int j = 0; j < seats.length; j++) {
				if(seats[j] != 1) {
					flag = false;
				}
			}
			if(flag == true) {
				System.out.println("만석입니다.");
				break;
			}

			System.out.print("예약하려는 좌석번호를 입력하세요 : ");
			int s = sc.nextInt();

			if(seats[s - 1] == 0) { //예약이 안된 경우 0으로 표기
				seats[s - 1] = 1; //예약된 좌석은 1로 바뀜
				System.out.println("예약되었습니다.");
			}

			else { //예약된 경우 실행
				System.out.println("이미 예약 된 자리입니다.");
			}
		}
	}

}
