void swap( char *a, char *b ) {
    // char *a = start;
    // char *b = end; 
    char temp = *a;
    *a = *b;
    *b = temp;
}
 
void cycleSpacesToBack( char *start, char *end, int num_spaces) {
    int num_elems = end - start + 1;
    char *curr = start;

    if ( num_spaces != 0) {
        for ( int i = num_spaces; i < num_elems; ++i ) {
            start[i - num_spaces] = start[i];
        }
        for ( int i = num_elems - num_spaces; i < num_elems; ++i) {
            start[i] = ' ';
        }
    }
}


/* reverses the whole word */
void reverseWord( char *start, char *end )
{
    while ( start < end ) {
        swap( start, end );
        ++start;
        --end;
    }
}

char* removeSpaces( char* s ) {
    int num_spaces = 0;
    int num_goods  = 0;
    char *first = s;
    char *last  = s;
    while (true) {

        while ( *last == ' ' || *last == '\0' ) {
            if ( *last == '\0' ) {
            
                return first - 2;
            } else {
                ++num_spaces;
                ++last;
            }
        }

        while ( *last != ' ' || *last == '\0' ) {
            if ( *last == '\0' ) {
                --last;
                ++num_goods;
             
                cycleSpacesToBack( first, last, num_spaces);

            
               
                return last - num_spaces; 
            } else {
                ++num_goods;
                ++last;
            }
        }
        --last;
        ++num_goods;
        

        cycleSpacesToBack( first, last, num_spaces);

        first += num_goods;
        last = first;
        num_spaces = 0;
        num_goods = 0;
    }

}



char* reverseWords(char* s) {
     
    char *final = removeSpaces(s);

    char *firstBadSpace = final + 1;
    while (*firstBadSpace != '\0') {
        *firstBadSpace = '\0';
        ++firstBadSpace;
    }
        
    
    reverseWord(s, final);




    char *start = s, *end = s;

    while( end <= final ) {    
        while( *end != ' ' && *end != '\0' ) {
            ++end;
        }
        reverseWord( start, end - 1 );
        end += 1;
        start = end; 
    }

    return s;

}
