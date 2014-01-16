import java.util.*;

public class naive
{
    public static final void main(String args[]) {
        int N = 25000;
        int count = 0;
        int i = 1;

        while (count <= N) {
            if (isPrime(i)) {
                count++;
            }

            if (count == N) {
                System.console().writer().println(i);
                break;
            }

            i++;
        }
    }

    private static final boolean isPrime(int n) {
        int i;
        for (i = 2; i < n; i++) {
            if (n%i == 0) {
                return false;
            }
        }
        return true;
    }
}
