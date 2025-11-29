//Find
bool CPythonApplication::CreateDevice(int width, int height, int Windowed, int bit /* = 32*/, int frequency /* = 0*/)

///Change
#if defined(__BL_GPU__)
bool CPythonApplication::CreateDevice(int width, int height, int Windowed, int bit /* = 32*/, int frequency /* = 0*/, const std::string& gpu)
#else
bool CPythonApplication::CreateDevice(int width, int height, int Windowed, int bit /* = 32*/, int frequency /* = 0*/)
#endif

//Find
	iRet = m_grpDevice.Create(GetWindowHandle(), width, height, Windowed ? true : false, bit,frequency);

///Change
#if defined(__BL_GPU__)
	iRet = m_grpDevice.Create(GetWindowHandle(), width, height, Windowed ? true : false, bit, frequency, gpu);
#else
	iRet = m_grpDevice.Create(GetWindowHandle(), width, height, Windowed ? true : false, bit,frequency);
#endif

//Find
		if (!CreateDevice(m_pySystem.GetWidth(), m_pySystem.GetHeight(), Windowed, m_pySystem.GetBPP(), m_pySystem.GetFrequency()))

///Change
#if defined(__BL_GPU__)
		if (!CreateDevice(m_pySystem.GetWidth(), m_pySystem.GetHeight(), Windowed, m_pySystem.GetBPP(), m_pySystem.GetFrequency(), m_pySystem.GetGPU()))
#else
		if (!CreateDevice(m_pySystem.GetWidth(), m_pySystem.GetHeight(), Windowed, m_pySystem.GetBPP(), m_pySystem.GetFrequency()))
#endif