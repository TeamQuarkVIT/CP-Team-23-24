sort(a, a + n);
        sort(b, b + m);
        int i = 0, j = 0;
        int ans = 0;
        
        while (i < n && j < m) {
            if (i > 0 && a[i] == a[i - 1]) {
                i++;
                continue;
            }
            if (j > 0 && b[j] == b[j - 1]) {
                j++;
                continue;
            }
            if (a[i] < b[j]) {
                ans++;
                i++;
            } else if (a[i] > b[j]) {
                ans++;
                j++;
            } else {
                ans++;
                i++;
                j++;
            }
        }
        
        while (i < n) {
            if (i > 0 && a[i] == a[i - 1]) {
                i++;
                continue;
            }
            ans++;
            i++;
        }
        
        while (j < m) {
            if (j > 0 && b[j] == b[j - 1]) {
                j++;
                continue;
            }
            ans++;
            j++;
        }
        
        return ans;
