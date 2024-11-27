
int findValue(char rn) {
     switch (rn)
        {
            case 'I':
                return 1;
                break;

            case 'V':
                return 5;
                break;

            case 'X':
                return 10;
                break;

            case 'L':
                return 50;
                break;

            case 'C':
                return 100;
                break;

            case 'D':
                return 500;
                break;
            
            case 'M':
                return 1000;
                break;
                
            default:
                break;
        }
    return 0;
}


int romanToInt(char* s) {
    char s2[20] = "/";

    s = strcat(s2, s); 

    int length = 0;
    char *string = s;

  
    // Loop till the NULL character is found
    while (*string != '\0')
    {
        length++;

        // Move to the next character
        string++;
    }

    int i, sum = 0;
      

    for (i = length - 1; i > 0 ; i--){
        
        char LastLetter = s[i];
        char nextLetter = s[i - 1];


        printf( "LastLetter = %c\n", LastLetter);
        printf( "nextLetter = %c\n", nextLetter);
  
        int lastNum = findValue(LastLetter);
        int nextNum = findValue(nextLetter);
        

        sum += lastNum;

        if (lastNum > nextNum) {
            sum -= nextNum;
            i--;
        }

    }
    
    return sum;
}
