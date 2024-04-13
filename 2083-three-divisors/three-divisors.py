class Solution:
    def isThree(self, n: int) -> bool:
        counter = 2
        half = int(n/2)
        for i in range(2, half+1):
            if(n%i==0):
                counter = counter + 1
            
        if(counter==3):
            return True
        else:
            return False
        
        