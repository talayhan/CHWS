/*################################################################*/
/* HW06_101044044_part5.c                                         */
/* ----------------------                                         */
/* Created on 05.05.2012 by Samet Sait Talayhan                   */
/*                                                                */
/* Description                                                    */
/* ----------------------                                         */
/* Negatif olmayan n ve k degerleri icin, verilen fonksiyonun     */
/* n ve k degerlerini iterative olarak hesaplar.                  */                 
/*################################################################*/

/*----------------------------------------------------------------*/
/*                           Includes                             */
/*----------------------------------------------------------------*/
#include <stdio.h>

/*################################################################*/
/* int main()                                                     */
/* ----------                                                     */
/* Return                                                         */
/* ----------                                                     */
/*0 on success                                                    */
/*################################################################*/
int main()
{
    int n,k;
    int i,j,m;
    int sonuc,NF=1,x=1,RF=1;

    printf("bir N sayisi giriniz:");
    scanf("%d", &n);
    printf("bir K sayisi giriniz:");
    scanf("%d", &k); 
    for(i=1;i<=n;i++)
    { 
        NF=NF*i;
    }
    for(j=1;j<=(n-k);j++)
    { 
        x=x*j;
    }
    for(m=1;m<=k;m++)
    {
        RF=RF*m;
    }
    sonuc=NF/(x*RF);
    printf("Sonuc = %d \n", sonuc);

    return 0;
}
/*################################################################*/
/*                  End of HW06_101044044_part1.c                 */
/*################################################################*/
