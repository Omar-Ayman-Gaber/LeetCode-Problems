class Solution {
public:
    bool isPalindrome(int x) {
        bool flag = 1;
        if (x < 0)
            flag = 0;
        else {
            deque<short> dq;
            while (x != 0) {
                dq.push_front(x % 10);
                x /= 10;
            }
            for (int i = 0, j = dq.size() - 1; i <= j; i++, j--) {
                if (dq[i] != dq[j]) {
                    flag = 0;
                    break;
                }
            }
        }
        return flag;
    }
};