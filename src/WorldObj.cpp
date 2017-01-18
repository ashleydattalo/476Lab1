#include "WorldObj.h"
#include "Shape.h"

class WorldObj {
   int x, y, z;
   Shape 

   public:
      void draw(); /* -> call the mesh's draw function */
      void set_position (int, int, int);
};

void WorldObj::load_object() {

}

void WorldObj::set_position(int new_x, int new_y, int new_z) {
   x = new_x;
   y = new_y;
   z = new_z;
}
/* Things that already exist in shape: 
 *  - loadMesh 
 *  - init 
 *  - draw 
 *  - ComputeTex() 
 *  - resize 
 * 
 * Things that still need to be stored/done: 
 *  - position in the world 
 *  - 