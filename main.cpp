#include<iostream>
using namespace std;
class Image{
    public:
    string path;
    public:
    struct Resolution{
        int x;
        int y;
    };
    public:
    enum Type{
        Png,
        Jpeg,
    };
    public:
    void get_resolution();
    public:
    void get_type();
    public:
    void validate_path();  
};
