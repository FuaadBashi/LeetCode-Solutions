
bool isSubsequence(char* s, char* t) {
    
    char *sptr = s;
    char *tptr = t;

    int *counter = 0;

    if (strlen(s) == 0) {
        return true;
    }

    while ( *tptr != '\0' ) {
     
        if (*sptr == *tptr) {
            ++counter;
            ++sptr;
        }
        ++tptr;

        if ( *sptr == '\0' ){
            return true;
        }
    }

    return false;
    
}