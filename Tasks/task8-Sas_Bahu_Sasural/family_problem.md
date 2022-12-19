## Sas Bahu and sasural

Addy and Om( Ha wohi:) ) have decided to play the typical society game `Sas Bahu Sasural`.

The game consists of several rounds, each round is independent of each other. In each round, both players show one of the following things at the same time: Sas card, Bahu card, or Sasural card. If both players showed the same things then the round outcome is a draw. Otherwise, the following rules apply:

if one player showed Sas and the other one showed Sasural, then the player who showed Sas is considered the winner, and the other one is considered the loser;

if one player showed Sasural and the other one showed Bahu, then the player who showed Sasurals is considered the winner, and the other one is considered the loser;

if one player showed Bahu and the other one showed Sas, then the player who showed Bahu is considered the winner and, the other one is considered the loser.

Addy and Om decided to play exactly n rounds of the game described above. Addy decided to show `Sas a1` times, show `Sasural a2` times, and show `Bahu a3` times. Om decided to show `Sas b1` times, show `Sasural b2` times, and show `Bahu b3` times. Though, both Addy nor Om did not choose the sequence in which they show things. It is guaranteed that a1+a2+a3=n and b1+b2+b3=n.

Your task is to find two numbers:

the minimum number of rounds Addy can win;
the maximum number of rounds Addy can win.

Input:

The first line of the input contains one integer n (1≤n≤1e9) — the number of rounds.

The second line of the input contains three integers a1,a2, and a3 (0≤ai≤n) — the number of times addy will show Sas, Sasural, and paper, respectively. It is guaranteed that a1+a2+a3=n.

The third line of the input contains three integers b1,b2, and b3 (0≤bj≤n) — the number of times Bob will show Sas, Sasural, and Bahu, respectively. It is guaranteed that b1+b2+b3=n.

Example:

```
Input:
2
0 1 1
1 1 0

Output:
0 1

Input:
686
479 178 29
11 145 530

Output:
22 334

```
