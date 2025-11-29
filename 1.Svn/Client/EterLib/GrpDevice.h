//Find
	int				Create(HWND hWnd, int hres, int vres, bool Windowed = true, int bit = 32, int ReflashRate = 0);

///Change
#if defined(__BL_GPU__)
	int				Create(HWND hWnd, int hres, int vres, bool Windowed = true, int bit = 32, int ReflashRate = 0, const std::string& gpu = "");
#else
	int				Create(HWND hWnd, int hres, int vres, bool Windowed = true, int bit = 32, int ReflashRate = 0);
#endif