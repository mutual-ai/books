// --------------------------------------------------------
#ifndef WIN32

// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:35 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GLX_SGIX_swap_group__
#define __GLUX_GLX_SGIX_swap_group__

GLUX_NEW_PLUGIN(GLX_SGIX_swap_group);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glXJoinSwapGroupSGIX
typedef void (APIENTRYP PFNXGLUXJOINSWAPGROUPSGIXPROC) (Display *dpy, GLXDrawable drawable, GLXDrawable member);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glXJoinSwapGroupSGIX
extern PFNXGLUXJOINSWAPGROUPSGIXPROC glXJoinSwapGroupSGIX;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------