///Add in typedef struct SConfig
#if defined(__BL_GPU__)
			std::string		sGPU;
#endif

///Add in class CPythonSystem
#if defined(__BL_GPU__)
	public:
		const std::string&				GetGPU() const;
#endif