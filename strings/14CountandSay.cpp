class Solution {
public:
    string countAndSay(int n)
    {
        return counting(n);
    }

    string  counting(int n)
    {
        deque<int> dq;
        string  res, temp_outer_loop, temp_inner_loop;
        int count, len, i;

        if (n == 1)
            return "1";
        
        
        res = "11";

        while (--n > 1)
        {
            len = res.length();
            count = 1;
            i = 0;
            temp_outer_loop = "";
            while (i < len)
            {
                temp_inner_loop = "";
                if (i + 1 < len && res[i] == res[i + 1])
                {
                    count += 1;
                    i += 1;
                }
                else if (i + 1 == len || (i + 1 < len && res[i] != res[i + 1]))
                {
                    temp_inner_loop += count + '0';
                    temp_inner_loop += res[i];
                    count = 1;
                    i += 1;
                }
                
                temp_outer_loop += temp_inner_loop;
            }
            res = temp_outer_loop;
            // cout << "n = " << n << "\ncurrent step = " << res << "\n";
        }
        return res;
    }
};
