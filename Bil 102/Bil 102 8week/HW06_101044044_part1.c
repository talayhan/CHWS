/*################################################################*/
/* HW06_101044044_part1.c                                         */
/* ----------------------                                         */
/* Created on 05.05.2012 by Samet Sait Talayhan                   */
/*                                                                */
/* Description                                                    */
/* ----------------------                                         */
/* Negatif olmayan n ve k degerleri icin, verilen fonksiyonun     */
/* n ve k degerlerini fonksiyonda hesaplar.                       */                 
/*################################################################*/

/*----------------------------------------------------------------*/
/*                           Includes                             */
/*----------------------------------------------------------------*/
#include <stdio.h>

/*----------------------------------------------------------------*/
/*                     Function Prototypes                        */
/*----------------------------------------------------------------*/
int foo(int n, int k);

/*################################################################*/
/* int main()                                                     */
/* ----------                                                     */
/* Return                                                         */
/* ----------                                                     */
/*0 on success                                                    */
/*################################################################*/
int main()
{
    int k,result,n;
    printf("N yi girin >");
    scanf("%d",&n);
    printf("\nK yi girin >");
    scanf("%d",&k);
    result=foo(n,k);
    printf("\nThe value of foo is %d\n",result);
    
    return 0;
}
/*----------------------------------------------------------------*/
/*               Function Implementations                         */
/*----------------------------------------------------------------*/
/* Function foo                                                   */
/*--------------------                                            */
/* Verilen fonksiyonu negatif olmayan n ve k degerleri icin       */
/* recursive olarak hesaplar.                                     */
/*----------------------------------------------------------------*/
int foo(int n, int k)
{
	if (n>0 && k>0)
	{
		return( foo(n-1,k-1) + foo(n-1,k) );
	}
	if(n>=0 && k==0)
	{
		return 1;
	}
	if (n==0 && k>0)
	{
		return 0;
	}
}
/*################################################################*/
/*                  End of HW06_101044044_part1.c                 */
/*################################################################*/
