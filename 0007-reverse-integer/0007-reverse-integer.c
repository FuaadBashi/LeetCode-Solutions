int reverse(int x) {
    int ret = 0;
    bool isnegative = false;

    if (x == INT32_MIN) {
        return 0;
    }

    if (x < 0) {
        x *= -1;
        isnegative = true;
    }

    int maxtemp = ((INT32_MAX) - (x % 10)) / 10;
    int mintemp = ((INT32_MIN) + (x % 10)) / 10;


    while (x > 0) {
    

        if (maxtemp + 1 <= ret) {
            return ret = 0;
        }
        if (mintemp - 1 >= ret) {
            return ret = 0;
        }
        ret *= 10;
        ret += x % 10;
        x /= 10;
    }

    return ret = (isnegative) ? ret * -1 : ret;
}