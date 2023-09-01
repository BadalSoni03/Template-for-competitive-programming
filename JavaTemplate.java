import java.util.*;
import java.io.*;

// For codechef remove public 
public class MainClass {
	public static void main(String[] args) throws java.lang.Exception {
		Solution instance = new Solution();
	}
}
class Solution {
	Solution() {
		// For codechef check (!= null) condition
		if(System.getProperty("ONLINE_JUDGE") == null) fileIO();
		else consoleIO();

		int t = 1;
		// t = scn.nextInt(); 

		this.preProcess();
		for(int testCase = 1 ; testCase <= t ; testCase++) {
			this.getMeTheSolution(testCase);
		}

		if(local == true) {
			endTime = System.currentTimeMillis();
			cerr.println("[Finished in : " + (endTime - startTime) + " ms]");
			cerr.flush();
			cerr.close();
		}
		pw.flush();
		pw.close();
	}
	// Dont use Arrays.sort() as it used quick sort in the worst case (O(N ^ 2) running time which will give TLE)
	/*****************************************************************************************


	*/
	

	private void getMeTheSolution(int testCase) {
		
	}

	private void preProcess() {}

	/****************************************************************************************/
	private void lend() {pw.println();}
	private void YES() {pw.println("YES");}
	private void NO() {pw.println("NO");}
	private void Yes() {pw.println("Yes");}
	private void No() {pw.println("No");}
	private void yes() {pw.println("yes");}
	private void no() {pw.println("no");}
	private void printArray(int arr[]) {for(int i : arr) pw.print(i + " ");lend();}
	private int HCF(int a , int b) {return b == 0 ? a : HCF(b , a % b);}
	private int LCM(int a , int b) {int hcf = HCF(a , b);return (a * b) / hcf;}
	private int max(int a , int b) {return (a > b) ? a : b;}
	private int min(int a , int b) {return (a < b) ? a : b;}
	private int accumulate(int arr[]) {int sum = 0;for(int i : arr) sum += i; return sum;}
	private final long mod = 1000000007;
	private final int inf = Integer.MAX_VALUE;
	private final int neginf = Integer.MIN_VALUE;
	private FastReader scn;
	private PrintWriter pw;
	private PrintWriter cerr;
	private boolean local = false;
	private long startTime , endTime;
	private void fileIO() {
		local = true;
		startTime = System.currentTimeMillis();
		try {
			scn = new FastReader("inputf.in");
			pw = new PrintWriter(new BufferedWriter(new FileWriter("outputf.in")));
			cerr = new PrintWriter(new BufferedWriter(new FileWriter("error.txt")));
		} catch(IOException e) {
			e.printStackTrace();
		}
	}
	private void consoleIO() {
		local = false;
		scn = new FastReader();
		pw = new PrintWriter(System.out);		
	}
	private void reverse(int arr[]) {
		int start = 0 , end = arr.length - 1;
		while (start <= end) {
			int tmp = arr[start];
			arr[start] = arr[end];
			arr[end] = tmp;
			start++;
			end--;
		}
	}


	/**********************************INPUT STARTS HERE************************************/

	private class FastReader extends Throwable {
		private BufferedReader br;
		private StringTokenizer st;
		FastReader() {
			br = new BufferedReader(new InputStreamReader(System.in));
		}
		FastReader(String FileName) {
			try {
				br = new BufferedReader(new FileReader(FileName));
			} catch(FileNotFoundException e) {
				e.printStackTrace();
			}
		}
		String next() {
			while(st == null || !st.hasMoreElements()) {
				try {st = new StringTokenizer(br.readLine());} 
				catch(IOException e) {e.printStackTrace();}
			}
			return st.nextToken();
		}
		int nextInt() {	return Integer.parseInt(next());}
		long nextLong() {return Long.parseLong(next());}
		double nextDouble() {return Double.parseDouble(next());}
		char nextChar() {return next().charAt(0);}
		String nextLine() {
			String str = new String("");
			try {
				str = br.readLine();
			} catch(IOException e) {
				e.printStackTrace();
			}
			return str;
		}
		int[] readIntArray(int n) {
			int arr[] = new int[n];
			for (int i = 0 ; i < n ; i++) arr[i] = nextInt();
			return arr;
		}	
		long[] readLongArray(int n) {
			long arr[] = new long[n];
			for (int i = 0 ; i < n ; i++) arr[i] = nextLong();
			return arr;
		}
		double[] readDoubleArray(int n) {
			double arr[] = new double[n];
			for (int i = 0 ; i < n ; i++) arr[i] = nextDouble();
			return arr;			
		}
		String[] readStringArray(int n) {
			String arr[] = new String[n];
			for (int i = 0 ; i < n ; i++) arr[i] = next();
			return arr;
		}
		char[] readCharArray(int n) {
			char arr[] = new char[n];
			for (int i = 0 ; i < n ; i++) arr[i] = nextChar();
			return arr;
		}
	}
}
