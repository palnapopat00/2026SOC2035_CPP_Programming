# include <iostream>
using namespace std;
class rectangle{

    private:
    float l;
    float b;
    public:
    void intake(){
cout<<"enter the lenght and breadth of the rectangle"<<endl;
cin>>l>>b;
    }
    float area(){
        float ar= l*b;
        return (ar);
    }
    float perimeter(){
        float p= 2*(l+b);
        return (p);
    }
    void disply(){
        float ar = area();
        float p = perimeter();
        cout<<"the lenght of the rectangle is:"<<l<<endl;
        cout<<"the breadth of the rectangle is:"<<b<<endl;
        cout<<"the area of the rectangle is:"<<ar<<endl;
        cout<<"the perimeter of the rectangle is:"<<p<<endl;
    }
};
int main(){
    rectangle r;
    r.intake();
    r.area();
    r.perimeter();
    r.disply();
    return 0;
}