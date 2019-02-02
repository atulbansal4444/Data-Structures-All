
import java.util.*;
class fibo
{
    static HashMap<Integer,Integer> m = new HashMap<>();

	static int fun(int n) {
		Integer t1 = m.get(n-1);
		Integer t2 = m.get(n-2);

		if (t1==null) {
		 	t1 = fun(n-1); 
		 }
		if (t2==null) {
		 	t2 = fun(n-2); 
		 }
		 int t3;
		 m.put(n,t1+t2);
		t3 = t1+t2;

		return t3;


	}
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		m.put(0, 1);
		m.put(1, 1);
		int n=4;
	    System.out.println(fun(n));
	}
}
