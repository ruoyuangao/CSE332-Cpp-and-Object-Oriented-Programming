Question 2
If we provide a index larger than the size of the vector, we will reach an out of range error. To solve the issue, we can throw an out_of_range exception. If there is no exception caught, we will continue run the rest of our program.

Question 3
We should first catch the out_of_range error, and then catch the logic_error. Otherwise, we will never catch out_of_range error, since out_of_range error inherit the logic_error.
