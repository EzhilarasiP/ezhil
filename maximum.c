+#include<stdio.h>
 +void main()
 +{
 +int a[3],max=0;
 +for(int i=0;i<3;i++)
 +{
 +scanf("%d",&a[i]);
 +if(a[i]>=max)
 +max=a[i];
 +}
 +printf("%d",max);
 +}
