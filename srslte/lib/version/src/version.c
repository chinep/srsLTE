/**
 *
 * \section COPYRIGHT
 *
 * Copyright 2013-2015 Software Radio Systems Limited
 *
 * \section LICENSE
 *
 * This file is part of the srsLTE library.
 *
 * srsLTE is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * srsLTE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * A copy of the GNU Affero General Public License can be found in
 * the LICENSE file in the top-level directory of this distribution
 * and at http://www.gnu.org/licenses/.
 *
 */

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

#include "srslte/version.h"
#include <stdio.h>

char* srslte_get_version_string() {
  char buf[32];
  sprintf(buf, "%s.%s.%s",
          TOSTRING(SRSLTE_VERSION_MAJOR),
          TOSTRING(SRSLTE_VERSION_MINOR),
          TOSTRING(SRSLTE_VERSION_PATCH));
  return buf;
}

int   srslte_get_version_major() {
  return SRSLTE_VERSION_MAJOR;
}
int   srslte_get_version_minor() {
  return SRSLTE_VERSION_MINOR;
}
int   srslte_get_version_patch() {
  return SRSLTE_VERSION_PATCH;
}