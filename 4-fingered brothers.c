#include <stdio.h>
#include <math.h>
int basea_to_base10(int base1, int x)
{
    int y=0;
    for(int i=1; x>0; i*=base1)
    {
        y=y+((x%10)*i);
        x=x/10;
    }
    return y;
}
int base10_to_baseb(int base2, int y)
{
    int z=0;
    for(int i=1; y!=0; i*=10)
    {
        z=z+(y%base2)*i;
        y=y/base2;

    }
    return z;
}
int main()
{
    int base1,base2,x;
    scanf("%d %d\n%d", &base1, &base2, &x);
    int y=basea_to_base10(base1,x);
    int z=base10_to_baseb(base2,y);
    int tedad=0, temp1, temp2=z;
    while(temp2>0)
    {
        temp1=z%10;
        temp2=temp2/10;
        tedad++;
    }
    if((tedad%2)!= 0)
    {
        z=z*10;
        tedad++;
    }
    int z1=0;
    for(int j=0; j<tedad/2; j++)
    {
        z1=z1+(z%10)*(pow(10,j));
        z=z/10;
    }
    z=basea_to_base10(base2,z);
    z1=basea_to_base10(base2,z1);
    int answer=z+z1;
    answer=base10_to_baseb(base2,answer);
    printf("%d", answer);

return 0;
}
// random change
