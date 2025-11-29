//Find
int CGraphicDevice::Create(HWND hWnd, int iHres, int iVres, bool Windowed, int /*iBit*/, int iReflashRate)

///Change
#if defined(__BL_GPU__)
int CGraphicDevice::Create(HWND hWnd, int iHres, int iVres, bool Windowed, int /*iBit*/, int iReflashRate, const std::string& gpu)
#else
int CGraphicDevice::Create(HWND hWnd, int iHres, int iVres, bool Windowed, int /*iBit*/, int iReflashRate)
#endif

//Find
	if (!ms_kD3DDetector.Find(800, 600, 32, TRUE, &ms_iD3DModeInfo, &ms_iD3DDevInfo, &ms_iD3DAdapterInfo))
		return CREATE_DETECT;

///Change
#if defined(__BL_GPU__)
	if ((gpu.empty() || !ms_kD3DDetector.FindByGpu(gpu, 32, TRUE, &ms_iD3DModeInfo, &ms_iD3DDevInfo, &ms_iD3DAdapterInfo)) && !ms_kD3DDetector.Find(800, 600, 32, TRUE, &ms_iD3DModeInfo, &ms_iD3DDevInfo, &ms_iD3DAdapterInfo))
		return CREATE_DETECT;
#else
	if (!ms_kD3DDetector.Find(800, 600, 32, TRUE, &ms_iD3DModeInfo, &ms_iD3DDevInfo, &ms_iD3DAdapterInfo))
		return CREATE_DETECT;
#endif