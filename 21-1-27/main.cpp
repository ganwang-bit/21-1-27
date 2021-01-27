//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}
//void PrintN ( int N )
//{
//    int i;
//    for(i=1;i<=N;i++)
//    {
//        printf("%d",i);
//        if(i!=N)
//            printf("\n");
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int inch=(n/100.0/0.3048)*12;
//    int foot=inch/12;
//    inch-=foot*12;
//    printf("%d %d",foot,inch);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int inch=n/100.0/0.3048*12;
//    int foot=inch/12;
//    inch-=foot*12;
//    cout<<foot<<" "<<inch;
//    return 0;
//}
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//    int hour,minute,lost;
//    cin>>hour>>lost;
//    minute=hour%100;
//    hour/=100;
//    minute+=lost;
//    if(minute<0)
//    {
//        hour-=minute/-60+1;
//        minute+=(minute/-60+1)*60;
//    }
//    else if(minute>=60)
//    {
//        hour+=minute/60;
//        minute-=(minute/60)*60;
//    }
//    cout<<hour<<setw(2)<<setfill('0')<<minute;
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,sum=0;
//    scanf("%d",&n);
//    while(n)
//    {
//        sum*=10;
//        sum+=n%10;
//        n/=10;
//    }
//    printf("%d",sum);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n,sum=0,j=1;
//    cin>>n;
//    while(n)
//    {
//        sum+=n%16*j;
//        n/=16;
//        j*=10;
//    }
//    printf("%d",sum);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//    cout<<"------------------------------------"<<'\n'<<"\
//Province      Area(km2)   Pop.(10K)"<<'\n'<<"\
//------------------------------------"<<'\n'<<"\
//Anhui         139600.00   6461.00"<<'\n'<<"\
//Beijing        16410.54   1180.70"<<'\n'<<"\
//Chongqing      82400.00   3144.23"<<'\n'<<"\
//Shanghai        6340.50   1360.26"<<'\n'<<"\
//Zhejiang      101800.00   4894.00"<<'\n'<<"\#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//    float f1,f2;
//    int a;
//    char c;
//    cin>>f1>>a>>c>>f2;
//    cout<<c<<" "<<a<<" "<<setiosflags(ios::fixed)<<setprecision(2)<<f1<<" "<<setiosflags(ios::fixed)<<setprecision(2)<<f2;
//    return 0;
//}
//------------------------------------";
//}
