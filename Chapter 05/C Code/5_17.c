1.	#include <stdio.h>
2.	int main() {
3.	    int n;
4.	    printf("Enter a number: ");
5.	    scanf("%d", &n);
6.	    for (int i = 1; i <= n; i++) {
7.	        for (int j = 1; j <= n - i; j++) {
8.	            printf("  ");
9.	        }
10.	        for (int k = 1; k <= i; k++) {
11.	            printf("* " );
12.	        }
13.	        for (int j = 1; j < i; j++) {
14.	            printf("* ");
15.	        }
16.	        printf("\n");
17.	    }
18.	    return 0;
19.	}
