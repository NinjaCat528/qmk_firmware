#ifndef WM1_H
#define WM1_H

#include "quantum.h"

#define xxx KC_NO

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define KEYMAP_default( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c,      k0e, k0f, \
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c,      k1e, k1f, \
	k20,      k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c,      k2e, k2f, \
	k30,      k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c,      k3d, k3e, \
	k40,      k42, k43, k44,                k48, k49,           k4c, k4d, k4e, k4f \
) \
{ \
	{k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, xxx, k0e}, \
  {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1e, k1f}, \
  {k20, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2e, k0f, k2f}, \
  {k30, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, xxx, k3e}, \
  {k40, xxx, k42, k43, xxx, k44, xxx, k48, xxx, k49, xxx, k4c, k4d, k4e, k4f} \
}

#define KEYMAP_split_backspace( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, \
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c,      k1e, k1f, \
	k20,      k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c,      k2e, k2f, \
	k30,      k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c,      k3d, k3e, \
	k40,      k42, k43, k44,                k48, k49,           k4c, k4d, k4e, k4f \
) \
{ \
	{k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e}, \
  {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1e, k1f}, \
  {k20, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2e, k0f, k2f}, \
  {k30, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, xxx, k3e}, \
  {k40, xxx, k42, k43, xxx, k44, xxx, k48, xxx, k49, xxx, k4c, k4d, k4e, k4f} \
}

#endif
