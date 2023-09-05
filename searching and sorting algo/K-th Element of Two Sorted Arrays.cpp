int kthElement(int arr1[], int arr2[], int n, int m, int k){
        int count=0,flag;
        int i=0,j=0;
        for(;i<n && j<m && count!=k;j++,i++){
            if(arr1[i]<=arr2[j]){
                i++;
                count++;
                flag=0;
            }
            else if(arr1[i]>=arr2[j]){
                j++;
                count++;
                flag=1;
            }
            if(count ==k){
                if(flag)
                return arr2[j-1];
                else
                return arr1[i-1];
            }
        }
        while(i<n){
            i++;
            count++;
            if(count ==k){
                return arr1[i-1];
        }
            
        }
        while(j<n){
            j++;
            count++;
            if(count ==k){
                return arr2[j-1];
        }
    }
    return -1;
        }