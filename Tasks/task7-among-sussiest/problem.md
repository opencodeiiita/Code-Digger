## Among Sussiest
**Note:** The problem statement is a continuation of the task2-among-sus and task4-among-sussier; you don't need to solve task 2 or task 4, but it is recommended that you read both of the problem statements.

After you mapped the groups, the worst thing happened. Imposters started to show up. They are just the mirror Image of Regular Crewmate. 

In a group if there are `a` crewmates and `b` imposters, the one with more count will survive, i.e, max(a, b)

Now, you are required to tell how many will be left after they kill each other (both imposters and crewmates).

For eg, i[f](https://i.redd.it/6ikzy1k1lq6a1.jpg) there is a group of 3 crewmates and 2 imposters, a group of 2 imposters and 1 crewmate and a group of 1 imposter and 1 crewmate. The answer will be:
```
6 (Explanation: max(3, 2) + max(2, 1) + max(1, 1))
```
We define an Among Us as touching another if any of its characters are adjacent to any of the other's characters. 

We call an Among Us, the part of a group if it touches any member of the group.

The Crewmate looks like:
```
 ****
***||
*****
 *  *
```
And the Imposter looks like:
```
**** 
||***
*****
*  * 
```

Note: The input for this problem is present at `input.txt` 
[ඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞඞ](https://www.youtube.com/watch?v=dQw4w9WgXcQ)