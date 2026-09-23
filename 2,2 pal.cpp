#include <iostream>
using namespace std;
class Books{
    private:
    string title;
    string author;
    int price;
    static int count;
    public:
    Books(int id=0,string t="",string a="",int p=0,int c=0){
        title=t;
        author=a;
        price=p;
        count=c; 
        cout<<"Book created.total books:"<<count<<endl;
    }
        Books(const Books &b){
            title=b.title;
            author=b.author;
            price=b.price;
            count=b.count;
            cout<<"Book created.total books:"<<count<<endl;
        }
        ~Books(){
            cout<<"Book destroyed.total books:"<<count<<endl;
        }
    
        void display(){
            cout<<"Title:"<<title<<endl;
            cout<<"Author:"<<author<<endl;
            cout<<"Price:"<<price<<endl;
        }
        static int getCount(){
            return count;
        }
};
int Books::count = 0;
int main(){
    Books b1(1,"C++","Bjarne",500,1);
    b1.display();
    Books b2=b1;
    b2.display();
    cout<<"Total books:"<<Books::getCount()<<endl;
    return 0;
}
