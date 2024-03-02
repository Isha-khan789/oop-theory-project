#include <iostream>

struct Resolution {
  unsigned int x;
  unsigned int y;
};

enum Type {
  Png,
  Jpeg,
};

class Image {
  std::string path;

  void get_resolution();
  void get_type();

public:
  Resolution resolution;
  Type type;

  Image(std::string path);

  bool exists();
  bool save();
};

enum Filter {
  Greyscale,
  Pastel,
  Vintage,
};

enum Direction {
  Right90,
  Left90,
  Flip180,
};

enum Ratio {
  Facebook,
  Instagram,
  X,
};

class Editor : public Image {
public:
  void filter(Filter filter);
  void rotation(Direction direction);
  void crop(Ratio ratio);
};

int main() { return 0; }
