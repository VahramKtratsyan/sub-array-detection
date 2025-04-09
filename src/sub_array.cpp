bool IsSubArray(int array[], int size_of_array, int sub_array[], int size_of_sub_array)
{
    bool res = false;
    if (size_of_sub_array > size_of_array)
        return res;

    int* j = array - 1;
    bool is_sub_array = false;
    for (int* i = sub_array; i < sub_array + size_of_sub_array; ++i)
    {
        while(j + 1 < array + size_of_array)
        {
            ++j;
            if (*i == *j)
            {
                is_sub_array = true;
                break;
            }
            else if (is_sub_array && j == array + size_of_array - 1)
                return res;
        }
    }

    if (is_sub_array)
        res = true;
    return res;
}