/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	static HashMap<Integer,Integer> m = new HashMap<>();

	static int f(int n) {
		Integer t1 = m.get(n-1);
		Integer t2 = m.get(n-3);

		if (t1==null) {
		 	t1 = f(n-1); 
		 }
		if (t2==null) {
		 	t2 = f(n-3); 
		 }
		 int t3;
		 m.put(n,t1+t2);
		t3 = t1+t2;

		return t3;


	}
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		//m.put(0, 0);
		m.put(1, 1);
		m.put(2, 1);
		m.put(3, 2);
		int n=4;
	    System.out.println(f(n) );
	}
}
