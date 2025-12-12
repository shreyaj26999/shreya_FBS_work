 /*Print a hollow square with diagonal pattern 
Input: n = 5 
Output: 
*  *  *  *  * 
*  *        * 
*     *     *
*        *  *
*  *  *  *  *
*/

void main()
{
	int n = 5;
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			if(i == 1 || i == n || j == 1 || j == n || j == 3 && i == j)
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}	
		}
		printf("\n");
	}
}