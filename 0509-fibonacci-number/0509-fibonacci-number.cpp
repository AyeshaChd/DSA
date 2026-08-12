class Solution {
  int f(int n)
  {
    if(n<=1) return n;
    int last=f(n-1);
    int second_last=f(n-2);
    return (last+second_last);
  }
public:
    int fib(int n) {
      int result=  f(n);
      return result;
    }
};