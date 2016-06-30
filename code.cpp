(1)计数器count置1，另c=A[1];
 (2)从A[2]开始向后扫描，for j=2 to n
             若a[j]与c相等，则count++;
             若a[j]与c不等，则count—
             若count==0,则对A[j+1...n]寻找多数元素候选者。
             
             
 int Candidate(int A[],int m ,int n)  
    {//寻找A[m...n]中多数元素候选者
     c=A[m];count=1;
     for(j=m+1;j<n&&count>0)
     {
        if(A[j]==c)
            count++
        else count--;
        }
        if(j==n)return  c;
        else return canditate(A, j+1 , n); //对则对A[j+1...n]寻找多数元素候 选者。
     }
