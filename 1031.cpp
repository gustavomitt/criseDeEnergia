#include <stdio.h>
int main ()
{
    int n, m=0,i=0,c=0,s=200, j=0,zona=1;
    while (1==1)
    {
        /* coleta os numeros de zonas */
        scanf ("%d", &n);
        printf ("%d\n", n);



        /* se 0, termina o procedimento */
        if (n==0)
        {
            break;
        }


        /* acha o menor m */
        while (1==1)
        {
            m++;
            c=0;
            s=1;
            printf ("m: %d\n", m);

            /* inicia vetor com um elemento
            para cada zona.
            valor 1 representa zona ligada e 0 desligada */
            int v[n+1];
            for (i=1;n+1>i;i++)
            {
                v[i]=1;
                printf ("%d\n", v[i]);
            }

            v[0]=0;

            /* desliga primeira zona */
            v[1]=0;

            while(s>0){

                /* busca proxima zona a ser desligada */
                c=0;
                while (c<m)
                {
                    if (zona>=n)
                    {
                        zona=1;
                    }else{
                        zona++;
                    }

                    printf ("indice atual: %d estado: %d c:%d\n", zona,v[zona],c);
                    c=c+v[zona];

                }
                 /* desliga a zona */
                v[zona]=0;

                /* calcula quantas zonas ainda estao ligadas */
                s=0;
                for (j=1;n+1>j;j++)
                {
                    s=v[j]+s;
                }
                printf("zonas ligadas: %d\n", s);

                if (s==0 && zona==13)
                {
                    printf ("melhor m: %d\n", m);
                    break;
                }
            }
        }
    }
    return 0;
}
