public class PrefixSum {
    public static void main(String[] args) {
        // Get original array
        int[] arr = {2, 4, -3, 5, 1};
        int n = arr.length;

        // Build prefix sum array
        int[] prefixSum = new int[n+1];
        for (int i=1; i<=n; i++) {
            prefixSum[i] = prefixSum[i-1] + arr[i-1];
        }

        // Query sum of subarray [2, 4]
        int L = 2, R = 4;
        int result = prefixSum[R] - prefixSum[L-1];
        System.out.println(result);
    }
}
