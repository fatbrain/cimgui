/////////////// BEGIN AUTOGENERATED SEGMENT
#ifndef IMGUI_STRUCTS_INCLUDED
#define IMGUI_STRUCTS_INCLUDED
       
struct ImDrawChannel;
typedef struct ImDrawChannel ImDrawChannel;
struct ImDrawCmd;
typedef struct ImDrawCmd ImDrawCmd;
struct ImDrawData;
typedef struct ImDrawData ImDrawData;
struct ImDrawList;
typedef struct ImDrawList ImDrawList;
struct ImDrawListSharedData;
typedef struct ImDrawListSharedData ImDrawListSharedData;
struct ImDrawVert;
typedef struct ImDrawVert ImDrawVert;
struct ImFont;
typedef struct ImFont ImFont;
struct ImFontAtlas;
typedef struct ImFontAtlas ImFontAtlas;
struct ImFontConfig;
typedef struct ImFontConfig ImFontConfig;
struct ImColor;
typedef struct ImColor ImColor;
struct ImGuiIO;
typedef struct ImGuiIO ImGuiIO;
struct ImGuiOnceUponAFrame;
typedef struct ImGuiOnceUponAFrame ImGuiOnceUponAFrame;
struct ImGuiStorage;
typedef struct ImGuiStorage ImGuiStorage;
struct ImGuiStyle;
typedef struct ImGuiStyle ImGuiStyle;
struct ImGuiTextFilter;
typedef struct ImGuiTextFilter ImGuiTextFilter;
struct ImGuiTextBuffer;
typedef struct ImGuiTextBuffer ImGuiTextBuffer;
struct ImGuiTextEditCallbackData;
typedef struct ImGuiTextEditCallbackData ImGuiTextEditCallbackData;
struct ImGuiSizeCallbackData;
typedef struct ImGuiSizeCallbackData ImGuiSizeCallbackData;
struct ImGuiListClipper;
typedef struct ImGuiListClipper ImGuiListClipper;
struct ImGuiPayload;
typedef struct ImGuiPayload ImGuiPayload;
struct ImGuiContext;
typedef struct ImGuiContext ImGuiContext;
typedef void* ImTextureID;
typedef unsigned int ImU32;
typedef unsigned int ImGuiID;
typedef unsigned short ImWchar;
typedef int ImGuiCol;
typedef int ImGuiDir;
typedef int ImGuiCond;
typedef int ImGuiKey;
typedef int ImGuiNavInput;
typedef int ImGuiMouseCursor;
typedef int ImGuiStyleVar;
typedef int ImDrawCornerFlags;
typedef int ImDrawListFlags;
typedef int ImFontAtlasFlags;
typedef int ImGuiBackendFlags;
typedef int ImGuiColorEditFlags;
typedef int ImGuiColumnsFlags;
typedef int ImGuiConfigFlags;
typedef int ImGuiDragDropFlags;
typedef int ImGuiComboFlags;
typedef int ImGuiFocusedFlags;
typedef int ImGuiHoveredFlags;
typedef int ImGuiInputTextFlags;
typedef int ImGuiSelectableFlags;
typedef int ImGuiTreeNodeFlags;
typedef int ImGuiWindowFlags;
typedef int (*ImGuiTextEditCallback)(ImGuiTextEditCallbackData *data);
typedef void (*ImGuiSizeCallback)(ImGuiSizeCallbackData* data);
typedef unsigned long long ImU64;
struct ImVec2
{
    float x, y;
};
typedef struct ImVec2 ImVec2;
struct ImVec4
{
    float x, y, z, w;
};
typedef struct ImVec4 ImVec4;
enum ImGuiWindowFlags_
{
    ImGuiWindowFlags_NoTitleBar = 1 << 0,
    ImGuiWindowFlags_NoResize = 1 << 1,
    ImGuiWindowFlags_NoMove = 1 << 2,
    ImGuiWindowFlags_NoScrollbar = 1 << 3,
    ImGuiWindowFlags_NoScrollWithMouse = 1 << 4,
    ImGuiWindowFlags_NoCollapse = 1 << 5,
    ImGuiWindowFlags_AlwaysAutoResize = 1 << 6,
    ImGuiWindowFlags_NoSavedSettings = 1 << 8,
    ImGuiWindowFlags_NoInputs = 1 << 9,
    ImGuiWindowFlags_MenuBar = 1 << 10,
    ImGuiWindowFlags_HorizontalScrollbar = 1 << 11,
    ImGuiWindowFlags_NoFocusOnAppearing = 1 << 12,
    ImGuiWindowFlags_NoBringToFrontOnFocus = 1 << 13,
    ImGuiWindowFlags_AlwaysVerticalScrollbar= 1 << 14,
    ImGuiWindowFlags_AlwaysHorizontalScrollbar=1<< 15,
    ImGuiWindowFlags_AlwaysUseWindowPadding = 1 << 16,
    ImGuiWindowFlags_ResizeFromAnySide = 1 << 17,
    ImGuiWindowFlags_NoNavInputs = 1 << 18,
    ImGuiWindowFlags_NoNavFocus = 1 << 19,
    ImGuiWindowFlags_NoNav = ImGuiWindowFlags_NoNavInputs | ImGuiWindowFlags_NoNavFocus,
    ImGuiWindowFlags_NavFlattened = 1 << 23,
    ImGuiWindowFlags_ChildWindow = 1 << 24,
    ImGuiWindowFlags_Tooltip = 1 << 25,
    ImGuiWindowFlags_Popup = 1 << 26,
    ImGuiWindowFlags_Modal = 1 << 27,
    ImGuiWindowFlags_ChildMenu = 1 << 28
};
enum ImGuiInputTextFlags_
{
    ImGuiInputTextFlags_CharsDecimal = 1 << 0,
    ImGuiInputTextFlags_CharsHexadecimal = 1 << 1,
    ImGuiInputTextFlags_CharsUppercase = 1 << 2,
    ImGuiInputTextFlags_CharsNoBlank = 1 << 3,
    ImGuiInputTextFlags_AutoSelectAll = 1 << 4,
    ImGuiInputTextFlags_EnterReturnsTrue = 1 << 5,
    ImGuiInputTextFlags_CallbackCompletion = 1 << 6,
    ImGuiInputTextFlags_CallbackHistory = 1 << 7,
    ImGuiInputTextFlags_CallbackAlways = 1 << 8,
    ImGuiInputTextFlags_CallbackCharFilter = 1 << 9,
    ImGuiInputTextFlags_AllowTabInput = 1 << 10,
    ImGuiInputTextFlags_CtrlEnterForNewLine = 1 << 11,
    ImGuiInputTextFlags_NoHorizontalScroll = 1 << 12,
    ImGuiInputTextFlags_AlwaysInsertMode = 1 << 13,
    ImGuiInputTextFlags_ReadOnly = 1 << 14,
    ImGuiInputTextFlags_Password = 1 << 15,
    ImGuiInputTextFlags_NoUndoRedo = 1 << 16,
    ImGuiInputTextFlags_CharsScientific = 1 << 17,
    ImGuiInputTextFlags_Multiline = 1 << 20
};
enum ImGuiTreeNodeFlags_
{
    ImGuiTreeNodeFlags_Selected = 1 << 0,
    ImGuiTreeNodeFlags_Framed = 1 << 1,
    ImGuiTreeNodeFlags_AllowItemOverlap = 1 << 2,
    ImGuiTreeNodeFlags_NoTreePushOnOpen = 1 << 3,
    ImGuiTreeNodeFlags_NoAutoOpenOnLog = 1 << 4,
    ImGuiTreeNodeFlags_DefaultOpen = 1 << 5,
    ImGuiTreeNodeFlags_OpenOnDoubleClick = 1 << 6,
    ImGuiTreeNodeFlags_OpenOnArrow = 1 << 7,
    ImGuiTreeNodeFlags_Leaf = 1 << 8,
    ImGuiTreeNodeFlags_Bullet = 1 << 9,
    ImGuiTreeNodeFlags_FramePadding = 1 << 10,
    ImGuiTreeNodeFlags_NavLeftJumpsBackHere = 1 << 13,
    ImGuiTreeNodeFlags_CollapsingHeader = ImGuiTreeNodeFlags_Framed | ImGuiTreeNodeFlags_NoAutoOpenOnLog
    , ImGuiTreeNodeFlags_AllowOverlapMode = ImGuiTreeNodeFlags_AllowItemOverlap
};
enum ImGuiSelectableFlags_
{
    ImGuiSelectableFlags_DontClosePopups = 1 << 0,
    ImGuiSelectableFlags_SpanAllColumns = 1 << 1,
    ImGuiSelectableFlags_AllowDoubleClick = 1 << 2
};
enum ImGuiComboFlags_
{
    ImGuiComboFlags_PopupAlignLeft = 1 << 0,
    ImGuiComboFlags_HeightSmall = 1 << 1,
    ImGuiComboFlags_HeightRegular = 1 << 2,
    ImGuiComboFlags_HeightLarge = 1 << 3,
    ImGuiComboFlags_HeightLargest = 1 << 4,
    ImGuiComboFlags_NoArrowButton = 1 << 5,
    ImGuiComboFlags_NoPreview = 1 << 6,
    ImGuiComboFlags_HeightMask_ = ImGuiComboFlags_HeightSmall | ImGuiComboFlags_HeightRegular | ImGuiComboFlags_HeightLarge | ImGuiComboFlags_HeightLargest
};
enum ImGuiFocusedFlags_
{
    ImGuiFocusedFlags_ChildWindows = 1 << 0,
    ImGuiFocusedFlags_RootWindow = 1 << 1,
    ImGuiFocusedFlags_AnyWindow = 1 << 2,
    ImGuiFocusedFlags_RootAndChildWindows = ImGuiFocusedFlags_RootWindow | ImGuiFocusedFlags_ChildWindows
};
enum ImGuiHoveredFlags_
{
    ImGuiHoveredFlags_Default = 0,
    ImGuiHoveredFlags_ChildWindows = 1 << 0,
    ImGuiHoveredFlags_RootWindow = 1 << 1,
    ImGuiHoveredFlags_AnyWindow = 1 << 2,
    ImGuiHoveredFlags_AllowWhenBlockedByPopup = 1 << 3,
    ImGuiHoveredFlags_AllowWhenBlockedByActiveItem = 1 << 5,
    ImGuiHoveredFlags_AllowWhenOverlapped = 1 << 6,
    ImGuiHoveredFlags_RectOnly = ImGuiHoveredFlags_AllowWhenBlockedByPopup | ImGuiHoveredFlags_AllowWhenBlockedByActiveItem | ImGuiHoveredFlags_AllowWhenOverlapped,
    ImGuiHoveredFlags_RootAndChildWindows = ImGuiHoveredFlags_RootWindow | ImGuiHoveredFlags_ChildWindows
};
enum ImGuiDragDropFlags_
{
    ImGuiDragDropFlags_SourceNoPreviewTooltip = 1 << 0,
    ImGuiDragDropFlags_SourceNoDisableHover = 1 << 1,
    ImGuiDragDropFlags_SourceNoHoldToOpenOthers = 1 << 2,
    ImGuiDragDropFlags_SourceAllowNullID = 1 << 3,
    ImGuiDragDropFlags_SourceExtern = 1 << 4,
    ImGuiDragDropFlags_AcceptBeforeDelivery = 1 << 10,
    ImGuiDragDropFlags_AcceptNoDrawDefaultRect = 1 << 11,
    ImGuiDragDropFlags_AcceptPeekOnly = ImGuiDragDropFlags_AcceptBeforeDelivery | ImGuiDragDropFlags_AcceptNoDrawDefaultRect
};
enum ImGuiDir_
{
    ImGuiDir_None = -1,
    ImGuiDir_Left = 0,
    ImGuiDir_Right = 1,
    ImGuiDir_Up = 2,
    ImGuiDir_Down = 3,
    ImGuiDir_COUNT
};
enum ImGuiKey_
{
    ImGuiKey_Tab,
    ImGuiKey_LeftArrow,
    ImGuiKey_RightArrow,
    ImGuiKey_UpArrow,
    ImGuiKey_DownArrow,
    ImGuiKey_PageUp,
    ImGuiKey_PageDown,
    ImGuiKey_Home,
    ImGuiKey_End,
    ImGuiKey_Insert,
    ImGuiKey_Delete,
    ImGuiKey_Backspace,
    ImGuiKey_Space,
    ImGuiKey_Enter,
    ImGuiKey_Escape,
    ImGuiKey_A,
    ImGuiKey_C,
    ImGuiKey_V,
    ImGuiKey_X,
    ImGuiKey_Y,
    ImGuiKey_Z,
    ImGuiKey_COUNT
};
enum ImGuiNavInput_
{
    ImGuiNavInput_Activate,
    ImGuiNavInput_Cancel,
    ImGuiNavInput_Input,
    ImGuiNavInput_Menu,
    ImGuiNavInput_DpadLeft,
    ImGuiNavInput_DpadRight,
    ImGuiNavInput_DpadUp,
    ImGuiNavInput_DpadDown,
    ImGuiNavInput_LStickLeft,
    ImGuiNavInput_LStickRight,
    ImGuiNavInput_LStickUp,
    ImGuiNavInput_LStickDown,
    ImGuiNavInput_FocusPrev,
    ImGuiNavInput_FocusNext,
    ImGuiNavInput_TweakSlow,
    ImGuiNavInput_TweakFast,
    ImGuiNavInput_KeyMenu_,
    ImGuiNavInput_KeyLeft_,
    ImGuiNavInput_KeyRight_,
    ImGuiNavInput_KeyUp_,
    ImGuiNavInput_KeyDown_,
    ImGuiNavInput_COUNT,
    ImGuiNavInput_InternalStart_ = ImGuiNavInput_KeyMenu_
};
enum ImGuiConfigFlags_
{
    ImGuiConfigFlags_NavEnableKeyboard = 1 << 0,
    ImGuiConfigFlags_NavEnableGamepad = 1 << 1,
    ImGuiConfigFlags_NavEnableSetMousePos = 1 << 2,
    ImGuiConfigFlags_NavNoCaptureKeyboard = 1 << 3,
    ImGuiConfigFlags_NoMouse = 1 << 4,
    ImGuiConfigFlags_NoMouseCursorChange = 1 << 5,
    ImGuiConfigFlags_IsSRGB = 1 << 20,
    ImGuiConfigFlags_IsTouchScreen = 1 << 21
};
enum ImGuiBackendFlags_
{
    ImGuiBackendFlags_HasGamepad = 1 << 0,
    ImGuiBackendFlags_HasMouseCursors = 1 << 1,
    ImGuiBackendFlags_HasSetMousePos = 1 << 2
};
enum ImGuiCol_
{
    ImGuiCol_Text,
    ImGuiCol_TextDisabled,
    ImGuiCol_WindowBg,
    ImGuiCol_ChildBg,
    ImGuiCol_PopupBg,
    ImGuiCol_Border,
    ImGuiCol_BorderShadow,
    ImGuiCol_FrameBg,
    ImGuiCol_FrameBgHovered,
    ImGuiCol_FrameBgActive,
    ImGuiCol_TitleBg,
    ImGuiCol_TitleBgActive,
    ImGuiCol_TitleBgCollapsed,
    ImGuiCol_MenuBarBg,
    ImGuiCol_ScrollbarBg,
    ImGuiCol_ScrollbarGrab,
    ImGuiCol_ScrollbarGrabHovered,
    ImGuiCol_ScrollbarGrabActive,
    ImGuiCol_CheckMark,
    ImGuiCol_SliderGrab,
    ImGuiCol_SliderGrabActive,
    ImGuiCol_Button,
    ImGuiCol_ButtonHovered,
    ImGuiCol_ButtonActive,
    ImGuiCol_Header,
    ImGuiCol_HeaderHovered,
    ImGuiCol_HeaderActive,
    ImGuiCol_Separator,
    ImGuiCol_SeparatorHovered,
    ImGuiCol_SeparatorActive,
    ImGuiCol_ResizeGrip,
    ImGuiCol_ResizeGripHovered,
    ImGuiCol_ResizeGripActive,
    ImGuiCol_PlotLines,
    ImGuiCol_PlotLinesHovered,
    ImGuiCol_PlotHistogram,
    ImGuiCol_PlotHistogramHovered,
    ImGuiCol_TextSelectedBg,
    ImGuiCol_ModalWindowDarkening,
    ImGuiCol_DragDropTarget,
    ImGuiCol_NavHighlight,
    ImGuiCol_NavWindowingHighlight,
    ImGuiCol_COUNT
    , ImGuiCol_ChildWindowBg = ImGuiCol_ChildBg, ImGuiCol_Column = ImGuiCol_Separator, ImGuiCol_ColumnHovered = ImGuiCol_SeparatorHovered, ImGuiCol_ColumnActive = ImGuiCol_SeparatorActive
};
enum ImGuiStyleVar_
{
    ImGuiStyleVar_Alpha,
    ImGuiStyleVar_WindowPadding,
    ImGuiStyleVar_WindowRounding,
    ImGuiStyleVar_WindowBorderSize,
    ImGuiStyleVar_WindowMinSize,
    ImGuiStyleVar_WindowTitleAlign,
    ImGuiStyleVar_ChildRounding,
    ImGuiStyleVar_ChildBorderSize,
    ImGuiStyleVar_PopupRounding,
    ImGuiStyleVar_PopupBorderSize,
    ImGuiStyleVar_FramePadding,
    ImGuiStyleVar_FrameRounding,
    ImGuiStyleVar_FrameBorderSize,
    ImGuiStyleVar_ItemSpacing,
    ImGuiStyleVar_ItemInnerSpacing,
    ImGuiStyleVar_IndentSpacing,
    ImGuiStyleVar_ScrollbarSize,
    ImGuiStyleVar_ScrollbarRounding,
    ImGuiStyleVar_GrabMinSize,
    ImGuiStyleVar_GrabRounding,
    ImGuiStyleVar_ButtonTextAlign,
    ImGuiStyleVar_COUNT
    , ImGuiStyleVar_Count_ = ImGuiStyleVar_COUNT, ImGuiStyleVar_ChildWindowRounding = ImGuiStyleVar_ChildRounding
};
enum ImGuiColorEditFlags_
{
    ImGuiColorEditFlags_NoAlpha = 1 << 1,
    ImGuiColorEditFlags_NoPicker = 1 << 2,
    ImGuiColorEditFlags_NoOptions = 1 << 3,
    ImGuiColorEditFlags_NoSmallPreview = 1 << 4,
    ImGuiColorEditFlags_NoInputs = 1 << 5,
    ImGuiColorEditFlags_NoTooltip = 1 << 6,
    ImGuiColorEditFlags_NoLabel = 1 << 7,
    ImGuiColorEditFlags_NoSidePreview = 1 << 8,
    ImGuiColorEditFlags_AlphaBar = 1 << 9,
    ImGuiColorEditFlags_AlphaPreview = 1 << 10,
    ImGuiColorEditFlags_AlphaPreviewHalf= 1 << 11,
    ImGuiColorEditFlags_HDR = 1 << 12,
    ImGuiColorEditFlags_RGB = 1 << 13,
    ImGuiColorEditFlags_HSV = 1 << 14,
    ImGuiColorEditFlags_HEX = 1 << 15,
    ImGuiColorEditFlags_Uint8 = 1 << 16,
    ImGuiColorEditFlags_Float = 1 << 17,
    ImGuiColorEditFlags_PickerHueBar = 1 << 18,
    ImGuiColorEditFlags_PickerHueWheel = 1 << 19,
    ImGuiColorEditFlags__InputsMask = ImGuiColorEditFlags_RGB|ImGuiColorEditFlags_HSV|ImGuiColorEditFlags_HEX,
    ImGuiColorEditFlags__DataTypeMask = ImGuiColorEditFlags_Uint8|ImGuiColorEditFlags_Float,
    ImGuiColorEditFlags__PickerMask = ImGuiColorEditFlags_PickerHueWheel|ImGuiColorEditFlags_PickerHueBar,
    ImGuiColorEditFlags__OptionsDefault = ImGuiColorEditFlags_Uint8|ImGuiColorEditFlags_RGB|ImGuiColorEditFlags_PickerHueBar
};
enum ImGuiMouseCursor_
{
    ImGuiMouseCursor_None = -1,
    ImGuiMouseCursor_Arrow = 0,
    ImGuiMouseCursor_TextInput,
    ImGuiMouseCursor_ResizeAll,
    ImGuiMouseCursor_ResizeNS,
    ImGuiMouseCursor_ResizeEW,
    ImGuiMouseCursor_ResizeNESW,
    ImGuiMouseCursor_ResizeNWSE,
    ImGuiMouseCursor_COUNT
    , ImGuiMouseCursor_Count_ = ImGuiMouseCursor_COUNT
};
enum ImGuiCond_
{
    ImGuiCond_Always = 1 << 0,
    ImGuiCond_Once = 1 << 1,
    ImGuiCond_FirstUseEver = 1 << 2,
    ImGuiCond_Appearing = 1 << 3
    , ImGuiSetCond_Always = ImGuiCond_Always, ImGuiSetCond_Once = ImGuiCond_Once, ImGuiSetCond_FirstUseEver = ImGuiCond_FirstUseEver, ImGuiSetCond_Appearing = ImGuiCond_Appearing
};
struct ImGuiStyle
{
    float Alpha;
    ImVec2 WindowPadding;
    float WindowRounding;
    float WindowBorderSize;
    ImVec2 WindowMinSize;
    ImVec2 WindowTitleAlign;
    float ChildRounding;
    float ChildBorderSize;
    float PopupRounding;
    float PopupBorderSize;
    ImVec2 FramePadding;
    float FrameRounding;
    float FrameBorderSize;
    ImVec2 ItemSpacing;
    ImVec2 ItemInnerSpacing;
    ImVec2 TouchExtraPadding;
    float IndentSpacing;
    float ColumnsMinSpacing;
    float ScrollbarSize;
    float ScrollbarRounding;
    float GrabMinSize;
    float GrabRounding;
    ImVec2 ButtonTextAlign;
    ImVec2 DisplayWindowPadding;
    ImVec2 DisplaySafeAreaPadding;
    float MouseCursorScale;
    bool AntiAliasedLines;
    bool AntiAliasedFill;
    float CurveTessellationTol;
    ImVec4 Colors[ImGuiCol_COUNT];
};
typedef struct ImGuiStyle ImGuiStyle;
struct ImGuiIO
{
    ImGuiConfigFlags ConfigFlags;
    ImGuiBackendFlags BackendFlags;
    ImVec2 DisplaySize;
    float DeltaTime;
    float IniSavingRate;
    const char* IniFilename;
    const char* LogFilename;
    float MouseDoubleClickTime;
    float MouseDoubleClickMaxDist;
    float MouseDragThreshold;
    int KeyMap[ImGuiKey_COUNT];
    float KeyRepeatDelay;
    float KeyRepeatRate;
    void* UserData;
    ImFontAtlas* Fonts;
    float FontGlobalScale;
    bool FontAllowUserScaling;
    ImFont* FontDefault;
    ImVec2 DisplayFramebufferScale;
    ImVec2 DisplayVisibleMin;
    ImVec2 DisplayVisibleMax;
    bool OptMacOSXBehaviors;
    bool OptCursorBlink;
    const char* (*GetClipboardTextFn)(void* user_data);
    void (*SetClipboardTextFn)(void* user_data, const char* text);
    void* ClipboardUserData;
    void (*ImeSetInputScreenPosFn)(int x, int y);
    void* ImeWindowHandle;
    void (*RenderDrawListsFn)(ImDrawData* data);
    ImVec2 MousePos;
    bool MouseDown[5];
    float MouseWheel;
    float MouseWheelH;
    bool MouseDrawCursor;
    bool KeyCtrl;
    bool KeyShift;
    bool KeyAlt;
    bool KeySuper;
    bool KeysDown[512];
    ImWchar InputCharacters[16+1];
    float NavInputs[ImGuiNavInput_COUNT];
    bool WantCaptureMouse;
    bool WantCaptureKeyboard;
    bool WantTextInput;
    bool WantSetMousePos;
    bool NavActive;
    bool NavVisible;
    float Framerate;
    int MetricsRenderVertices;
    int MetricsRenderIndices;
    int MetricsActiveWindows;
    ImVec2 MouseDelta;
    ImVec2 MousePosPrev;
    ImVec2 MouseClickedPos[5];
    float MouseClickedTime[5];
    bool MouseClicked[5];
    bool MouseDoubleClicked[5];
    bool MouseReleased[5];
    bool MouseDownOwned[5];
    float MouseDownDuration[5];
    float MouseDownDurationPrev[5];
    ImVec2 MouseDragMaxDistanceAbs[5];
    float MouseDragMaxDistanceSqr[5];
    float KeysDownDuration[512];
    float KeysDownDurationPrev[512];
    float NavInputsDownDuration[ImGuiNavInput_COUNT];
    float NavInputsDownDurationPrev[ImGuiNavInput_COUNT];
};
typedef struct ImGuiIO ImGuiIO;
struct ImVector
{
    int Size;
    int Capacity;
    void* Data;
};
typedef struct ImVector ImVector;struct ImNewDummy {};
struct ImGuiOnceUponAFrame
{
     int RefFrame;
};
typedef struct ImGuiOnceUponAFrame ImGuiOnceUponAFrame;
struct ImGuiTextFilter
{
    char InputBuf[256];
    ImVector/*<TextRange>*/ Filters;
    int CountGrep;
};
typedef struct ImGuiTextFilter ImGuiTextFilter;
struct ImGuiTextBuffer
{
    ImVector/*<char>*/ Buf;
};
typedef struct ImGuiTextBuffer ImGuiTextBuffer;
struct ImGuiStorage
{
    ImVector/*<Pair>*/ Data;
};
typedef struct ImGuiStorage ImGuiStorage;
struct ImGuiTextEditCallbackData
{
    ImGuiInputTextFlags EventFlag;
    ImGuiInputTextFlags Flags;
    void* UserData;
    bool ReadOnly;
    ImWchar EventChar;
    ImGuiKey EventKey;
    char* Buf;
    int BufTextLen;
    int BufSize;
    bool BufDirty;
    int CursorPos;
    int SelectionStart;
    int SelectionEnd;
};
typedef struct ImGuiTextEditCallbackData ImGuiTextEditCallbackData;
struct ImGuiSizeCallbackData
{
    void* UserData;
    ImVec2 Pos;
    ImVec2 CurrentSize;
    ImVec2 DesiredSize;
};
typedef struct ImGuiSizeCallbackData ImGuiSizeCallbackData;
struct ImGuiPayload
{
    const void* Data;
    int DataSize;
    ImGuiID SourceId;
    ImGuiID SourceParentId;
    int DataFrameCount;
    char DataType[32+1];
    bool Preview;
    bool Delivery;
};
typedef struct ImGuiPayload ImGuiPayload;
struct ImColor
{
    ImVec4 Value;
};
typedef struct ImColor ImColor;
struct ImGuiListClipper
{
    float StartPosY;
    float ItemsHeight;
    int ItemsCount, StepNo, DisplayStart, DisplayEnd;
};
typedef struct ImGuiListClipper ImGuiListClipper;
typedef void (*ImDrawCallback)(const ImDrawList* parent_list, const ImDrawCmd* cmd);
struct ImDrawCmd
{
    unsigned int ElemCount;
    ImVec4 ClipRect;
    ImTextureID TextureId;
    ImDrawCallback UserCallback;
    void* UserCallbackData;
};
typedef struct ImDrawCmd ImDrawCmd;
typedef unsigned short ImDrawIdx;
struct ImDrawVert
{
    ImVec2 pos;
    ImVec2 uv;
    ImU32 col;
};
typedef struct ImDrawVert ImDrawVert;
struct ImDrawChannel
{
    ImVector/*<ImDrawCmd>*/ CmdBuffer;
    ImVector/*<ImDrawIdx>*/ IdxBuffer;
};
typedef struct ImDrawChannel ImDrawChannel;
enum ImDrawCornerFlags_
{
    ImDrawCornerFlags_TopLeft = 1 << 0,
    ImDrawCornerFlags_TopRight = 1 << 1,
    ImDrawCornerFlags_BotLeft = 1 << 2,
    ImDrawCornerFlags_BotRight = 1 << 3,
    ImDrawCornerFlags_Top = ImDrawCornerFlags_TopLeft | ImDrawCornerFlags_TopRight,
    ImDrawCornerFlags_Bot = ImDrawCornerFlags_BotLeft | ImDrawCornerFlags_BotRight,
    ImDrawCornerFlags_Left = ImDrawCornerFlags_TopLeft | ImDrawCornerFlags_BotLeft,
    ImDrawCornerFlags_Right = ImDrawCornerFlags_TopRight | ImDrawCornerFlags_BotRight,
    ImDrawCornerFlags_All = 0xF
};
enum ImDrawListFlags_
{
    ImDrawListFlags_AntiAliasedLines = 1 << 0,
    ImDrawListFlags_AntiAliasedFill = 1 << 1
};
struct ImDrawList
{
    ImVector/*<ImDrawCmd>*/ CmdBuffer;
    ImVector/*<ImDrawIdx>*/ IdxBuffer;
    ImVector/*<ImDrawVert>*/ VtxBuffer;
    ImDrawListFlags Flags;
    const ImDrawListSharedData* _Data;
    const char* _OwnerName;
    unsigned int _VtxCurrentIdx;
    ImDrawVert* _VtxWritePtr;
    ImDrawIdx* _IdxWritePtr;
    ImVector/*<ImVec4>*/ _ClipRectStack;
    ImVector/*<ImTextureID>*/ _TextureIdStack;
    ImVector/*<ImVec2>*/ _Path;
    int _ChannelsCurrent;
    int _ChannelsCount;
    ImVector/*<ImDrawChannel>*/ _Channels;
};
typedef struct ImDrawList ImDrawList;
struct ImDrawData
{
    bool Valid;
    ImDrawList** CmdLists;
    int CmdListsCount;
    int TotalIdxCount;
    int TotalVtxCount;
};
typedef struct ImDrawData ImDrawData;
struct ImFontConfig
{
    void* FontData;
    int FontDataSize;
    bool FontDataOwnedByAtlas;
    int FontNo;
    float SizePixels;
    int OversampleH;
    int OversampleV;
    bool PixelSnapH;
    ImVec2 GlyphExtraSpacing;
    ImVec2 GlyphOffset;
    const ImWchar* GlyphRanges;
    bool MergeMode;
    unsigned int RasterizerFlags;
    float RasterizerMultiply;
    char Name[40];
    ImFont* DstFont;
};
typedef struct ImFontConfig ImFontConfig;
struct ImFontGlyph
{
    ImWchar Codepoint;
    float AdvanceX;
    float X0, Y0, X1, Y1;
    float U0, V0, U1, V1;
};
typedef struct ImFontGlyph ImFontGlyph;
enum ImFontAtlasFlags_
{
    ImFontAtlasFlags_NoPowerOfTwoHeight = 1 << 0,
    ImFontAtlasFlags_NoMouseCursors = 1 << 1
};
struct ImFontAtlas
{
    ImFontAtlasFlags Flags;
    ImTextureID TexID;
    int TexDesiredWidth;
    int TexGlyphPadding;
    unsigned char* TexPixelsAlpha8;
    unsigned int* TexPixelsRGBA32;
    int TexWidth;
    int TexHeight;
    ImVec2 TexUvScale;
    ImVec2 TexUvWhitePixel;
    ImVector/*<ImFont*>*/ Fonts;
    ImVector/*<CustomRect>*/ CustomRects;
    ImVector/*<ImFontConfig>*/ ConfigData;
    int CustomRectIds[1];
};
typedef struct ImFontAtlas ImFontAtlas;
struct ImFont
{
    float FontSize;
    float Scale;
    ImVec2 DisplayOffset;
    ImVector/*<ImFontGlyph>*/ Glyphs;
    ImVector/*<float>*/ IndexAdvanceX;
    ImVector/*<unsigned short>*/ IndexLookup;
    const ImFontGlyph* FallbackGlyph;
    float FallbackAdvanceX;
    ImWchar FallbackChar;
    short ConfigDataCount;
    ImFontConfig* ConfigData;
    ImFontAtlas* ContainerAtlas;
    float Ascent, Descent;
    bool DirtyLookupTables;
    int MetricsTotalSurface;
};
typedef struct ImFont ImFont;
    struct GlyphRangesBuilder
    {
        ImVector/*<unsigned char>*/ UsedChars;
    };
typedef struct GlyphRangesBuilder GlyphRangesBuilder;

    struct CustomRect
    {
        unsigned int ID;
        unsigned short Width, Height;
        unsigned short X, Y;
        float GlyphAdvanceX;
        ImVec2 GlyphOffset;
        ImFont* Font;
    };
typedef struct CustomRect CustomRect;

    struct TextRange
    {
        const char* b;
        const char* e;
    };
typedef struct TextRange TextRange;

    struct Pair
    {
        ImGuiID key;
        union { int val_i; float val_f; void* val_p; };
    };
typedef struct Pair Pair;

#endif //IMGUI_STRUCTS_INCLUDED
//////////////// END AUTOGENERATED SEGMENT 
