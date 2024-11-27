
int maxArea(int* height, int heightSize) {

    int maxArea    = 0;
    int currArea   = 0;

    int *leftIte   = height;
    int *rightIte  = height + (heightSize - 1) ;;


    while ( true ) {

       
        int w  = (int ) (rightIte - leftIte);
        int h;

        if ( *leftIte < *rightIte ) {
            h = *leftIte;
            currArea   = h * w;
            if ( currArea > maxArea ) {
                maxArea = currArea;
            }
            ++leftIte;
        
            
        } else {
            h = *rightIte;
            currArea   = h * w;
            if ( currArea > maxArea ) {
                maxArea = currArea;
            }
            --rightIte;
        }

        if ( rightIte <= leftIte ) {
            break;
        }
    }


    return maxArea;
}
