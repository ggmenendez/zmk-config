#pragma once

//-----------------------------------------------------------------------------
// Layers
//-----------------------------------------------------------------------------
#define DVO 0
#define DV1 1
#define QWE 2
#define QW1 3
#define FUN 4
#define NUM 5
#define SYM 6
#define GAM 7
#define G_N 8
#define G_C 9

//-----------------------------------------------------------------------------
// Keys
//-----------------------------------------------------------------------------
#define XXX &none
#define ___ &trans
// To show graphically which key is being held to activate a layer
#define vvv &trans

// CUA bindings for paste, copy, and cut
#define U_PST &kp LS(INS)
#define U_CPY &kp LC(INS)
#define U_CUT &kp LS(DEL)
