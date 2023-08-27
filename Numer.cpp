#include<iostream>
using namespace std;

int main(){
    double x = 0 ;
    double y1 = 0, y2;
    while(x<10){
        y1 = 43*x-180;
        y2 = 43*(x+1)-180;
        if(y1*y2<=0){
            break;
        }
        x++;
    }
    double i = x+1;
    while(x<i){
        y1 = 43*x-180;
		cout<<x<<xrl;
		if(y1>=0){
            break;
			}
        x = x+0.000001;
    }
    
    return 0;
}

// #include <iostream>
// #include <cmath>
// #include <iomanip>

// using namespace std;

// double sqrt4(double x) {
//     return sqrt(sqrt(x));
// }

// int main(){
//     double xl = 1.5;
//     double xr = 2.0;
//     double xm = (xl+xr)/2;
//     double fxm = xm-sqrt4(13);
//     while(fxm!=0){
//         xm = (xl+xr)/2;
//         double fxl = xl-sqrt4(13);
//         double fxr = xr-sqrt4(13);
//         fxm = xm-sqrt4(13);
//         if(fxm*fxl >=0){
//             xl = xm;
//         }
//         else{
//             xr = xm;
//         }
//         cout<<setprecision(7)<<xm<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <iomanip>

// using namespace std;

// int main(){
//     double xl = 0.02;
//     double xr = 0.03;
//     double xm = (xl+xr)/2;
//     double fxm = 43*xm - 1;
//     while(fxm!=0){
//         xm = (xl+xr)/2;
//         double fxl = 43*xl - 1;
//         double fxr = 43*xr - 1;
//         fxm = 43*xm - 1;
//         if(fxm*fxl >=0){
//             xl = xm;
//         }
//         else{
//             xr = xm;
//         }
//         cout<<setprecision(5)<<xm<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// #include <iomanip>

// using namespace std;

// int main(){
//     double x;
//     double xl = 0;
//     double xr = 10;
//     double xm = (xl+xr)/2;
//     double fxm = xm-sqrt(7);
//     while(fxm!=0){
//         xm = (xl+xr)/2;
//         double fxl = xl-sqrt(7);
//         double fxr = xr-sqrt(7);
//         fxm = xm-sqrt(7);
//         if(fxm*fxl >=0){
//             xl = xm;
//         }
//         else{
//             xr = xm;
//         }
//         cout<<setprecision(7)<<xm<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// #include <iomanip>

// using namespace std;

// double cal(double x , double n) {
//     return pow(x , 1/n);
// }

// int main(){
//     double x,n;
//     cin>>x;
//     cin>>n;
//     double xl = 0;
//     double xr = 100000;
//     double xm = (xl+xr)/2;
//     double fxm = xm-cal(x , n);
//     while(fxm!=0){
//         xm = (xl+xr)/2;
//         double fxl = xl-cal(x , n);
//         double fxr = xr-cal(x , n);
//         fxm = cal(x , n);
//         if(fxm*fxl >=0){
//             xl = xm;
//         }
//         else{
//             xr = xm;
//         }
//         cout<<setprecision(7)<<xm<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;

// double func(double x){
//     return x - pow(13 , 4);
// }

// int main(){

//     return 0;
// }