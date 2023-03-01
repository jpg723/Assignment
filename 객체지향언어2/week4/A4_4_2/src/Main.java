
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Person[] p = new Person[3];
		p[0] = new Person("±è±æµ¿", 190);
		p[1] = new Person("¹Ú±æµ¿", 180);
		p[2] = new Person("È«±æµ¿", 170);

		System.out.println(getMax(p));
	}

	public static Person getMax(Person[] array) {
		
		int max = 0;
		int i;
		
		for (i=1; i<array.length; i++) {
			
			if(array[i].compareTo(array[max]) == 1) {
				max = i;
			}
		}
		return array[max];
	}
}
