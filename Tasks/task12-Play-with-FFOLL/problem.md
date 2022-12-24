## Play with FFOLL.

You and your friend play with a string.
Your friend gives you a string 'S' consisting of lowercase Latin letters "f", "o" and "l" and astrik "*".

Let the number of astrik in the string S be k. Let's replace each question mark with one of the letters "f", "o" and "l". Here we can obtain all 3^k possible strings consisting only of letters "f", "o" and "l". For example, if s="fl?o?l" then we can obtain the following strings: ["flfofl", "flfool", "flfoll", "floofl", "floool", "flooll", "fllofl", "fllool", "flloll"].

Your friend asked the count of subsequences "ffoll" in all resulting strings.
Your answer may be very large, so print it modulo 1e9+7.

A subsequence of the string S is such a sequence that can be derived from the string S after removing some 
(possibly, zero) number of letters without changing the order of the remaining letters. For example, the
string "flfoll" contains one subsequences "ffoll" — a subsequence consisting of letters at positions (1,3,4,5,6).

Input
The first line of the input contains one integer n (5 <= n <= 200000) — the length of S.

The second line of the input contains the string s of length n consisting of lowercase Latin letters 
"f", "o" and "l" and astrik "*".

```
Example:

Input:
13
f*f*of**llo**

Output:
3960

Input:
11
f*of**llo**

Output:
244

```

