#include <iostream>
using namespace std;

int main() {
    int N, M, sum = 0;
    cin >> N >> M;
    for (int i = N; i <= M; i++)
        sum += i * i * i;
    cout << "Sum of cubes from " << N << " to " << M << " is: " << sum;
    return 0;
}
//Write a program that takes two integers, N and M (N = M), as input and calculates the sum of
//cubes of all numbers in the range [N, M].
//Example:
//?? Input: N = 2, M = 4
//?? Calculations:
//2^3 + 3^3 + 4^3 = 8 + 27 + 64 = 99
//?? Output:
//Sum of cubes from 2 to 4 is: 99
