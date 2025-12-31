// [PLUS_ADDITION]

#include <grrlibplus.h>

GRRLIB_Matrix GRRLIB_CurrentMatrix(void) {
    GRRLIB_Matrix mat;
    
    // clone our current matrix
    // we shouldn't let the user modify our real one directly
    guMtxCopy(GXmodelView2D, mat.matrix); 

    return mat;
}

void GRRLIB_SetMatrix(GRRLIB_Matrix *mat) {
    guMtxCopy(mat->matrix, GXmodelView2D); // copies the user's matrix into our current matrix
    GX_LoadPosMtxImm(GXmodelView2D, GX_PNMTX0);
}

void GRRLIB_LoadMatrix(const GRRLIB_Matrix *mat) {
    guMtxCopy(mat->matrix, GXmodelView2D); // literally just setmatrix, idk which i should stick with though... hmm
    GX_LoadPosMtxImm(GXmodelView2D, GX_PNMTX0);
}

void GRRLIB_Translate(f32 translationX, f32 translationY) {

}

void GRRLIB_Rotate(f32 deg) {
    
}

void GRRLIB_Scale(f32 scaleX, f32 scaleY) {
    
}

void GRRLIB_Transform(GRRLIB_Matrix *mat) {

}

void GRRLIB_Origin(void) {
    // resets the current matrix to its original state
    guMtxIdentity(GXmodelView2D);
    guMtxTransApply(GXmodelView2D, GXmodelView2D, 0.0, 0.0, -100.0);
    GX_LoadPosMtxImm(GXmodelView2D, GX_PNMTX0);
}
