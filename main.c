#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Turkish");
    float i, j, m=0;
    int k, l, n;
    printf("Bankaya yatırılacak para miktarını giriniz(İlk Yılın ayları)(Aylık): ");
    scanf("%f", &i);
    printf("Faiz oranının yüzdeliğini giriniz(Senelik): %%");
    scanf("%f", &j);
    printf("Paranızın bankada duracağı süreyi giriniz(Yıl): ");
    scanf("%d", &k);
    printf("\n");
    for (l=0; l<k; l++)
    {
        m=m+i*12;
        i=i+(i*j/100);
        printf("%d.yılda aylık yatırılacak miktar: %f\n",l+1, i);
    }
    printf("\n");
    printf("%d yıl içerisinde bankada biriken para miktarı %f dir", k, m);
    printf("\n");
    return 0;
}