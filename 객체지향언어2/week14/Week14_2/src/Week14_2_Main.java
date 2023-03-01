
public class Week14_2_Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Thread1 th1 = new Thread1();
		Thread2 th2 = new Thread2();

		th1.start();
		th2.start();

		try {
			th1.sleep(2000); // 2초 동안 대기
		} catch(InterruptedException e) {
			
		}
		System.out.print("<<main 종료>>");

	}
}
class Thread1 extends Thread{
	public void run() {
		for(int i = 0; i < 300; i++) {
			System.out.print("-");
		}
		System.out.print("<<th1 종료>>");
	}
}
class Thread2 extends Thread{
	public void run() {
		for(int i = 0; i < 300; i++) {
			System.out.print("|");
		}
		System.out.print("<<th2 종료>>");
	}
}