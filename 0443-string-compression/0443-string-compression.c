
int intToAscii(int number) {
   return '0' + number;
}

int compress(char* chars, int size) {

    // char *newchars = (char*) calloc(size * 2,sizeof(char));

    int count = 0;
    int counter = 1;
    int index = 0;

    if ( size == 1){
        return 1;
    }
    
    for (int i = 0, j; i < size; ++i){

        char first = chars[i];
        char second = '\0';

        if (i < size - 1){
            j = i + 1;
            second = chars[j];
        }
       
      
        if ( first == second ) {
            ++counter;
        } else if (first != second || second == '\0') {
            chars[index++] = chars[i];
            ++count;
            if ( counter > 1 && counter < 10 ){
                int num = intToAscii(counter);
                chars[index++] = num;
                count += 1;

            } else if (counter > 9 && counter < 100) {
                // counter += 1;
                int firstdigi = (counter / 10);
                int seconddigi = (counter % 10);

                char num1 = intToAscii(firstdigi);
                char num2 = intToAscii(seconddigi);
                chars[index++] = num1;
                chars[index++] = num2;
                count += 2;
            } else if (counter > 99 && counter < 1000) {
                int firstdigi = (counter / 100);
                int seconddigi = ((counter / 10) % 10);
                int thirddigi = (counter % 10);

                char num1 = intToAscii(firstdigi);
                char num2 = intToAscii(seconddigi);
                char num3 = intToAscii(thirddigi);
                chars[index++] = num1;
                chars[index++] = num2;
                chars[index++] = num3;
                count += 3;
            } else if (counter > 999 && counter < 10000) {
                int firstdigi = (counter / 1000);
                int seconddigi = ((counter / 100) % 10);
                int thirddigi = ((counter / 10) % 10);
                int forthdigi = (counter % 10);

                char num1 = intToAscii(firstdigi);
                char num2 = intToAscii(seconddigi);
                char num3 = intToAscii(thirddigi);
                char num4 = intToAscii(forthdigi);
                chars[index++] = num1;
                chars[index++] = num2;
                chars[index++] = num3;
                chars[index++] = num4;
                count += 4;
            }
            counter = 1;
        }
        
    }
    
    // for(int m = 0; chars[m]!='\0'; m++) {
    //         count++;
    // }

   printf("\n[");
    for(int k = 0; k < count; ++k){
        printf("%c", chars[k]);
    }
    printf("]\n");


    return count;
}