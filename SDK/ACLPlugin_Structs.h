﻿#pragma once

/**
 * Name: chiv2
 * Version: 123456
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ACLPlugin.ACLCompressionLevel
	 */
	enum class ACLPlugin_EACLCompressionLevel : uint8_t
	{
		ACLCL_Lowest  = 0,
		ACLCL_Low     = 1,
		ACLCL_Medium  = 2,
		ACLCL_High    = 3,
		ACLCL_Highest = 4,
		ACLCL_MAX     = 5
	};

	/**
	 * Enum ACLPlugin.ACLVectorFormat
	 */
	enum class ACLPlugin_EACLVectorFormat : uint8_t
	{
		ACLVF_Vector3          = 0,
		ACLVF_Vector3_Variable = 1,
		ACLVF_Vector3_MAX      = 2
	};

	/**
	 * Enum ACLPlugin.ACLRotationFormat
	 */
	enum class ACLPlugin_EACLRotationFormat : uint8_t
	{
		ACLRF_Quat               = 0,
		ACLRF_QuatDropW          = 1,
		ACLRF_QuatDropW_Variable = 2,
		ACLRF_MAX                = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
