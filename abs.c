#include <stdio.h>
main()
{
int h1,h2,m,s,hr,mi;
printf("fist hr");
scanf("%d\t%d",&h1,&m);
printf("second hr");
scanf("%d\t%d",&h2,&s);
hr=h1-h2;
mi=m-s;
printf("%d\t%d",hr,mi);
}
