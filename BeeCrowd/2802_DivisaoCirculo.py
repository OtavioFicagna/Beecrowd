import math
N = int(input())
R = (math.pow(N, 4.0) - (6.0 * math.pow(N, 3.0)) + (23.0 * math.pow(N, 2.0)) - (18.0 * N) + 24.0 ) / 24.0;
print(int(R))