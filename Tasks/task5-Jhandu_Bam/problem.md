## The Jhandu Bam

On a platform, there are n stages, and at each i-th stage, there is a Jhandu bam with power ai.
By applying the Jhandu Bam, you go from the `i` to `i+ai` stages. You may also go back `one step` without using Jhandu Bam.
But you did not go forward without using Jhandu Bam's power.

So you have a choice to i to i+ai or go one step back without using Jhandu Bam.

Your task is to find if there is any way to reach the nth stage from the a1 stage. You are initially in the first stage.

You are not allowed to leave the platform.

Input:

The first line contains one integer t (1<=t<=1000)—the number of test cases.

The first line of each test case contains a single integer n (1<=n<=1e5)—the size of the permutation.

The second line contains n integers a1, a2,..., and an (-1e9<=ai<=1e9), which is the power of the eighth stage, Jhandu Bam. 

Example:

```
Input
2
4
3 0 2 -3
5
0 2 4 3 1

Output:
YES
NO 

```
