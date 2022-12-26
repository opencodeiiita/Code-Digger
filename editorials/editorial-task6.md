## Task-6 Editorial

To solve this problem, we need to calculate the expected value of the number of friends in the Badmaash gang after each recruitment drive. The expected value is the average outcome of a random event, and in this case, the random event is the number of friends who get selected in the recruitment drive.

To calculate the expected value, we need to know the probability of selecting certain number of friends in the recruitment drive. The probability of selecting x friends can be calculated using the combination formula: `(n C k) = n! / (k! * (n-k)!)` ( where C=choose)

The code first pre computes the values of `n! / k!` and `n! / (n-k)!` for the given values of `n` and `k`, and stores them in the vectors `pre1` and `pre2`, respectively. These values will be used later to quickly calculate the probability of selecting any number of friends from `0` to `k` or from `0` to `n-k`.

The code then reads the recruitment data from the input file and stores it in the vector `a`.

For each recruitment drive, the code calculates the expected value using the following formula:

```cpp
E = sum(x * P(x))
```

Here,
 `x`=number of friends selected in the recruitment drive 
 `P(x)` =probability of selecting `x` friends.


The probability of selecting `x` friends is calculated using the precomputed values in the vectors `pre1` and `pre2`, as follows:


```cpp
P(x) = (pre1[x] * pre2[a[i] - x]) / pre3[a[i]]

```
The expected value is then calculated by summing up the products of `x` and `P(x)` for all values of `x` from `0` to `a[i]`, and dividing the `sum` by `pre3[a[i]]`.

Finally, the expected value is printed modulo 998244353.This process is repeated for each recruitment drive.