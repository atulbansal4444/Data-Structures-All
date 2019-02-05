 /*
"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem

 */


 #include<string.h>
int isPalindrome(char* A) {
    int l = 0, h = strlen(A)-1,i;
    for (i = 0; i <= h; i++)
    {
    if(A[i]>='A' && A[i]<='Z')
        A[i] = A[i]+32;
    }
    while (l < h) {
        if (!(A[l] >= 'a' && A[l] <= 'z'|| A[l] >= '0' && A[l] <= '9' ))
            l++;
        else if (!(A[h] >= 'a' && A[h] <= 'z' || A[h] >= '0' && A[h] <= '9'))
            h--;
        else if (A[l] == A[h])
            l++, h--;
        else
            return 0;
    }
    return 1;
}