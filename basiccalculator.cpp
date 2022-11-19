#include<iostream>
using namespace std;

double sin(double x){
    double num,den,sum,term;
    int i=2;
    num=x;
    den=1;
    sum=x;
  do{
    num=num*x*x;
    den=-den*i*(i+1);
    term=num/den;
    sum=sum+term;
    i=i+2;
  }while(term<-0.000001 || term>0.000001);
  return sum;
}

double cos(double x){
    double num,den,sum,term;
    int i=1;
    num=1;
    den=1;
    sum=1;
   do{
    num=num*x*x;
    den=-den*i*(i+1);
    term=num/den;
    sum=sum+term;
    i=i+2;
   } while(term<-0.000001 || term>0.000001);
return sum;
}

double tan(double x){
    double num,den,sum;
    num=sin(x);
    den=cos(x);
    sum=num/den;
    return sum;    
}

double cot(double x){
    double sum;
    sum=1/tan(x);
    return sum;
}

double sec(double x){
    double sum;
    sum=1/cos(x);
    return sum;
}

double cosec(double x){
    double sum;
    sum=1/sin(x);
    return sum;
}


double exp(double a,int b){
    double e=1;
    while(b>=1){
      e=e*a;
      b--;  
    }
    return e;
}


double arithmetic(double a,double b,double d, char c){
    cout<<"Enter your first number:";
    cin>>a;
    cout<<"Enter your operator:";
    cin>>c;
    cout<<"Enter your second number:";
    cin>>b;
    if(c=='+'){
        d=a+b;
        cout<<a<<c<<b<<"="<<d;
      
    }
    else if(c=='-'){
        d=a-b;
        cout<<a<<c<<b<<"="<<d;
      
    }
    else if(c=='*'){
        d=a*b;
        cout<<a<<c<<b<<"="<<d;
      
    }
    else if(c=='/'){
        d=a/b;
        cout<<a<<c<<b<<"="<<d;
      
    }  
    else if(c=='^'){    
        cout<<a<<c<<b<<"="<<exp(a,b);
    }
    else{
        cout<<"Invalid Operator!!!";
    }
    return d;
}


double trigonometry(double l,char m, double degrees, double radians,double x ){
     cout<<"What trigonometric function you need to use?"<<endl;
     cout<<"(1)sin\n(2)cos\n(3)tan\n(4)cot\n(5)sec\n(6)cosec"<<endl;
     cin>>l;
     cout<<"Do you need to enter the value in:\n(a)degrees\n(b)radians"<<endl;
     cin>>m;
     if(m=='a'){
        cout<<"Enter your angle in degrees:"<<endl;
        cin>>degrees;
        int w=degrees/360;
        degrees=degrees-(w*360);
        x=(degrees*3.141592)/180;
     }
     else if(m=='b'){
        cout<<"Enter your angle in radians"<<endl;
        cin>>radians;
        x=radians;
     }
     if(l==1){
        //sin function
        cout<<sin(x)<<endl;

     }
     else if(l==2){
        //cos function
        cout<<cos(x)<<endl;
     }
     else if(l==3){
        //tan function
        cout<<tan(x)<<endl;
     }
     else if(l==4){
        //cot function
        cout<<cot(x)<<endl;
     }
     else if(l==5){
        //sec function
        cout<<sec(x)<<endl;
     }
     else if(l==6){
        //cosec function
        cout<<cosec(x)<<endl;
     }

}


int main(){
    double a,b,d,l,degrees,radians,x;
    char z,c,m;
    cout<<"What type of calculation you need to do?"<<endl;
    cout<<"(1) Arithmetic"<<endl;
    cout<<"(2) Trigonometric"<<endl;
    int y;
    cin>>y;
    if(y==1){
        arithmetic(a,b,d,c);    
    }
    else if(y==2){
        trigonometry(l,m,degrees,radians,x);
    }
    cout<<"Do you want to use it again(y/n)";
    cin>>z;
    if(z=='y'){
        main();
    }
    else if(z=='n'){
        cout<<"Thank You!!!";
    }
    return 0;
}
