Here is the implementation of the function which checks if the second given array is a sub-array of the first one.
The function prototype could looks like this:
bool is_sub_array(int array[], int size1, int sub_array[], int size2);

Examples:
is_sub_array({1,2,3,4}, 4, {2, 3}, 2) -> true
is_sub_array({1,2,3,4}, 4, {5, 6}, 2) -> false

Implementation is done using pointers and TDD approach.