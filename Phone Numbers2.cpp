
 #include <stdio.h>
 #include <string.h>

 int main()
 {
     int n,s;
     int i,j,k,l,tma,pma,gma;
     ]={,,,,,,};
     ][];
     ][],tel[];
     while(scanf("%d",&n)!=EOF)
     {
         memset(nub,,sizeof(nub));
         tma=,pma=,gma=;
         ;l<=n;l++)
         {
             scanf("%d",&s);
             scanf("%s",nam[l]);
             ;k<=s;k++)
             {
                 ;
                 scanf("%s",tel);
                 ;i<=;i++)
                 {
                     ]])
                     {
                         fa=;
                         break;
                     }
                 }
                 ]==tel[] && tel[]==tel[]  && tel[]==tel[] && tel[]==tel[] && tel[]==tel[])
                 {
                     nub[l][]++;
                 }
                 )
                 {
                     nub[l][]++;
                 }
                 else
                 {
                     nub[l][]++;
                 }
             }
             ]>tma)
                 tma=nub[l][];
             ]>pma)
                 pma=nub[l][];
             ]>gma)
                 gma=nub[l][];
         }
         printf("If you want to call a taxi, you should call:");
         ;
         ;i<=n;i++)
         {
             ]==tma)
             {
                 )
                 {
                     printf(" %s",nam[i]);
                     flg=;
                 }
                 else
                 {
                     printf(", %s",nam[i]);
                 }
             }
         }
         printf(".\n");

         printf("If you want to order a pizza, you should call:");
         flg=;
         ;i<=n;i++)
         {
             ]==pma)
             {
                 )
                 {
                     printf(" %s",nam[i]);
                     flg=;
                 }
                 else
                 {
                     printf(", %s",nam[i]);
                 }
             }
         }
         printf(".\n");

         printf("If you want to go to a cafe with a wonderful girl, you should call:");
         flg=;
         ;i<=n;i++)
         {
             ]==gma)
             {
                 )
                 {
                     printf(" %s",nam[i]);
                     flg=;
                 }
                 else
                 {
                     printf(", %s",nam[i]);
                 }
             }
         }
         printf(".\n");
     };
 }
