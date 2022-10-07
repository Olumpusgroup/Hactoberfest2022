#include <iostream>
using namespace std;
class Box{
    private:
        int l,b,h;
    public:
        Box(){
            l=0;
            b=0;
            h=0;
        }
        Box(int length, int breadth, int height){
            l=length;
            b=breadth;
            h=height;
        }
        Box(Box &B){
            l=B.l;
            b=B.b;
            h=B.h;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
            return (long long)l*b*h;
        }
        bool operator<(Box &B){
            if(l<B.l){
                return true;
            }
            else if(l==B.l){
                if(b<B.b){
                    return true;
                }
                else if(b==B.b){
                    if(h<B.h){
                        return true;
                    }
                }
            }
            return false;
        }
        friend ostream& operator<<(ostream& out, Box &B){
            out<<B.l<<" "<<B.b<<" "<<B.h;
            return out;
        }
};

int main(){
    Box b1;
    Box b2(2,3,4);
    Box b3(b2);
    Box b4;
    b4=b3;
    cout<<b1<<endl;
    cout<<b2<<endl;
    cout<<b3<<endl;
    cout<<b4<<endl;
    return 0;
}

