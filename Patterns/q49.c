#include<stdio.h>
void main()
{
    int n=15;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n||i+j==16||i==j||i+j==9||j-i==7||i-j==7||i+j==23)
            {
            printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}


/*				OUTPUT

				 * * * * * * * * * * * * * * *
				 * *         *   *         * *
				 *   *     *       *     *   *
				 *     * *           * *     *
				 *     * *           * *     *
				 *   *     *       *     *   *
				 * *         *   *         * *
				 *             *             *
				 * *         *   *         * *
				 *   *     *       *     *   *
				 *     * *           * *     *
				 *     * *           * *     *
				 *   *     *       *     *   *
				 * *         *   *         * *
				 * * * * * * * * * * * * * * *
 
 */