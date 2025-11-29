//Find
		bool CreateDevice(int width, int height, int Windowed, int bit = 32, int frequency = 0);

///Change
#if defined(__BL_GPU__)
		bool CreateDevice(int width, int height, int Windowed, int bit = 32, int frequency = 0, const std::string& gpu = "");
#else
		bool CreateDevice(int width, int height, int Windowed, int bit = 32, int frequency = 0);
#endif