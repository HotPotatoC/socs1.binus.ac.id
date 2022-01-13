#include <stdio.h>
/*
Bibi also has an array containing N elements. Like Lili, Bibi wants to know the highest
frequency (most occurrences) and all elements which have that frequency.

Format Input
The first line contains an integer T stating the number of test cases.
For each test case, the first line contains a single integer N which indicate the number of element in the array. The next line contains N integers Xi (1 ≤ i ≤ N) which indicate ith element in the array.

Format Output
Consists of T lines where each line has the format “Case # X: Y”, where X is the test case number starting at 1 and Y is the highest frequency. Next line contains all elements which have that frequency sorted in ascending order.

Constraints
• 1 ≤ T ≤ 20
• 2 ≤ N ≤ 20.000
• 1 ≤ Xi ≤ 2 x 10^5

Sample Input (standard input)
    3
    8
    1 1 2 2 3 4 5 5
    8
    5 5 4 3 2 2 1 1
    4
    1 1 1 3

Sample Output (standard output)
    Case #1: 2
    1 2 5
    Case #2: 2
    1 2 5
    Case #3: 3
    1
*/
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int x[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &x[j]);
        }

        int max = 0;
        int freq_n = 0;
        for (int j = 0; j < n; j++) {
            int freq = 0;
            for (int k = 0; k < n; k++) {
                if (x[j] == x[k]) {
                    freq++;
                }
            }
            if (freq > freq_n) {
                freq_n = freq;
                max = x[j];
            }
        }

        printf("Case #%d: %d\n", i + 1, freq_n);
    }
    return 0;
}