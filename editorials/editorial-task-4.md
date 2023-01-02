## Task-4 Editorial

This problem involves finding the number of groups of a certain size in an array of "Among Us" characters represented by the character `*`. We consider an "Among Us" group to be a group of characters that are adjacent to each other.

First, the main function reads in the input array and converts it to a 2D vector of integers, where `1` represents an "Among Us" character and `0` represents an empty space. It then creates a map to store the size and count of each "Among Us" group.

Next, it iterates through the input array and calls the function `f()` on each character that is part of an "Among Us" group.Here `f()` is a recursive function that takes in the input array, the current row and column indices, and the `width` and `height` of the array. 

```cpp
if (i < 0 || j < 0 || i > ht || j > wt || v[i][j] != 1)
        return 0;
```cpp

This block first checks if the current indices are out of bounds or if the current character is not part of an "Among Us" group. If either of these conditions are true, it returns 0. Otherwise, it marks the current character as part of a group by setting the corresponding element in the input array to 2.


```cpp
return 1 + f(v, i + 1, j, wt, ht) + f(v, i - 1, j, wt, ht) + f(v, i, j + 1, wt, ht) + f(v, i, j - 1, wt, ht);
```cpp


This block indicates that it then returns 1 plus the number of "Among Us" characters in the group found by calling f() on the characters in the four adjacent cells i.e `up`, `down`, `left` , and `right`.

The main function divides the result of `f()` by 16 which are the total number of characters in one "Among Us" group to get the size of the group, and increments the `count` of groups with that size in the map.

Finally, the main function iterates through the map and prints out the `size` and `count` of each group.