#ifndef PMACTIONINITIALIZATION_HH_
#define PMACTIONINITIALIZATION_HH_

#include "G4VUserActionInitialization.hh"

#include "PMPrimaryGenerator.hh"

class PMActionInitialization : public G4VUserActionInitialization {
 public:
  PMActionInitialization();
  ~PMActionInitialization();

  virtual void BuildForMaster() const;
  virtual void Build() const;
};

#endif  // PMACTIONINITIALIZATION_HH_