## Task-1 Editorial

The problem is basically related to observation. 

The `ith` line of the input has the number equivalent to `2^i + 2`.

You just need to run a loop and print `2^i + 2` on the `ith` line.

```cpp
for(int i = 1; i < 10; i++){
    int k = pow(2,i);
    cout<<k+2<<"\n";
}
```