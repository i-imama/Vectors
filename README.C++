/* # Vectors */

#include<iostream>
#include<cmath>
using namespace std;
class vector
{
private:
double i,j,k;
public:
vector():i(0),j(0),k(0)
{
 }
vector(double I,double J,double K):i(I),j(J),k(K)
{  
}
void get()
{
cout<<"Enter vector :"<<endl;
cout<<"Enter coefficoient of <i>:"; cin>>i;
cout<<"Enter coefficient of <j>: "; cin>>j;
cout<<"Enter coefficient of <k>: "; cin>>k;

}
void show()
{
cout<<"<"<<i<<","<<j<<","<<k<<">"<<endl;
}
double mode();
double dot(const vector& )const;
vector cross(const vector&)const;
vector add(const vector&)const;
vector sub(const vector&)const;
};
double vector::mode()
{
double m;
m=  sqrt(i*i +j*j+k*k);
cout<<"mode"<<m<<endl;
}
double vector::dot(const vector& B)const
{
return(i*B.i+j*B.j+k*B.k);
}
vector vector::cross(const vector& B)const
{
  vector product;
  product.i=(j*B.k)-(B.j*k);
  product.j=(-1)*((i*B.k)-(B.i*k));
  product.k=(i*B.j)-(B.i*j);
  return product;
}
vector vector::add(const vector &B) const
{
vector addition;
addition.i=i+B.i;
addition.j=j+B.j;
addition.k= k+B.k;
return addition;
}
vector vector::sub(const vector &B) const
{
vector subtract;
subtract.i=i-B.i;
subtract.j=j-B.j;
subtract.k= k-B.k;
return subtract;
}
int main()
{
vector A,B,C,D,E; int choice;
A.get();
B.get();    
cout<<"Enter vector operation :"<<endl;
cout<<"[1] _ magnitude of  A vector"<<endl<<"[2] _ Dot product"<<endl<<"[3] _ Cross product"<<endl<<"[4] _ A-B"<<endl<<"[5] _ A+B"<<endl<<"[6] _ quit this program"<<endl;
cin>>choice;
switch(choice)  
    {
    case 1: cout<<"mode of vector A is : "<<A.mode();break;
    case 2: cout<<"Dot produt is : "<<A.dot(B); break;
    case 3: cout<<"cross product is : ";
    C=A.cross(B);
    C.show();
    break;
    case 4: cout<<"subtraction is : ";
    D=A.sub(B); D.show();
    break;
    case 5: cout<<" addition is :";
    E=A.add(B);  E.show();
    break;
    case 6: cout<<"quit this program";
    }
    system("pause");
    return 0;
}

