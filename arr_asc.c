 #include <stdio.h>
    int main()
    {
        int i, j, a, n, number[30];
        printf("Enter the value of N \n");    //the size of array upto which operation will be performed
        scanf("%d", &n);
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);              //this loop is for entering the elements to the array.
        for (i = 0; i < n; ++i)               //this loop is for the first element to be compared.i
        {
            for (j = i+1;j<n;++j)       //this loop is for the second element to be compared.
            {
                if (number[i]>number[j])     // condition
                {
                    a = number[i];
                    number[i]=number[j];
                    number[j]=a; 
                }
           }
        }
        printf("The numbers arranged in ascending order are given below \n");
        for (i =0;i<n;++i)               //output the elements after the operation.
        printf("%d\n",number[i]);
        return 0;
    }