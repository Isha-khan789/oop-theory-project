#include<iostream>
using namespace std;
class Image{
    public:
    string path;
    struct Resolution{
        int x;
        int y;
    };
    enum Type{
        Png,
        Jpeg,
    };
    void get_resolution();
    void get_type();
    void validate_path();  
};
