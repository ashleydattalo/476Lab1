#include "WorldObj.h"
#include "Shape.h"

class WorldObj {
   int x, y, z;
   Shape 

   public:
      int load_object();
      void draw();
      void set_position (int, int, int);
};

void WorldObj::load_object() {

}

void WorldObj::set_position(int new_x, int new_y, int new_z) {
   x = new_x;
   y = new_y;
   z = new_z;
}