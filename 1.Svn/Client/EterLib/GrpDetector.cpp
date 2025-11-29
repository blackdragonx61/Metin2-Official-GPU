//Find
		if (rkAdapterInfo.Find(uScrWidth, uScrHeight, uScrDepthBits, isWindowed, piD3DModeInfo, piD3DDevInfo))

///Change
#if defined(__BL_GPU__)
		D3DDISPLAYMODE& rkD3DDMDesktop = rkAdapterInfo.GetDesktopD3DDisplayModer();
		if (rkAdapterInfo.Find(rkD3DDMDesktop.Width, rkD3DDMDesktop.Height, uScrDepthBits, isWindowed, piD3DModeInfo, piD3DDevInfo))
#else
		if (rkAdapterInfo.Find(uScrWidth, uScrHeight, uScrDepthBits, isWindowed, piD3DModeInfo, piD3DDevInfo))
#endif

///Add new func
#if defined(__BL_GPU__)
BOOL D3D_CDisplayModeAutoDetector::FindByGpu(const std::string& gpu, UINT uScrDepthBits, BOOL isWindowed, UINT* piD3DModeInfo, UINT* piD3DDevInfo, UINT* piD3DAdapterInfo)
{
	for (UINT iD3DAdapterInfo = 0; iD3DAdapterInfo < m_uD3DAdapterInfoCount; ++iD3DAdapterInfo)
	{
		D3D_CAdapterInfo& rkAdapterInfo = m_akD3DAdapterInfo[iD3DAdapterInfo];
		D3DDISPLAYMODE& rkD3DDMDesktop = rkAdapterInfo.GetDesktopD3DDisplayModer();
		if (gpu != rkAdapterInfo.GetIdentifier().Description)
			continue;
		
		if (rkAdapterInfo.Find(rkD3DDMDesktop.Width, rkD3DDMDesktop.Height, uScrDepthBits, isWindowed, piD3DModeInfo, piD3DDevInfo))
		{
			*piD3DAdapterInfo = iD3DAdapterInfo;
			return TRUE;
		}
	}
	return FALSE;
}
#endif