int minNumberOperations(vector<int>& target) {
        int len = target.size();
        int ret =0;
        if (len ==0) return ret;
        ret = target[0];
        for (int i=1;i<len;++i)
            if (target[i] > target[i-1]) //only update the ret value when the numbers are listed in increasing order
                ret += target[i] - target[i-1];
        return ret;
    }
