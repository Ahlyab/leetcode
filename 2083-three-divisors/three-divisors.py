class Solution:
    def isThree(self, n: int) -> bool:
        c = 2
        s = int(n/2)
        for i in range(2, s+1):
            if(n%i==0):
                c = c + 1
            if (c > 3):
                break
        
        return c == 3
        