#pragma once

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
	// # Classes
	// --------------------------------------------------
	/**
	 * DynamicClass BPI_LocalFx.BPI_LocalFx_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_LocalFx_C : public UInterface
	{
	public:
		void RemoveLocalFx(class UParticleSystem* bpp__Particle__pf, int bpp__Intensity__pf);
		void CanAddLocalFx(bool* bpp__x__pfT);
		void AddLocalFx(class UParticleSystem* bpp__Particle__pf, int bpp__Intensity__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
