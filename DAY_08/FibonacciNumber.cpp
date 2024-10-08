class Solution {
public:
    int fib(int n) {
        int previous = 0, current = 1;
        while (n--) {
            int next = previous + current;
            previous = current;
            current = next;
        }
        return previous;
    }
};