## Task-2 Editorial

The problem is based on observation.

We are reading each line of the input file character by character.
whenever we find 4 consecutive stars(\*) together, we increment the counter variable `c` by 1
, other wise if the counter variable is 4 then we increment the answer variable by 1 i.e it is imposter.

```cpp
while (!fin.eof() ) {

    fin.get(my_character);
    if(my_character=='*') ++c;
    else{
      if(c==4) ++ans;
      c=0;
    }
  }
```

After finding the number of sus imposters we can print `sus` for each such imposter.

```cpp
while(ans--) cout<<"sus"<<endl;
```
