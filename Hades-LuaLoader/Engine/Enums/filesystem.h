#pragma once

namespace engine
{
	enum class ResourceDirectory : uint8_t
	{
		RD_SHADER_BINARIES	= 0,
		RD_SHADER_SOURCES	= 1,
		RD_PIPELINE_CACHE	= 2,
		RD_TEXTURES			= 3,
		RD_MESHES			= 4,
		RD_FONTS			= 5,
		RD_ANIMATIONS		= 6,
		RD_AUDIO			= 7,
		RD_GPU_CONFIG		= 8,
		RD_LOG				= 9,
		RD_SCRIPTS			= 0xA,
		RD_OTHER_FILES		= 0xB,
		RD_MIDDLEWARE_0		= 0xC,
		RD_MIDDLEWARE_1		= 0xD,
		RD_MIDDLEWARE_2		= 0xE,
		RD_MIDDLEWARE_3		= 0xF,
		RD_MIDDLEWARE_4		= 0x10,
		RD_MIDDLEWARE_5		= 0x11,
		RD_MIDDLEWARE_6		= 0x12,
		RD_MIDDLEWARE_7		= 0x13,
		RD_MIDDLEWARE_8		= 0x14,
		RD_MIDDLEWARE_9		= 0x15,
		RD_MIDDLEWARE_10	= 0x16,
		RD_MIDDLEWARE_11	= 0x17,
		RD_MIDDLEWARE_12	= 0x18,
		RD_MIDDLEWARE_13	= 0x19,
		RD_MIDDLEWARE_14	= 0x1A,
		RD_MIDDLEWARE_15	= 0x1B
	};

	enum class FileMode : uint8_t
	{
		FM_READ							= 1,
		FM_WRITE						= 2,
		FM_READ_WRITE					= 3,
		FM_APPEND						= 4,
		FM_READ_APPEND					= 5,
		FM_BINARY						= 8,
		FM_READ_BINARY					= 9,
		FM_WRITE_BINARY					= 0xA,
		FM_READ_WRITE_BINARY			= 0xB,
		FM_APPEND_BINARY				= 0xC,
		FM_READ_APPEND_BINARY			= 0xD,
		FM_ALLOW_READ					= 0x10,
		FM_APPEND_ALLOW_READ			= 0x11,
		FM_WRITE_ALLOW_READ				= 0x12,
		FM_READ_WRITE_ALLOW_READ		= 0x13,
		FM_READ_APPEND_ALLOW_READ		= 0x15,
		FM_WRITE_BINARY_ALLOW_READ		= 0x1A,
		FM_READ_WRITE_BINARY_ALLOW_READ = 0x1B,
		FM_APPEND_BINARY_ALLOW_READ		= 0x1C,
		FM_READ_APPEND_BINARY_ALLOW_READ= 0x1D
	};
}