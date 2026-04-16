public class Armstrong_num {
    public Armstrong_num() {
    }

    static void main() {
        for(int i = 0; i < 1000; ++i) {
            if (isArmstrong(i)) {
                System.out.print(i + " ");
            }
        }

    }

    static boolean isArmstrong(int num) {
        int temp = num;

        int ans;
        for(ans = 0; num > 0; num /= 10) {
            int rem = num % 10;
            ans += rem * rem * rem;
        }

        return ans == temp;
    }
}

