#ifndef DUST3D_H
#define DUST3D_H
#include "halfedge.h"

typedef struct dust3dState dust3dState;
typedef int (*dust3dFunction)(dust3dState *state);
dust3dState *dust3dCreateState(void *tag);
void *dust3dGetStateTag(dust3dState *state);
void dust3dDestroyState(dust3dState *state);
int dust3dRegister(dust3dState *state, const char *name, dust3dFunction func);
int dust3dRun(dust3dState *state, int argc, char *argv[]);
int dust3dRunOne(dust3dState *state, int argc, char *argv[]);
mesh *dust3dFindMeshById(dust3dState *state, const char *id);
mesh *dust3dGetCurrentMesh(dust3dState *state);
const char *dust3dGetNthArgument(dust3dState *state, int n);
const char *dust3dGetNamingArgument(dust3dState *state, const char *name);

#endif
