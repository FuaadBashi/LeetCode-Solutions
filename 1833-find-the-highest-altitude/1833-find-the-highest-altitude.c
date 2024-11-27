int largestAltitude(int* gain, int n) {
    
    int max = 0;
    int currpeak = 0;

    for (int i = 0; i < n; ++i){
        currpeak += gain[i];
        if ( currpeak > max) {
            max = currpeak;
        }
    }
    return max;
}