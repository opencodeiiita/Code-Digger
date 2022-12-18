## Chota Badmaash
Chota Badmaash is the most popular student in IIIT-A; everyone wants to be in his gang, and so do you and your friend group.

He frequently carries out recruitment for his Badmaash gang; the `ith` line of the input states how many members he is going to recruit in the `ith` recruitment cycle.

You wonder what is the expected number of your friends who get into the Badmaash gang is after every successive recruitment.

It's too [cold](https://i.redd.it/qejjabgbq75a1.jpg) and you want to sleep; to avoid calculating manually, you must code this problem
as fast as you can.

Note: 
- Total number of students in IIIT-A are `200000` and the strength of your friend group is `203`
- The recruitment data is given in `input.txt`
- You need to calculate the Expectation modulo `998244353`
- `ith` line of output must state the expected number of your friends in the Badmaash Gang after the `ith` recruitment.

Sample:
Say the total number of students is `4` and the count of your friend group is `2`
The recruitment drive is as follows:
```
2
2
```

The answer would be:
```
1 Explnation: (2/4)*(2/4)*(1)  + (2/4)*(2/4)*(1) + (2/4)*(2/4)*(2)
2 Explnation: (All the students are recruited)
```

Gang Leader orz