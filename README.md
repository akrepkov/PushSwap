Radix Sort Basics:
Radix Sort is a non-comparative sorting algorithm that sorts numbers digit by digit, starting from the least significant digit (LSD) to the most significant digit (MSD). For simplicity, we'll use LSD Radix Sort for the Push_swap project.

Operations: 
<pre>
sa: Swap the first two elements at the top of stack A.
sb: Swap the first two elements at the top of stack B.
ss: sa and sb at the same time.
pa: Take the first element at the top of B and put it at the top of A.
pb: Take the first element at the top of A and put it at the top of B.
ra: Rotate all elements of A up by one.
rb: Rotate all elements of B up by one.
rr: ra and rb at the same time.
rra: Reverse rotate all elements of A down by one.
rrb: Reverse rotate all elements of B down by one.
rrr: rra and rrb at the same time.
</pre>

**The main idea:**
<br>
Partition the numbers based on the current bit into two groups:<br>
 - Numbers with the current bit set to 0.<br>
 - Numbers with the current bit set to 1.

Use stack B to temporarily hold elements and then move them back to stack A in the correct order.


To use Push Swap, execute the program with the stack a formatted as a list of integers, where the first argument represents the top of the stack. For example:
<pre>

$> ./push_swap 4 2 7 1
</pre>
or
<pre>
$> ARG="$(ruby -e "puts(1..100).to_a.shuffle.join('')")"; valgrind ./push_swap $ARG | wc -l
</pre>

Push Swap provides informative error messages in case of incorrect usage or invalid input parameters. If an error occurs, the program will display "Error" followed by a newline character (\n) on the standard error.

The project includes a Makefile that compiles the source files without relinking.

Global variables are not used in the program, adhering to the project requirements.
