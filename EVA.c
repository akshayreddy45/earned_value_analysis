#include <stdio.h>
#include<math.h>
int main(void) {
	int bac , pv , ac , ev ;
int cv , sv ;
float cpi ,spi , csi;
printf("\n--------------------Earned value Analysis----------------------\n\n");
printf("\nEnter the total budget : ");
scanf("%d",&bac);
printf("\nEnter the planned value : ");
scanf("%d",&pv);
printf("\nEnter the actual cost : ");
scanf("%d",&ac);
printf("\nEnter the earned value : ");
scanf("%d",&ev);

cv = ev-ac;
printf("\nCost variance is : %d ",cv);
sv = ev-pv;
printf("\nSchedule Variance is : %d",sv);
cpi = (float)((float)ev/(float)ac);
printf("\nCost Performance Index : %.2f",cpi);
spi = (float)((float)ev/(float)pv);
printf("\nSchedule Performance Index: %.2f",spi);
printf("\n\nThe project is : \n\n");
if(cv>0)
{
    
    printf("\nUnder Budget");
    
}
else if(cv==0)
{
    
    printf("\nOn budget");
    
}
else
{
    printf("\nOver Budget");
    
}
	
if(sv>0)
{
    
    printf("\nAhead of Schedule");
    
}
else if(sv==0)
{
    
    printf("\nOn schedule");
    
}
else
{
    printf("\nBehind Schedule");
    
}
printf("\n\n");
	float eac , etc , vac ;
	eac = (float)((float)bac/(float)cpi);
	etc = (float)(eac-ac);
	vac = (float)(bac-eac);
	printf("\nEstimate at completion : %.2f",eac);
	printf("\nEstimate To completion : %.2f",etc);
	printf("\nVariance at completion : %.2f",vac);
	
	int x;
	scanf("%d",&x);
	
	return 0;
}

