#pragma once

//-----------------------------------------------------------------------------
// Layers
//-----------------------------------------------------------------------------
#define DVO 0
#define QWE 1
#define FUN 2
#define NUM 3
#define SYM 4

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
