def compute_exponential_bell_polynomial(n, k, x_values):
    B = [[0] * (k + 1) for _ in range(n + 1)]
    B[0][0] = 1

    for i in range(1, n + 1):
        for j in range(k + 1):
            B[i][j] = 0
            for l in range(j + 1):
                binomial_coefficient = factorial(j) // (factorial(l) * factorial(j - l))
                B[i][j] += binomial_coefficient * B[i - 1][l] * x_values[j - l]

    return B[n][k]

# 辅助函数，计算阶乘
def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

# 示例用法
n = 6
k = 2
x_values = [1, 1, 1, 1,1,1]

result = compute_exponential_bell_polynomial(n, k, x_values)
print(result)


