// Written by Khoa Nguyen
// Solving oddities problem at https://open.kattis.com/problems/oddities/
// Dec 04, 2015


import java.util.Scanner;
import java.io.InputStream;

class oddities
{
	public static void main(String args[])
		{
			Scanner scanner = new Scanner(System.in);
			int n = scanner.nextInt();

			int[] arr = new int[n];

			for (int i = 0; i < n; i++) {
				arr[i] = scanner.nextInt();
			}

			for (int i = 0; i < n; i++) {
				if (arr[i] % 2 == 0) {
					System.out.println(arr[i] + " is even");
				}
				else {
					System.out.println(arr[i] + " is odd");
				}

			}
		}
}
