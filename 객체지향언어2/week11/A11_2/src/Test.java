import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.TreeSet;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		TreeSet<String> treeSet = new TreeSet<String>();

        Member m1 = new Member("park");
        Member m2 = new Member("lee");
        Member m3 = new Member("kim");
 		Member[] m = {m1, m2, m3};

 		Arrays.sort(m);
 		for(int i = 0; i < m.length; i++) {
 			System.out.println(m[i]);
 		}
 		treeSet.add("park");
 		treeSet.add("lee");
 		treeSet.add("kim");
 		
 		List<Member> list = Arrays.asList(m);
		Collections.sort(list); //이때compareTo()사용
		System.out.println(list);
 		
 		
	}
}
