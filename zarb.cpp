# include <mex.h>
# include <iostream>
int zarb (int a, int b){
int c = a*b;
return c;
}
     
void mexFunction (int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
     
{
if (nrhs !=2) mexErrMsgTxt ("Two input argument required.");
else if (nlhs>1) mexErrMsgTxt ("Too many output arguments!");
int i=mxGetScalar (prhs[0]);
int j=mxGetScalar (prhs[1]);
int z=zarb (i,j);
std::cout<<"z="<<z<<std::endl ;
}
