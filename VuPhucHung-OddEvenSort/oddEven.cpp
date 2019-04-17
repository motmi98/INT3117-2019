void oddEven(vector<int> &arr, int size)
{
    bool sorted = false;
    while( ! sorted )
    {
        sorted = true;
        for(int i = 1; i < size-1; i += 2)//Odd
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                sorted = false;
            }
        }

        for(int i = 0; i < size-1; i += 2)//Even
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                sorted = false;
            }
        }
    }
}