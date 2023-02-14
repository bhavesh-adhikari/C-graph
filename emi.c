#include<stdio.h>
#include<math.h>
int main()
{   double new_p,interest,paid_p;
    double p;
    double r;
    double t;
    printf("enter principal rate time(years) : ");
    scanf("%lf%lf%lf",&p,&r,&t);
    t = t*12;
    r = r/100/12;
    double e = p*r*pow((r+1),t)/(pow((r+1),t)-1);
    printf("\n monthly EMI = %lf\n\n",e);
    printf("months\t principal\t  emi\t\tinterest\tpaid.principal\tnew.principal\n\n");
    for (int i = 1; i <=t ; i++)
    {
        interest = p*r;
        paid_p = e - interest;
        new_p = p - paid_p;
        printf("%d.\t%lf\t%lf\t%lf\t%lf\t%lf\n",i,p,e,interest,paid_p,new_p);
        p = new_p;
    }
    return 0;
    
}