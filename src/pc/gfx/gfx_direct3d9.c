#include <d3d9.h>
#include "gfx_rendering_api.h"

static LPDIRECT3D9 g_pD3D = NULL;
static LPDIRECT3DDEVICE9 g_pd3dDevice = NULL;

static bool gfx_d3d9_z_is_from_0_to_1(void) {
    return true; 
}

static void gfx_d3d9_init(void) {
    
}

static void gfx_d3d9_start_frame(void) {
    g_pd3dDevice->Clear(0, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, D3DCOLOR_XRGB(0, 0, 0), 1.0f, 0);
    g_pd3dDevice->BeginScene();
}

static void gfx_d3d9_draw_triangles(float buf_vtx[], size_t buf_vtx_len, size_t buf_vtx_cnt) {

}


struct GfxRenderingAPI gfx_direct3d9 = {
    gfx_d3d9_z_is_from_0_to_1,
    gfx_d3d9_init,
    gfx_d3d9_start_frame,
    gfx_d3d9_draw_triangles,

};
