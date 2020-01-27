#ifndef LEGOENTITY_H
#define LEGOENTITY_H

class LegoEntity {
public:
  LegoEntity();
  virtual ~LegoEntity();
};

LegoEntity* PickEntity(long, long);

#endif // LEGOENTITY_H
