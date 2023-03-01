
public class Week14_3_Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Thread1 t1 = new Thread1();
		Thread2 t2 = new Thread2();

		t2.start();
		t1.start();
	}
}
class Thread1 extends Thread{

	public void run(){

		for(char i = 'a'; i <= 'g'; i++) {

			try{
				Thread.sleep(100);
			}
			catch(InterruptedException e){
				System.out.println(e);
			}
			System.out.print(i + " ");
		}
	}
}
class Thread2 extends Thread{

	public void run(){

		for(int i = 10; i >= 1; i--){

			try{
				Thread.sleep(100);
			}
			catch(InterruptedException e){
				System.out.println(e);
			}
			System.out.print(i + " ");
		}
	}
}
