#include <iostream>

struct Resolution {
  unsigned int rows;
  unsigned int columns;
};

enum Type {
  PNG,
  JPEG,
};

class Image {
public:
  std::string path;
  void get_resolution();
  void get_type();
  void validate_path();
};

enum Filter {
  BlackandWhite,
  Magenta,
};

enum Direction {
  Right90,
  Left90,
  Flip180,
};

enum Ratio {
  FourByThree,
  OneToOne,
};

class Editor : public Image {
public:
  void filter(Filter filter);
  void rotation(Direction direction);
  void crop(Ratio ratio);
};

int main() { return 0; }
