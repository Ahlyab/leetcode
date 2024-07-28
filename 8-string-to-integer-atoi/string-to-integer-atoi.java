class Solution {
    public int myAtoi(String s) {

        s = s.trim();

        if(s.length() == 0) {
            return 0;
        }

        s = s.split(" ")[0];
        int sign = 1;
        long ans = 0;
        int i = 0;

        if (s.charAt(0) == '-')
        {
                sign = -1;
                ++i;
        }else if(s.charAt(0) == '+') {++i;}
        
        while(i < s.length()) {
            

            if (s.charAt(i) >= '0' && s.charAt(i) <= '9')
            {
                ans = ans * 10 + (s.charAt(i) - '0');
                System.out.println(ans);
                if (ans > Integer.MAX_VALUE && sign == -1)  
                {

                    return Integer.MIN_VALUE;
                }
                else if (ans > Integer.MAX_VALUE && sign == 1)
                {

                    return Integer.MAX_VALUE;
                }
                i++;
            }
            else
            {

                return (int)ans * sign;
            }
        }
        return (int)ans * sign;
    }
       
}