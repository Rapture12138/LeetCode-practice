bool lemonadeChange(int* bills, int billsSize) {
    if (bills[0] == 10 || bills[0] == 20) {
        return false;
    }
    int fb = 0, tb = 0;
    for (int i = 0; i < billsSize; ++i) {
        switch (bills[i]) {
        case 5:
            fb++;
            break;
        case 10:
            if (fb > 0) {a
                tb++;
                fb--;
            } else {
                return false;
            }
            break;
        case 20:
            if (tb > 0 && fb > 0) {
                tb--;
                fb--;
            } else if (fb > 2) {
                fb -= 3;
            } else {
                return false;
            }
            break;
        }
    }
    return true;
}
