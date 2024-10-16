import java.util.Scanner;

class PlusOne {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int digits[] = new int[4];

        System.out.println("Enter arrays: ");
        for (int i = 0; i < digits.length; i++) {
            digits[i] = sc.nextInt();
        }

        // Perform the plus-one operation
        int n = digits.length;
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                break;
            } else {
                digits[i] = 0;
            }
        }

        // Check if the first digit is 0, which means we need an additional digit
        if (digits[0] == 0) {
            int[] newDigits = new int[n + 1];
            newDigits[0] = 1;
            for (int i = 1; i <= n; i++) {
                newDigits[i] = digits[i - 1];
            }
            digits = newDigits;
        }

        // Print the result
        System.out.println("Resulting array: ");
        for (int digit : digits) {
            System.out.print(digit + " ");
        }

        sc.close();
    }
}
