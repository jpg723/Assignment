
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int i;

		Device[] d = new Device[2];		
		d[0] = new Printer();
		d[1] = new UsbMem();

		for(i = 0; i < d.length; i++) {
			d[i].print();
			d[i].connect();
		}

	}

}
