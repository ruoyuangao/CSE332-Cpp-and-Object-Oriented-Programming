
2. When printing argv[0] the output was: Studio3.exe, which tells that argv[0] stores the name of the program.

3. My program printed each character one under the other until it reached the end of the program name:

S
t
u
d
i
o
3
.
e
x
e

4. The same can't be done using a reference because once initialized a reference remains bound to its initial object and a reference cannot point to different objects in its life time.

5. No difference.

6. Here we use the pointer to iterate through an array. We first initialize the pointer to point to the head of the array, and then we move to next address one by one. For each element in the array, we use pointer dereference to output the c-style string stored there.