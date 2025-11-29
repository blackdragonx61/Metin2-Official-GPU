//Find
		else if (!stricmp(command, "NO_SOUND_CARD"))
			m_Config.bNoSoundCard = atoi(value) == 1 ? true : false;

///Add
#if defined(__BL_GPU__)
		else if (!stricmp(command, "GPU_DESCRIPTION"))
		{
			const std::string sBuf = buf;
			m_Config.sGPU = sBuf.substr(strlen(command) + 1);
			if (!m_Config.sGPU.empty() && m_Config.sGPU.back() == '\n')
				m_Config.sGPU.pop_back();
		}
#endif

//Find
	fprintf(fp, "SOFTWARE_TILING		%d\n", m_Config.bSoftwareTiling);

///Add
#if defined(__BL_GPU__)
	fprintf(fp, "GPU_DESCRIPTION %s\n", m_Config.sGPU.c_str());
#endif

///Add new func
#if defined(__BL_GPU__)
const std::string& CPythonSystem::GetGPU() const
{
	return m_Config.sGPU;
}
#endif