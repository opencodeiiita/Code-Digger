## Among Sussier
**Note:** The problem statement is a continuation of the task2-among-sus; you don't need to solve task 2, but it is recommended that you
read the problem statement of task 2.

As you were mapping out the room full of "Among Us," they started to [act](https://www.youtube.com/watch?v=Ru_j8oRi-rY) sussier. They started to form groups!

To help Yash even more, you've got to map out the number of groups of a certain size.

For eg, i[f](https://i.redd.it/6ikzy1k1lq6a1.jpg) there are two groups of 3 size and three groups of 1 size. Your output should look like:
```
1: 3
3: 2
```
We define an Among Us as touching another if any of its characters are adjacent to any of the other's characters. 

We call an Among Us, the part of a group if it touches any member of the group.

Also the Among Us looks like:
```
 ****
***||
*****
 *  *
```

Note: The input for this problem is present at `input.txt` 