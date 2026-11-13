**Simulation of Hadronic Physics using Geant4**

**Folders and Main Files**
sim.cc:
- main program file, run simulation with "./sim" command

include folder: 
- holds header files for implementation classes

src folder:
- holds implementations of header files

macros folder:
- holds macros for simulation window and UI

build folder:
- has makefiles, run "cmake .." and then "make" command to compile all files. Make sure to update CMakeLists.txt (not in build folder) when creating new
  files to add them to compilation list

**Classes for simulation implementation**: 
- PMActionInitialization: initializes "action", or particle events
- PMDetectorConstruction: create solid objects for simulation
- PMPhysicsList: physics implementation
- PMPrimaryGenerator: particle generator for simulation
