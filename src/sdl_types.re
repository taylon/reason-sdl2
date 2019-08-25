module Resdl_m_SDL_GLattr = {
  type t =
    | SDL_GL_RED_SIZE
    | SDL_GL_GREEN_SIZE
    | SDL_GL_BLUE_SIZE
    | SDL_GL_ALPHA_SIZE
    | SDL_GL_BUFFER_SIZE
    | SDL_GL_DOUBLEBUFFER
    | SDL_GL_DEPTH_SIZE
    | SDL_GL_STENCIL_SIZE
    | SDL_GL_ACCUM_RED_SIZE
    | SDL_GL_ACCUM_GREEN_SIZE
    | SDL_GL_ACCUM_BLUE_SIZE
    | SDL_GL_ACCUM_ALPHA_SIZE
    | SDL_GL_STEREO
    | SDL_GL_MULTISAMPLEBUFFERS
    | SDL_GL_MULTISAMPLESAMPLES
    | SDL_GL_ACCELERATED_VISUAL
    | SDL_GL_RETAINED_BACKING
    | SDL_GL_CONTEXT_MAJOR_VERSION
    | SDL_GL_CONTEXT_MINOR_VERSION
    | SDL_GL_CONTEXT_EGL
    | SDL_GL_CONTEXT_FLAGS
    | SDL_GL_CONTEXT_PROFILE_MASK
    | SDL_GL_SHARE_WITH_CURRENT_CONTEXT
    | SDL_GL_FRAMEBUFFER_SRGB_CAPABLE
    | SDL_GL_CONTEXT_RELEASE_BEHAVIOR
    | SDL_GL_CONTEXT_RESET_NOTIFICATION
    | SDL_GL_CONTEXT_NO_ERROR;
}

module Resdl_m_SDL_GLcontextFlag = {
  type t =
    | SDL_GL_CONTEXT_DEBUG_FLAG
    | SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG
    | SDL_GL_CONTEXT_ROBUST_ACCESS_FLAG
    | SDL_GL_CONTEXT_RESET_ISOLATION_FLAG;
}

module Resdl_m_SDL_GLprofile = {
  type t =
    | SDL_GL_CONTEXT_PROFILE_CORE
    | SDL_GL_CONTEXT_PROFILE_COMPATIBILITY
    | SDL_GL_CONTEXT_PROFILE_ES;
}

module Resdl_m_SDL_HitTestResult = {
  type t =
    | SDL_HITTEST_NORMAL
    | SDL_HITTEST_DRAGGABLE
    | SDL_HITTEST_RESIZE_TOPLEFT
    | SDL_HITTEST_RESIZE_TOP
    | SDL_HITTEST_RESIZE_TOPRIGHT
    | SDL_HITTEST_RESIZE_RIGHT
    | SDL_HITTEST_RESIZE_BOTTOMRIGHT
    | SDL_HITTEST_RESIZE_BOTTOM
    | SDL_HITTEST_RESIZE_BOTTOMLEFT
    | SDL_HITTEST_RESIZE_LEFT;
}

module Resdl_m_SDL_MessageBoxButtonFlags = {
  type t =
    | SDL_MESSAGEBOX_BUTTON_RETURNKEY_DEFAULT
    | SDL_MESSAGEBOX_BUTTON_ESCAPEKEY_DEFAULT;
}

module Resdl_m_SDL_MessageBoxColorType = {
  type t =
    | SDL_MESSAGEBOX_COLOR_BACKGROUND
    | SDL_MESSAGEBOX_COLOR_TEXT
    | SDL_MESSAGEBOX_COLOR_BUTTON_BORDER
    | SDL_MESSAGEBOX_COLOR_BUTTON_BACKGROUND
    | SDL_MESSAGEBOX_COLOR_BUTTON_SELECTED
    | SDL_MESSAGEBOX_COLOR_MAX;
}

module Resdl_t_windowing {
  type window;
}