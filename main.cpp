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
class Editor:Image{
    public:
    enum Filter{
        black,
        white,
        magenta,
    };
    enum Rotation{
        right,
        left,
        flip,
    };
    enum Crop{
        four_by_three,
        one_to_one,
    };

};
