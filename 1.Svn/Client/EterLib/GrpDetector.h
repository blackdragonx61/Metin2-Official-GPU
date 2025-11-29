///Add
#include "../UserInterface/Locale_inc.h"

//Find
		BOOL Find(UINT uScrWidth, UINT uScrHeight, UINT uScrDepthBits, BOOL isWindowed, UINT* piD3DModeInfo, UINT* piD3DDevInfo, UINT* piD3DAdapterInfo);

///Add
#if defined(__BL_GPU__)
		BOOL FindByGpu(const std::string& gpu, UINT uScrDepthBits, BOOL isWindowed, UINT* piD3DModeInfo, UINT* piD3DDevInfo, UINT* piD3DAdapterInfo);
#endif