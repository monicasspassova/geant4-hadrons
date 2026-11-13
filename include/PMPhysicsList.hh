#ifndef PMPHYSICSLIST_HH_
#define PMPHYSICSLIST_HH_

#include "G4VModularPhysicsList.hh"
#include "G4EmStandardPhysics.hh"

class PMPhysicsList : public G4VModularPhysicsList {
 public:
  PMPhysicsList();
  ~PMPhysicsList();
};

#endif  // PMPHYSICSLIST_HH_