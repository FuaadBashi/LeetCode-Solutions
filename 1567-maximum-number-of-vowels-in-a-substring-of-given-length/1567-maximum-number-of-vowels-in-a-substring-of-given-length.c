bool isVowel( char c ) {
    switch ( c ) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}



int maxVowels( char *s, int k) {
    if (k == 0) return 0;
    
    char *left  = s;
    char *right = s + k - 1;     
    int maxNumVowels = 0;
    int currNumVowels = 0;
    bool lastWasVowel = false;
    char *last = left;
    
    
    // inital setup loop for first sliding window
    while ( left <= right) {
        bool currIsVowel = isVowel(*left);
        if (last == left) {
            lastWasVowel = currIsVowel;
        }
        if ( currIsVowel ) {
            ++currNumVowels;
        }
        ++left;
    }

    maxNumVowels = currNumVowels;

    left = s;

    ++left;
    ++right;

    while ( *right != '\0' ) {
        
        
        bool newRight = isVowel(*right);
        int delta = 0;
        lastWasVowel = isVowel(*last);
        if (lastWasVowel != newRight) {
            delta = ( newRight ) ? 1 : -1; 
        }
        currNumVowels += delta;

        if (currNumVowels == k) {
            return k;
        } else if ( currNumVowels > maxNumVowels ) {
            maxNumVowels = currNumVowels;
        }

        last = left;
        ++left;
        ++right;
    }

    return maxNumVowels;
}
