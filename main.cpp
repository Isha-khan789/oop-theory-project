#include<iostream>
using namespace std;
struct Resolution{
        int x;
        int y;
    };
enum Type{
        Png,                                           
        Jpeg,
    };
class Image{
    public:
    string path;
    void get_resolution();
    void get_type();
    void validate_path();  
};
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

class Editor:Image{

};
