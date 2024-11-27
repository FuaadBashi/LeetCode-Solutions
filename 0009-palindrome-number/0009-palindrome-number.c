bool isPalindrome(int x) {
    
    int count = 0; /* digit position */
    int n = x;
    int flag = 0;

    if (x < 0) {
        return false;
    }

    if (x == 0) {
        return true;
    }

    while (n != 0)
    {
        n /= 10;
        count++;
    }

    int numberArray[count];

    int c = 0;    
    n = x;

    /* extract each digit */
    while (n != 0)
    {
        numberArray[c] = n % 10;
        n /= 10;
        c++;
    }

    int j = 0; 

    for (int k = count - 1; k >= j; k--) {

        printf("THIS IS K = %d\n, THIS IS j = %d\n", k, j);

        int first = numberArray[j];
        int last = numberArray[k];

        printf("first = %d, last = %d\n", first, last);

        if (first == last) {
            j++;
            flag++;
        }
        else {
            return false;
        }
    }

    bool isPali;
    return isPali = (flag > 0) ? true : false;
}