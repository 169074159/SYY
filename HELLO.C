#include"iostream.h"
class Vector
{
	int vec[10];
public:
	Vector(int v[10]);
	Vector();
	Vector(Vector&);
	Vector operator+(Vector&);
	Vector operator-(Vector&);
	friend ostream& operator<<(ostream& out,Vector&);
};
Vector::Vector(int v[10])
{
	int i;
	for(i=0;i<10;i++)
		vec[i]=v[i];
}
Vector::Vector()
{
	int i;
	for(i=0;i<10;i++)
		vec[i]=0;
}
Vector::Vector(Vector& v)
{
	int i;
	for(i=0;i<10;i++)
		vec[i]=v.vec[i];
}
Vector Vector::operator+(Vector& v)
{
	Vector z;
	int i;
	for(i=0;i<10;i++)
		z.vec[i]=vec[i]+v.vec[i];
	return z;
}
Vector Vector::operator-(Vector& v)
{
	Vector z;
	int i;
	for(i=0;i<10;i++)
		z.vec[i]=vec[i]-v.vec[i];
	return z;
}
ostream& operator<<(ostream& out,Vector& v)
{
	int i;
	for(i=0;i<10;i++)
		out<<v.vec[i]<<",";
	return out
void main()
{
	int a[10]={-8,1,3,10,5,-9,11,13,6,9	int b[10]={-3,8,10,17,-6,9,6,16,12,14};
	Vector v1(a),v2(b),v3,v4;
	v3=v1+v2;	v4=v2-v1;
	cout<<"a+b= ";
	cout<<v3<<endl;
	cout<<"a-b= ";
	cout<<v4<<endl;
}

2.	有一个交通工具类vehicle，将它作为基类派生小车类car、卡车类truck和轮船类boat，定义这些类并定义一个虚函数用来显示各类信息。
 
#include<iostream> 

#include<cstring> 

using namespace std; 

class Vehicle{ 

public: 
virtual void showinfo()=0; 

protected: 
char Name[20]; 

}; 
class Car:public Vehicle{ 
public: 
Car(char *name){ 
strcpy(Name,name); 
} 
void showinfo()
{
	cout<<Name<<endl;
} 
protected: 
int Radius; 
}; 
class Truck:public Vehicle
{ 
public: 
Truck(char *name)
{ 
strcpy(Name,name); 
} 
void showinfo()
{
	cout<<Name<<endl;
} 
}; 

class Boat:public Vehicle
{ 
public: 
Boat(char *name)
{ 
strcpy(Name,name); 
} 
void showinfo()
{
	cout<<Name<<endl;
} 
}; 
int main()
{ 
Vehicle *vp; 
Car car("小车"); 
Truck truck("卡车"); 
Boat boat("轮船"); 
vp=&car; 
vp->showinfo (); 
vp=&truck; 
vp->showinfo (); 
vp=&boat; 
vp->showinfo (); 
return 0; 
} 
