# Get array
arr = [2, 4, -3, 5, 1]
n = len(arr)

# Build prefix sum array
prefix_sum = [0] * (n+1)
for i in range(1, n+1):
    prefix_sum[i] = prefix_sum[i-1] + arr[i-1]

# Query sum of subarray [2, 4] to test
L, R = 2, 4
result = prefix_sum[R] - prefix_sum[L-1]
print(=result)
