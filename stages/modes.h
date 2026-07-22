#ifndef STAGES_MULTIMODE_H
#define STAGES_MULTIMODE_H

namespace stages {
enum MultiMode {
  MULTI_MODE_STAGES = 0,
  MULTI_MODE_STAGES_ADVANCED = 5,
  MULTI_MODE_STAGES_SLOW_LFO = 2,
  // Same segment types/behavior as MULTI_MODE_STAGES_ADVANCED, but channels
  // never group into multi-segment envelopes - each of the 6 channels is
  // always an independent single segment. Unpatched gate/trigger inputs are
  // normalized down from the nearest patched channel above them.
  MULTI_MODE_STAGES_ADVANCED_INDEPENDENT = 3,
  MULTI_MODE_SIX_INDEPENDENT_EGS = 6,
  MULTI_MODE_OUROBOROS = 1,
  MULTI_MODE_OUROBOROS_ALTERNATE = 4
};
}

#endif
