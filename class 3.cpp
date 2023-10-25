#include<iostream>
using namespace std;
class cube{
    private:
    double height = 9.0;
    double width = 10.0;
    double length = 2.0;
    public:
    double volume()
    {
        double vol = height*width*length;
        //double *pt1 = &vol;
        //cout<<vol;
        return vol;
    }
    double uvolume()
    {
      cout<<"Enter length: "<<endl;
      cin>>length;
      cout<<"Enter width: "<<endl;
      cin>>width;
      cout<<"Enter height: "<<endl;
      cin>>height;
      return 0;
    }
};
main()
{
    //double check;
    cube c1;
    double check;
    c1.uvolume();
    c1.volume();
    check = c1.volume();
    if(check<50)                                                             
    {
        cout<<"Cube is small."<<endl;
    }
    else
    {
        cout<<"Cube is big"<<endl;
    }
}