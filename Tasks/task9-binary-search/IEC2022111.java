import java.util.*;

public class test {
    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        test ob=new test();
        Scanner sc=new Scanner(System.in);
        try {
            System.out.println("Enter the number of times you want to execute the code: ");
            int t = sc.nextInt();
            ob.check(t);

            while (t-- > 0) {
                System.out.println("Enter the size of the array: ");
                int n = sc.nextInt();
                ob.check(n);
                int arr[] = new int[n];

                System.out.println("Enter the elements of the array: ");
                for (int i = 0; i < n; i++)
                  arr[i] = sc.nextInt();

                ob.sort(arr);

                System.out.println("Enter the number you want to search: ");
                int num = sc.nextInt();
                ob.check(num);
                System.out.println();
                ob.search(num,arr);
            }

        }
        catch(Exception e)
        {
            System.out.println("An unexpected exception occurred as the program encountered some fall through.");
        }
    }
    void check(int n)
    {
        if (n < 0) {
            throw new ArithmeticException("Access denied - You should have entered an integer value of the correct requirement");
        }
    }
    void sort(int a[])
    {
        int l=a.length;
        for (int i = 0; i < l - 1; i++) {
            for (int j = 0; j < l - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }
    void search(int n, int a[])
    {
        int u = 0, l = a.length, pos = -1;
        while (u < l) {
            int mid = u + ((l - u) / 2);
            if (n == a[mid])
                pos = mid;
            if (a[mid] < n) {
                u = mid + 1;
            } else {
                l = mid;
            }
        }
        if (pos == -1)
            System.out.println("Entered number was not found");
        else
            System.out.println("Entered number is present at index " + (pos + 1) + " of the entered array");
    }
}
