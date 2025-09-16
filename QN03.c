#include<stdio.h>
int main(){
	int x=10,y=15,z=12;
	printf("Let x = %d\t y = %d\t\t z = %d\n ",x,y,z);
	printf("The Given Expression is x + y * z > 10 && x - z < y || !(y %% z)\n\n");
	int fstep = y*z;
	printf("The first step would  be y * z  = %d\n\n",fstep);
	int Sstep = x + fstep;
	printf("The second is adding x + (y*z) =  %d\n\n",Sstep);
	int Tstep= Sstep > 10;
	printf("THe third step is comparision (x+y*z) > 10 = %d\n\n",Tstep);
	int Fstep = x-z;
	printf("The fourth step x-z = %d\n\n",Fstep);
	int fistep = Fstep < y;
	printf("The fifth step is comparision (x-z) < y = %d\n\n",fistep);
	int sstep = Tstep && fistep;
	printf("The sixth step is (x+y*z>10)&&(x-z<y) = %d\n\n",sstep);
	int sevstep = y % z;
	printf("The seventh step is y %% z = %d\n\n",sevstep);
	int Estep = !(sevstep);
	printf("The next is Reverse the answer (!)  of (y%%z) = %d\n\n",Estep);
	int Lstep= sstep || Estep;
	printf("The last step is (x+y*z>10 && x-z<y) || !(y%%z) = %d\n\n",Lstep);
	printf("The Final value is %d",Lstep);
	return 0;
	
	
}
