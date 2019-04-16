// -------------------------------------------------------------------------------
// 
// 		ＤＸライブラリ		RGBAブレンド用シェーダーバイナリ
// 
// 				Ver 3.20c
// 
// -------------------------------------------------------------------------------

// ＤＸライブラリ作成時用定義
#define __DX_MAKE

#include "../DxCompileConfig.h"

#ifndef DX_NON_DIRECT3D9

#ifndef DX_NON_FILTER

// インクルード----------------------------------------------------------------
#include "../DxLib.h"
#include "../DxStatic.h"

// データ定義------------------------------------------------------------------

#ifndef DX_NON_NAMESPACE

namespace DxLib
{

#endif // DX_NON_NAMESPACE

// シェーダーファイルを圧縮したもの
int  DxShaderCodeBin_RgbaMixConvert ;
BYTE DxShaderCodeBin_RgbaMix[] = 
{
	0x39,0x37,0x31,0x31,0x31,0x51,0x3b,0x31,0x41,0x31,0x71,0x61,0x31,0x31,0x70,0x7a,
	0x31,0x36,0x41,0x31,0x25,0x31,0x5d,0x31,0x36,0x51,0x34,0x31,0x31,0xc2,0x35,0x32,
	0x6d,0x78,0xbb,0x41,0x34,0x61,0x31,0x4a,0x31,0x33,0x51,0x32,0x6d,0x31,0x43,0x31,
	0x3e,0x71,0x32,0x71,0x31,0xaf,0x31,0x3b,0xa2,0xb3,0x51,0x38,0x7d,0x31,0x46,0x31,
	0x3e,0x51,0x32,0x71,0x31,0xb5,0x31,0x3d,0x31,0x38,0x24,0xbf,0x39,0x36,0x23,0x50,
	0xa6,0x72,0x6e,0x5a,0xc1,0x35,0x3c,0xc2,0xa3,0x32,0x30,0xbf,0x61,0x38,0xc2,0x73,
	0x36,0x30,0xbb,0x51,0x34,0x4f,0x31,0x45,0x71,0x34,0x31,0x32,0x6d,0xc2,0x37,0x31,
	0x6d,0x38,0xbb,0x61,0x50,0xc2,0x3d,0x3c,0xb7,0x71,0x34,0x49,0x31,0x55,0x31,0x49,
	0x40,0xb3,0x51,0x68,0xc1,0x31,0x31,0xac,0x31,0x36,0x24,0xbf,0x59,0x70,0xc2,0x71,
	0x31,0x70,0xbb,0x31,0xc2,0x61,0x31,0x4a,0x71,0x34,0x64,0xbf,0x39,0x72,0xc2,0x73,
	0x31,0x30,0xbc,0x72,0x40,0x61,0x70,0x74,0x31,0x50,0xbb,0x51,0x54,0xab,0x70,0x74,
	0x32,0x30,0xbb,0x31,0xa2,0xb5,0x31,0x3b,0x71,0x38,0x34,0xbf,0x79,0x48,0x23,0x31,
	0x3e,0x58,0xbb,0x62,0x28,0xc2,0x39,0x41,0x70,0xb3,0x32,0x50,0xc1,0x59,0x34,0xc2,
	0xa4,0x33,0x40,0xbf,0x51,0x32,0xb4,0x50,0xa5,0x74,0x30,0xbf,0x51,0x72,0xc2,0x79,
	0x33,0xc2,0xbb,0x32,0x70,0xc2,0x31,0x4d,0xc2,0xb4,0x36,0x57,0x32,0xc2,0x31,0x31,
	0xc2,0xb3,0x76,0x3f,0x32,0xc2,0x35,0x55,0x61,0x40,0xbb,0x32,0xb2,0x61,0x70,0x78,
	0x39,0x50,0xbb,0x31,0x38,0xc2,0x41,0x54,0xb3,0x40,0xbc,0x33,0xc2,0x31,0xc2,0x77,
	0x33,0xc2,0xbb,0xa3,0x40,0xc2,0x31,0x62,0xb3,0x40,0xbb,0x31,0x40,0xc2,0x39,0x59,
	0x61,0x40,0xbb,0x71,0x50,0xc2,0x39,0x31,0x70,0xb7,0x32,0x70,0xc1,0x39,0x5a,0xc2,
	0xa5,0x31,0x40,0xbf,0x31,0xa4,0xc2,0x7d,0x38,0xc2,0xbb,0x71,0x6c,0xc2,0x4d,0x66,
	0xb3,0x40,0xbb,0x72,0x40,0xc2,0x39,0x34,0xc2,0xb3,0x72,0xc2,0xc1,0x49,0x51,0xc2,
	0xa4,0x34,0x70,0xbf,0xa4,0x40,0x71,0x70,0xa5,0x3a,0x5d,0x36,0xc1,0x39,0x74,0xa3,
	0x50,0xb4,0x78,0x67,0x32,0xc2,0x35,0x5a,0xb3,0x40,0xbc,0x34,0x6c,0x31,0xc2,0x73,
	0x44,0xbb,0x38,0xbf,0xa3,0x70,0xc2,0x77,0x34,0xc2,0xbb,0x54,0x40,0x31,0xc2,0x71,
	0x43,0x69,0x3c,0xbf,0x41,0x76,0xc2,0x73,0x45,0xbb,0x38,0xa4,0xc1,0x45,0x61,0xc2,
	0xa4,0x37,0x50,0x62,0xc1,0x3d,0x45,0xc2,0xa3,0x3d,0x3d,0x34,0xc1,0x31,0x45,0xc2,
	0xa9,0x39,0x6d,0x34,0xc1,0x61,0x3c,0xc2,0xa8,0x31,0x70,0xbf,0x41,0x3a,0xbb,0x50,
	0xa3,0x71,0x30,0xbf,0x41,0x38,0xc2,0x77,0x3f,0x50,0xbb,0x51,0x3c,0xc2,0x51,0x5e,
	0xb3,0x48,0xbb,0xa3,0x60,0xc2,0x49,0x52,0xb3,0x43,0x54,0xbf,0x4a,0x5c,0x71,0x70,
	0xa5,0x34,0x40,0xbf,0x42,0xaa,0x71,0x30,0xa7,0x3e,0x6d,0x34,0xc1,0x49,0x38,0xc2,
	0xa4,0x3c,0xbf,0x36,0xc1,0x59,0x24,0xa3,0x50,0xb3,0x75,0x27,0x33,0xc2,0x39,0x32,
	0x70,0xb3,0x31,0x38,0xb7,0xc2,0x3f,0x66,0x61,0x40,0xbb,0x31,0x34,0xc2,0x49,0x32,
	0xc2,0xb6,0x33,0xc2,0xc1,0x59,0x50,0xc2,0xa3,0x40,0x4d,0x36,0xc1,0x41,0x3c,0xc2,
	0xa4,0x34,0x70,0xbf,0x32,0xac,0x71,0x70,0xa4,0x31,0x3e,0x41,0x31,0x57,0x31,0x31,
	0x31,0x48,0xc2,0xc1,0x50,0x31,0x31,0x31,0x51,0x31,0x31,0x32,0x31,0x31,0x31,0x31,
	0x6c,0x38,0xbb,0x61,0x3c,0x79,0x31,0x32,0x31,0xc0,0x32,0x35,0x31,0x31,0x31,0xa3,
	0x31,0x31,0x6f,0x31,0x31,0x31,0x6a,0x47,0x31,0x31,0x54,0x7a,0x51,0x31,0xc2,0x72,
	0x32,0x30,0xbb,0x31,0x40,0x31,0x51,0x50,0xa3,0x71,0x5d,0x42,0xc1,0x35,0x37,0xb3,
	0x40,0xc2,0xbf,0x32,0xc1,0x35,0x42,0xad,0x41,0x31,0x31,0x3b,0x31,0x31,0x34,0xb7,
	0x37,0xbb,0x7b,0x38,0x6b,0x31,0x70,0x78,0x31,0x38,0xbb,0x79,0x32,0x60,0x72,0x30,
	0xa3,0x71,0xaf,0x36,0x31,0x31,0x31,0x50,0xbb,0x31,0x48,0xbf,0x39,0x3e,0x71,0x61,
	0x31,0x31,0x32,0x5c,0xc1,0x35,0x4c,0xa3,0x60,0xb3,0x51,0x50,0xc1,0x39,0x37,0xa3,
	0x31,0x31,0x33,0x71,0x29,0x31,0x31,0x31,0x71,0x31,0x31,0x42,0xc1,0x45,0x38,0xa3,
	0x31,0x33,0x27,0x72,0xc1,0x39,0x3d,0xa3,0xc2,0xb3,0xa3,0x78,0xc2,0xc2,0x53,0x45,
	0x70,0xb5,0x41,0x34,0xae,0x31,0xc2,0x72,0x35,0x30,0xbb,0x52,0xae,0x31,0xc2,0x74,
	0x37,0x30,0xbb,0x71,0x24,0x31,0xc2,0x7e,0x71,0x48,0x2d,0x3a,0xc1,0x4d,0x6e,0xa3,
	0x69,0x31,0x31,0x32,0x5b,0xc2,0x33,0x47,0xc2,0xb3,0x74,0xb2,0xc1,0x39,0x37,0xc2,
	0xa6,0x38,0x30,0xbf,0x61,0x40,0xc2,0x75,0x40,0x70,0xbb,0x52,0x5c,0xc2,0x35,0x52,
	0x61,0x40,0xbe,0x72,0x60,0xc2,0x66,0x51,0x41,0x49,0x37,0x26,0xc1,0x2f,0x71,0x71,
	0x61,0x40,0xbb,0xa6,0xbe,0x31,0x71,0x70,0xa6,0xa2,0xaf,0x34,0xc1,0x39,0x34,0xc2,
	0xa3,0x31,0xb2,0xbf,0x31,0x38,0xad,0x30,0xa4,0x79,0x7d,0x34,0xc1,0x31,0x38,0xc2,
	0xa9,0x39,0x7d,0x34,0xc1,0x31,0x5a,0xc2,0xb2,0x59,0x39,0x57,0x32,0xc2,0x35,0x5d,
	0x61,0x48,0xbd,0xad,0x33,0x32,0x71,0xc2,0xa4,0x36,0x50,0xbf,0x72,0x34,0x71,0x70,
	0xa3,0x34,0x60,0xbf,0x71,0x38,0xc2,0x72,0x4e,0x29,0x3c,0xbf,0x3a,0x34,0x71,0x70,
	0xa4,0x39,0x2d,0x34,0xc1,0x51,0x72,0xa3,0x41,0x6d,0x31,0x34,0xc1,0x39,0x69,0xc2,
	0xa3,0x38,0x60,0xbf,0x41,0x28,0xc2,0x2a,0x21,0x39,0x3d,0x37,0x3c,0xc2,0x3f,0x58,
	0xb3,0x40,0xbb,0x34,0x38,0x32,0x70,0x27,0x21,0x51,0x3d,0x37,0x31,0x31,0x32,0x30,
	0xa4,0x79,0x5d,0x3a,0x23,0xc2,0x3f,0x6e,0xb3,0x40,0xbb,0x72,0x6c,0xc2,0x31,0x36,
	0xc2,0xb3,0x73,0xba,0xc1,0x39,0x62,0xc2,0xac,0x3f,0x4d,0x36,0xc1,0x5b,0x71,0x54,
	0x61,0x39,0x64,0xbf,0x69,0x5a,0xc2,0x75,0x48,0xbb,0x3c,0xc0,0x56,0x33,0x37,0xa3,
	0x41,0x60,0xbb,0x63,0x3c,0x32,0xb5,0x70,0xa6,0x79,0x3d,0x34,0xc1,0x69,0x76,0xa3,
	0x70,0xb3,0x74,0x40,0xc1,0x33,0x71,0x74,0x61,0x40,0xbb,0xa5,0x40,0x31,0xc2,0x79,
	0x44,0x69,0x44,0xc0,0xa8,0x32,0x41,0xa3,0x60,0xb5,0x35,0xb9,0x34,0xc2,0x35,0x65,
	0xb3,0x50,0x44,0xbf,0x3a,0x4e,0x71,0xc2,0xa4,0x3a,0x4d,0x34,0xc1,0x39,0x37,0xc2,
	0xa7,0x3a,0x5d,0x38,0xc1,0x39,0x34,0xc2,0xa7,0x3a,0x4d,0x34,0xc1,0x49,0xa1,0xa3,
	0x50,0xb6,0x73,0xba,0xc1,0x51,0x65,0xc2,0xae,0x37,0x50,0xbf,0x26,0x31,0x23,0xa3,
	0x71,0xba,0xbb,0x24,0x60,0x32,0x70,0x2f,0x21,0x43,0x5d,0x3a,0xc1,0x31,0x60,0xc2,
	0xa4,0x39,0x6d,0x34,0xc1,0x49,0x34,0xc2,0xa3,0x3b,0x5d,0x3a,0xc1,0x39,0x22,0xa3,
	0x60,0xb3,0x74,0x58,0xc1,0x49,0x78,0xa3,0x50,0xb3,0x31,0x6f,0x32,0xc2,0x33,0x50,
	0x70,0xb3,0x75,0x6f,0x32,0xc2,0x35,0x46,0xc2,0xb3,0x31,0x58,0xc1,0x3d,0xbc,0xa3,
	0x51,0x31,0x44,0xbf,0x52,0x66,0x72,0x50,0xaf,0xab,0x36,0x77,0x35,0x31,0x70,0x78,
	0x47,0x49,0x44,0xc0,0xa8,0x32,0x45,0xa4,0x40,0xb3,0x45,0x35,0x28,0x34,0x70,0xa1,
	0x21,0x4c,0x4d,0x3a,0xc1,0x61,0x23,0xa3,0x70,0xba,0x72,0x70,0xc1,0x33,0x72,0x3a,
	0x61,0x50,0xbe,0x33,0xae,0x31,0xc2,0x72,0x3c,0x50,0xbb,0xb4,0x7c,0xc2,0x52,0x51,
	0x56,0x69,0x3c,0xbf,0x42,0xa2,0x72,0x70,0xaa,0x3e,0xaf,0x38,0xc1,0x33,0x72,0x68,
	0x61,0x78,0xbc,0xad,0x34,0x28,0x72,0x52,0x30,0xb4,0xaa,0xa9,0x35,0xc2,0x31,0x46,
	0xc2,0xb8,0x25,0x35,0x5c,0x31,0xc2,0x2b,0x4e,0xbb,0x54,0xbf,0x31,0x6e,0xc2,0x71,
	0x3d,0xc2,0xbc,0x5b,0x35,0x22,0x72,0x50,0xaa,0x39,0x4d,0x44,0xc1,0x49,0x28,0xa4,
	0xa2,0xb9,0x45,0x35,0x7c,0x32,0x70,0x29,0x41,0x49,0x68,0xbf,0x62,0x26,0x71,0x70,
	0xbb,0x38,0xbb,0x53,0x3c,0x31,0xc2,0x77,0x33,0x30,0xbc,0x34,0xa2,0x34,0x70,0x73,
	0x41,0x29,0x38,0xbf,0x62,0xaa,0x72,0x30,0xa5,0x39,0xaf,0x34,0xc1,0x73,0x71,0x2a,
	0xb3,0x68,0xbe,0x54,0x5c,0x33,0x70,0x29,0x21,0x42,0x7d,0x34,0xc1,0x3b,0x71,0x54,
	0xb3,0xa2,0xbc,0x32,0x3c,0xc2,0x39,0x58,0xb3,0x48,0xbc,0xa5,0x5c,0x35,0x71,0x70,
	0xa5,0x7b,0x3d,0x48,0xc1,0x39,0x34,0xa3,0x60,0xb3,0xa3,0x50,0xc1,0x41,0x23,0xa3,
	0xa2,0xb3,0x36,0x37,0x32,0xc2,0x4d,0x6f,0xb3,0xa2,0xbd,0xad,0x33,0x52,0x71,0x70,
	0xa7,0x3a,0xaf,0x44,0xc1,0x3b,0x71,0xb1,0xb3,0x48,0xbc,0x3b,0x32,0xa4,0x72,0x50,
	0xa3,0x35,0x6d,0x36,0xc1,0x4d,0x25,0xa3,0x41,0x48,0xbd,0x44,0xa2,0x33,0x31,0x61,
	0x31,0x41,0x32,0x5c,0xc1,0x31,0x3f,0xc2,0xa5,0x7b,0x7d,0x34,0xc1,0x39,0x34,0xc2,
	0xa6,0x3b,0x7d,0x34,0xc1,0x31,0x34,0xc2,0xae,0x59,0x3a,0x57,0x32,0xc2,0x31,0x52,
	0x61,0x68,0xbb,0x53,0x6c,0x31,0xc2,0x79,0x21,0x49,0x5d,0x3e,0xc1,0xbb,0xb3,0xa5,
	0x40,0xb5,0x77,0xa9,0x34,0xc2,0x33,0x43,0x70,0xb5,0x51,0xc2,0xc1,0x31,0x72,0xa3,
	0xb2,0xb3,0x31,0x30,0xc1,0x3b,0x71,0xa3,0xb3,0x61,0x34,0xbf,0x3a,0x34,0x72,0x30,
	0xaf,0x59,0x3b,0x47,0x3a,0xc2,0x4a,0x51,0x5f,0x49,0x68,0xbf,0x31,0x42,0xc2,0x75,
	0x42,0x29,0x38,0xbf,0x72,0x74,0x73,0x70,0xa5,0x59,0x39,0xb1,0x33,0x36,0x70,0x78,
	0x47,0x49,0x38,0xbf,0x32,0x76,0x71,0x70,0xa7,0x59,0x48,0x77,0x3e,0xc2,0x49,0x54,
	0xb3,0x48,0xbb,0x73,0x64,0x31,0xc2,0x79,0x21,0x45,0x2d,0x46,0xc1,0x71,0x7a,0xa4,
	0x30,0xb4,0x77,0x77,0x33,0xc2,0x36,0x51,0x2f,0x49,0x68,0xbf,0xb7,0x31,0xb4,0xc2,
	0xaa,0x59,0x35,0xb9,0x39,0xc2,0x39,0x3c,0xc2,0xb4,0x25,0x37,0x4c,0x31,0xc2,0x77,
	0x21,0x48,0x6d,0x4c,0xc1,0x39,0x5f,0xc2,0xa4,0x3b,0x5d,0x44,0xc1,0x79,0x77,0xa3,
	0xa2,0xb5,0x25,0x33,0xa6,0x33,0x70,0x71,0x49,0x29,0x45,0x68,0xc1,0x3f,0x72,0x7d,
	0x61,0x58,0xbb,0x3b,0x33,0x6a,0x72,0x70,0xa3,0x39,0x3d,0x52,0xc1,0x79,0xab,0xa4,
	0x60,0xb6,0x25,0x3b,0x6c,0x3a,0x70,0x77,0x4d,0x29,0x74,0xc0,0x46,0x32,0x46,0xa3,
	0xa2,0xb5,0x45,0x3b,0x6c,0x3a,0x70,0xa1,0x71,0x3f,0x50,0xc0,0x26,0x31,0x26,0xa3,
	0xa2,0xb3,0x25,0x37,0x4c,0x31,0xc2,0x23,0x21,0x43,0x2d,0x3a,0xc1,0x33,0x71,0x25,
	0x61,0xb2,0xbb,0x74,0x64,0x31,0xc2,0x7b,0x4b,0x69,0x40,0xc0,0x46,0x33,0x37,0xa5,
	0x50,0xb3,0x76,0x37,0x49,0xc2,0x32,0x31,0x4b,0xc2,0xbe,0x5b,0x32,0x32,0x71,0x70,
	0xae,0x59,0x41,0x2f,0x34,0xc2,0x3d,0x64,0xb4,0xa2,0xbe,0xa4,0x60,0xc2,0x66,0x51,
	0x41,0x49,0x38,0xc0,0x76,0x33,0x39,0xa5,0x70,0xb3,0x31,0x58,0xc1,0x79,0x2c,0xa5,
	0xb2,0xb9,0x65,0x33,0x24,0x34,0x70,0x2e,0x21,0x43,0x5d,0x5e,0xc1,0x49,0x6b,0xc2,
	0xa6,0x31,0x70,0xbf,0x72,0x32,0x72,0x50,0xaa,0x38,0xb2,0xbf,0x31,0x46,0xc2,0x7a,
	0x41,0x49,0x44,0xc0,0x7e,0x31,0xbd,0xa3,0x70,0xb6,0x36,0x67,0x36,0xc2,0x3a,0x51,
	0x6a,0x29,0x78,0xbf,0x76,0x32,0x4a,0xa5,0x40,0xb3,0x35,0x57,0x32,0xc2,0x3d,0x64,
	0x62,0x40,0xbb,0x33,0x60,0x32,0x70,0x71,0x21,0x43,0xbf,0x44,0xc1,0x69,0x77,0xa3,
	0x50,0xb7,0x45,0x3c,0x34,0x39,0xc2,0x75,0x4d,0x69,0xb6,0xbf,0x72,0x3e,0x71,0x70,
	0xa3,0x59,0x39,0x77,0x37,0xc2,0x61,0x63,0x61,0x70,0xbd,0xad,0x33,0x3e,0x71,0x70,
	0xad,0x3a,0xaf,0x38,0xc1,0x33,0x71,0x56,0x61,0x50,0xbb,0xa5,0xa6,0x34,0xc2,0x73,
	0x43,0x49,0x38,0xbf,0x41,0x38,0xc2,0x73,0x48,0x29,0x5c,0xbf,0x62,0xac,0x75,0x50,
	0xa4,0x59,0x39,0xb1,0x35,0xc2,0x4d,0x5b,0x61,0x78,0xbe,0xad,0x34,0x48,0x71,0x30,
	0xab,0x3d,0x2d,0x46,0xc1,0x41,0x7e,0xa4,0x40,0xb5,0x76,0x57,0x32,0xc2,0x35,0x5c,
	0x61,0x60,0xbc,0x5b,0x33,0x38,0x71,0x70,0xa6,0x39,0x6d,0x54,0xc1,0x49,0xa9,0xa5,
	0xb2,0xb4,0x45,0x3b,0x74,0x3d,0x70,0x7d,0x21,0x4a,0x5d,0x54,0xc1,0x49,0x78,0xa5,
	0x50,0xb5,0x76,0xb1,0x35,0xc2,0x66,0x51,0x54,0x69,0x38,0xbf,0xb8,0x32,0xac,0xa6,
	0x60,0xb5,0x25,0x35,0x40,0x38,0xc2,0x73,0x47,0x49,0x7c,0xbf,0x52,0x74,0x72,0x50,
	0xb1,0x59,0x3a,0x77,0x43,0xc2,0x6a,0x51,0x5b,0x69,0xae,0xc0,0x26,0x32,0x4d,0xa5,
	0x60,0xb3,0x75,0x27,0x40,0xc2,0x35,0x3e,0x70,0xb6,0x25,0x37,0xbe,0x42,0xc2,0x75,
	0x21,0x45,0xaf,0x66,0xc1,0x63,0x71,0x7a,0xb4,0x40,0xbb,0x33,0x44,0x31,0xc2,0x27,
	0x21,0x43,0x6d,0x54,0xc1,0x59,0x75,0xa3,0x50,0xb3,0x36,0x57,0x35,0xc2,0x31,0x3e,
	0x70,0xb6,0x75,0x77,0x32,0xc2,0x3e,0x51,0x4d,0x29,0x4c,0xc0,0x56,0x32,0x6f,0xa4,
	0xa2,0xb4,0x33,0x68,0xc1,0x31,0x33,0xc2,0xa5,0x35,0x30,0xbf,0x26,0x32,0x72,0xa4,
	0x30,0xb4,0x25,0x35,0x50,0x31,0xc2,0xa1,0x21,0x41,0x7d,0x4a,0xc1,0x59,0x78,0xa3,
	0x50,0xb5,0x38,0xb9,0x39,0xc2,0x3d,0x56,0x61,0x40,0xbb,0xad,0x36,0x40,0x71,0x70,
	0xaa,0x59,0x39,0xb1,0x3f,0xc2,0x35,0x56,0xb3,0x70,0xbe,0xad,0x34,0x54,0x71,0xc2,
	0xab,0x59,0x3e,0x4f,0x3e,0x31,0x70,0x72,0x49,0x49,0x4c,0xc0,0x76,0x32,0x55,0xa5,
	0x30,0xb9,0x45,0x38,0x2c,0x35,0x70,0x71,0x21,0x42,0xaf,0x38,0xc1,0x31,0xbc,0xa3,
	0xb2,0xb7,0x36,0x57,0x3e,0xc2,0x62,0x51,0xb0,0x29,0x54,0xbf,0x36,0x32,0x67,0xa7,
	0x30,0xb3,0x37,0x67,0x37,0xc2,0x3d,0x54,0xb3,0x40,0xbe,0xad,0x35,0x5c,0x71,0x30,
	0xa9,0x59,0x40,0x27,0x47,0xc2,0x49,0x5f,0xb5,0x50,0xbb,0x5b,0x34,0x56,0x71,0x30,
	0xa4,0x59,0x40,0x67,0x39,0xc2,0x32,0x51,0x5b,0xbb,0x6d,0x44,0xc1,0x75,0xb9,0xa5,
	0x50,0xb8,0x45,0x3a,0x3c,0x37,0xc2,0x73,0x21,0x39,0x5d,0x73,0x38,0xc2,0x31,0x37,
	0xbb,0x31,0x3c,0xbf,0x6a,0xb0,0x75,0x50,0xa3,0x31,0x70,0xc0,0xb8,0x31,0x7b,0xa3,
	0x50,0xb5,0x38,0xa9,0x39,0xc2,0x3d,0x54,0xb3,0x40,0xbc,0x53,0x68,0x31,0xc2,0x27,
	0x21,0x49,0x7d,0x5e,0xc1,0x41,0xb1,0xa8,0xb2,0xb7,0x35,0xa1,0x32,0xc2,0x39,0x52,
	0x62,0x50,0xbc,0x34,0x30,0x38,0x71,0x30,0xa6,0x77,0x6d,0x36,0xc1,0x3d,0x64,0xc2,
	0xa7,0x40,0xbf,0x40,0xc1,0x41,0xa2,0xa3,0x50,0xb4,0x25,0x35,0x68,0x3c,0x70,0x79,
	0x49,0x69,0x68,0xbf,0x72,0x4a,0x71,0x70,0xb0,0x59,0x39,0x6f,0x3a,0xc2,0x6e,0x51,
	0x57,0x29,0x3c,0xbf,0x62,0x46,0x71,0x70,0xa4,0x3c,0x5d,0x36,0xc1,0x43,0x71,0x23,
	0xb3,0x50,0xbc,0xa5,0x58,0x3a,0x70,0x79,0x21,0x5a,0x3d,0x54,0xc1,0x2b,0x71,0xab,
	0x62,0x48,0xbb,0x7b,0x37,0x4e,0x7b,0x50,0xb2,0x3f,0x7d,0x72,0xc1,0x4b,0x71,0x78,
	0xb4,0x48,0xbd,0x7b,0x37,0x4e,0x7b,0x50,0xb1,0x59,0x3a,0x37,0x32,0xc2,0x39,0x3f,
	0xc2,0xb4,0x25,0x37,0xba,0x32,0x70,0x2f,0x21,0x4a,0xaf,0x22,0xc1,0x63,0x71,0x7b,
	0x61,0x40,0xbb,0x33,0x48,0x34,0x70,0x75,0x4e,0xbb,0x44,0xbf,0x66,0x32,0xaa,0xa5,
	0x70,0xb6,0x25,0x35,0x6c,0x45,0x70,0x2d,0x21,0x41,0x6d,0x7e,0xc1,0x61,0xad,0xa4,
	0x50,0xb7,0x45,0x3a,0x70,0x32,0xc2,0x77,0x50,0x49,0x44,0xc0,0x32,0x5a,0x77,0x50,
	0xa8,0x3b,0x3d,0x44,0xc1,0x39,0x61,0xc2,0xb0,0x59,0x3b,0x27,0x4c,0xc2,0x41,0x59,
	0x64,0x68,0xbb,0xa5,0x58,0x31,0xc2,0x2f,0x21,0x44,0x7d,0x42,0xc1,0x3b,0x71,0xa9,
	0x61,0x40,0xbb,0x52,0x2c,0xc2,0x41,0x57,0x61,0x40,0xbd,0x53,0x3c,0x38,0x70,0x2b,
	0x21,0x40,0x4d,0x46,0xc1,0x41,0x7d,0xa3,0x50,0xb5,0x36,0xa9,0x33,0xc2,0x5e,0x51,
	0x70,0x69,0xc2,0xbf,0xb4,0xb6,0x73,0x30,0xa7,0x3a,0xbf,0x34,0xc1,0xb3,0xbc,0xa4,
	0x60,0xb4,0x75,0xc1,0x32,0xc2,0x39,0x51,0xb4,0x58,0xbc,0x54,0xaa,0x36,0x70,0x75,
	0x21,0x46,0x4d,0x38,0xc1,0x69,0x7e,0xa7,0xa2,0xb4,0x45,0x3a,0x58,0x32,0xc2,0x77,
	0x49,0xbb,0x54,0xbf,0x31,0x40,0xc2,0x73,0x4e,0x29,0x44,0xbf,0x41,0x3a,0xc2,0x75,
	0x50,0x49,0xb6,0xbf,0x32,0xbc,0x72,0x50,0xa5,0x3c,0xaf,0x36,0xc1,0x51,0xbe,0xa3,
	0xa2,0xb4,0x75,0xa9,0x44,0xc2,0x46,0x51,0x54,0x49,0xbe,0xbf,0xa4,0xc0,0x75,0x70,
	0xaa,0x59,0x40,0x47,0x3a,0xc2,0x4e,0x51,0x46,0x49,0x50,0xbf,0xa4,0x2a,0x71,0xc2,
	0xa8,0x40,0x2d,0x46,0xc1,0x21,0x2d,0xa3,0x60,0xb8,0x25,0x36,0x4c,0x38,0x70,0x29,
	0x44,0xbb,0xa2,0xc0,0x76,0x33,0x4e,0xa6,0xc2,0xb4,0x35,0x4f,0x43,0xc2,0x39,0x5f,
	0xb4,0xc2,0xbb,0x73,0xba,0x31,0xc2,0x2f,0x45,0xbb,0x70,0xc0,0x26,0x31,0x78,0xa3,
	0x50,0xb3,0x45,0x3c,0x68,0x35,0xc2,0x27,0x21,0x3c,0x3d,0x36,0xc1,0x51,0xb2,0xa4,
	0xc2,0xb3,0x76,0x77,0x33,0xc2,0x32,0x51,0x52,0x69,0x4c,0xbf,0xa4,0x56,0x75,0xc2,
	0xaa,0x59,0x41,0xb1,0x32,0xc2,0x35,0x6d,0x61,0x28,0xbb,0x23,0x48,0x31,0xc2,0x76,
	0x4e,0x29,0x44,0xbf,0x42,0x40,0x71,0x70,0xa3,0x31,0xa2,0xbf,0x62,0xb0,0x72,0x50,
	0xa5,0x3b,0xbf,0x34,0xc1,0x51,0xb9,0xa3,0xa2,0xb6,0x25,0x36,0x78,0x38,0xc2,0x71,
	0x45,0x69,0x30,0xbf,0x52,0xa8,0x71,0x30,0xa6,0x3e,0xbf,0x44,0xc1,0x5b,0x72,0x24,
	0x61,0xba,0xbb,0x3b,0x33,0xa2,0x71,0xc2,0xa7,0x3a,0x4d,0x34,0xc1,0x4b,0x71,0xae,
	0x62,0xaa,0xbb,0xad,0x35,0x7e,0x74,0x30,0xa9,0x59,0x3a,0x37,0x32,0xc2,0x3e,0x51,
	0x68,0xbb,0xb6,0xc0,0x66,0x33,0x57,0xa4,0xb2,0xb4,0x45,0x35,0x70,0x51,0x70,0x23,
	0x4f,0x2b,0x4c,0xc0,0x26,0x33,0xb5,0xa9,0xb2,0xb3,0x45,0x35,0x2c,0x3d,0xc2,0x71,
	0x42,0x29,0x38,0xbf,0x51,0x60,0xc2,0x73,0x3a,0x30,0xbb,0x3b,0x34,0x24,0x71,0xc2,
	0xa6,0x3e,0xaf,0x46,0xc1,0x41,0xb4,0xa4,0x70,0xb3,0x75,0x57,0x46,0xc2,0x3d,0x57,
	0xb3,0x40,0xbd,0x3b,0x35,0x74,0x77,0x30,0xa4,0x3b,0x6d,0x6c,0xc1,0x49,0x72,0xa3,
	0xb2,0xb5,0x45,0x3b,0x5c,0x31,0xc2,0x21,0x21,0x49,0x5d,0x6e,0xc1,0x51,0x48,0xc2,
	0xa7,0x3e,0x5d,0x44,0xc1,0xa5,0x72,0x3f,0x64,0x38,0xbd,0xa5,0xae,0x31,0xc2,0x77,
	0x41,0x29,0xbe,0xbf,0x52,0x3c,0x78,0x30,0xab,0x59,0x3c,0x47,0x4c,0xc2,0x31,0x64,
	0xb3,0xa2,0xbb,0x73,0x68,0x31,0xc2,0x7d,0x21,0x4c,0x3e,0x32,0xc1,0x31,0x60,0xc2,
	0xa7,0x40,0x5d,0x6a,0xc1,0x51,0xc1,0xa6,0xa2,0xb4,0x45,0x3a,0xae,0x3f,0x70,0x71,
	0x47,0x69,0x24,0xbf,0x52,0x26,0x71,0x30,0xa4,0x40,0xbf,0x38,0xc1,0x2b,0x72,0x66,
	0xb3,0x58,0xbe,0x7b,0x33,0x66,0x76,0x50,0xa3,0x3b,0x5d,0x36,0xc1,0x51,0x21,0xa4,
	0xb2,0xb3,0x25,0x37,0x5c,0x3a,0xc2,0xa1,0x21,0x4e,0x6d,0x3a,0xc1,0x43,0x71,0x7c,
	0x61,0xba,0xbc,0xa5,0x48,0x3a,0xc2,0x2b,0x21,0x66,0x6d,0x3a,0xc1,0x33,0x71,0x27,
	0x62,0x38,0xbb,0xa6,0x4c,0x55,0xc2,0x2d,0x21,0x42,0xbf,0x42,0xc1,0x6b,0x71,0xb8,
	0xb3,0x58,0xbb,0x7b,0x33,0x2c,0x7c,0x50,0xaa,0x3b,0xaf,0x40,0xc1,0x5b,0x72,0x36,
	0x61,0x40,0xbb,0x72,0x48,0xc2,0x6e,0x51,0x66,0xbc,0x54,0xbf,0x72,0x5c,0x73,0x70,
	0xa8,0x3a,0x6d,0x34,0xc1,0x53,0x72,0x32,0x61,0x70,0xbd,0x7b,0x32,0x48,0x71,0x70,
	0xab,0x59,0x3c,0x4f,0x5c,0xc2,0x41,0x68,0xb7,0xa2,0xbb,0xa5,0x24,0x32,0x70,0x73,
	0x21,0x62,0x6d,0x34,0xc1,0x73,0x71,0x2c,0xb5,0x30,0xbb,0x33,0x30,0x32,0x70,0x79,
	0x43,0xbb,0x64,0xc0,0x26,0x33,0x48,0xa3,0x60,0xb7,0x25,0x37,0x68,0x4d,0x70,0x7d,
	0x4c,0x49,0x44,0xbf,0x72,0xac,0x75,0x70,0xaa,0x59,0x42,0x2f,0x3a,0xc2,0x6e,0x51,
	0x6f,0x4a,0x40,0xbf,0xb4,0x4e,0xa1,0x50,0xad,0x59,0x42,0x2f,0x3a,0xc2,0x6e,0x51,
	0x68,0x2a,0x50,0xbf,0xb4,0xa2,0x72,0x50,0xaa,0x3c,0xaf,0xa2,0xc1,0x43,0x72,0x43,
	0x62,0xaa,0xbb,0x3b,0x32,0x6e,0x7a,0xc2,0xa4,0x37,0x70,0xbf,0x42,0x74,0x76,0x30,
	0xa5,0x3a,0x6d,0x58,0xc1,0xa5,0x71,0x23,0x62,0xaa,0xbc,0x34,0x6c,0x33,0x70,0x2b,
	0x21,0x54,0x5d,0x36,0xc1,0xad,0x71,0xac,0xb5,0x68,0xbb,0x33,0x48,0x34,0xc2,0xa1,
	0x47,0xbd,0x7c,0xbf,0xb8,0x34,0x66,0xa5,0x60,0xb4,0x45,0x36,0xa2,0x4e,0x70,0x79,
	0x4d,0x49,0x44,0xc0,0x76,0x33,0x7a,0xa4,0xb2,0xb3,0x45,0x37,0xaa,0x5b,0x70,0x21,
	0x43,0x69,0x6c,0xc0,0x26,0x33,0x64,0xac,0x50,0xb6,0x25,0x33,0x58,0x38,0x70,0x7d,
	0x21,0x46,0xc0,0x5e,0xc1,0x49,0xb8,0xa5,0x60,0xb3,0x25,0x38,0x44,0x4d,0x70,0x21,
	0x21,0x41,0xaf,0x4e,0xc1,0x63,0x71,0x76,0xb8,0x50,0xbb,0x74,0xbe,0x42,0xc2,0x2f,
	0x21,0x45,0x5e,0x3c,0xc1,0x3b,0x71,0x78,0x66,0xc2,0xbb,0x31,0xae,0xc2,0x6d,0x46,
	0xc2,0xb6,0x25,0x33,0x5c,0x61,0xc2,0x29,0x21,0x47,0x2e,0x44,0xc1,0x39,0x21,0xa3,
	0xa2,0xb4,0x77,0x67,0x4a,0xc2,0x35,0x49,0x70,0xb8,0x25,0x37,0x5c,0x61,0xc2,0x73,
	0x21,0x4c,0xaf,0x7c,0xc1,0x59,0x6e,0xc2,0xa4,0x3a,0x2d,0x3c,0xc1,0x31,0x30,0xa3,
	0x70,0xba,0x45,0x37,0x5c,0x61,0xc2,0x77,0x4f,0xbc,0x4c,0xc0,0x36,0x32,0x72,0xa3,
	0xa2,0xb6,0x45,0x37,0x48,0x61,0x70,0x7d,0x43,0x29,0x4c,0xc0,0xb4,0x62,0x77,0x70,
	0xa4,0x59,0x43,0x77,0x7c,0xc2,0x39,0x5b,0x61,0x70,0xbd,0x34,0xa2,0x43,0xc2,0xa1,
	0x21,0x43,0x7d,0x40,0xc1,0x39,0xb9,0xae,0xa2,0xb4,0x45,0x37,0x34,0x33,0x70,0xa1,
	0x21,0x39,0x5d,0x38,0xc1,0x7b,0x71,0xa9,0x67,0x40,0xbc,0x34,0x44,0x5e,0xc2,0x29,
	0x21,0x46,0xaf,0x46,0xc1,0xb5,0x71,0x54,0x61,0x40,0xbc,0x7b,0x34,0x26,0x73,0x30,
	0xa3,0x3c,0x6d,0x5e,0xc1,0x41,0xa8,0xa3,0x60,0xb5,0x45,0x37,0x74,0x3b,0xc2,0x75,
	0x48,0xbb,0xa6,0xbf,0xa8,0x33,0x41,0xa4,0x40,0xb9,0x36,0x77,0x35,0xc2,0x42,0x51,
	0x25,0xbc,0x6c,0xbf,0x21,0xa4,0xc2,0x79,0x48,0x69,0x3d,0x34,0xc1,0x55,0x71,0xa6,
	0x60,0xb6,0x45,0x35,0xae,0x32,0xc2,0x7d,0x50,0x29,0x64,0xc0,0x76,0x32,0x3d,0xa3,
	0x50,0xb3,0x25,0x34,0x3c,0x35,0x70,0x27,0x21,0x56,0x7e,0x6a,0xc1,0x21,0xc0,0xa4,
	0xa2,0xb4,0x45,0x37,0x64,0x31,0xc2,0x27,0x4a,0xbb,0x44,0xbf,0x46,0x33,0xaf,0xae,
	0xa2,0xb6,0x36,0x6f,0x2c,0xc2,0x3a,0x51,0x6e,0x69,0x48,0xc0,0xa4,0xbe,0x73,0x30,
	0xa8,0x59,0x42,0x6f,0x2c,0xc2,0x35,0x60,0x61,0x28,0xbc,0xa6,0xae,0x3f,0xc2,0x73,
	0x21,0x4a,0x5d,0x44,0xc1,0x39,0xbb,0xa3,0x30,0xba,0x45,0x38,0x4c,0x59,0x70,0xa1,
	0x41,0x49,0x38,0xbf,0x76,0x32,0xa6,0xaa,0xa2,0xb7,0x45,0x33,0x34,0x31,0xc2,0x25,
	0x21,0x46,0x4e,0x58,0xc1,0x69,0x21,0xa7,0xa2,0xb8,0x25,0x39,0x34,0x31,0xc2,0x21,
	0x21,0x44,0x6e,0x3c,0xc1,0x31,0x34,0xc2,0xa5,0x59,0x3d,0xb1,0x42,0xc2,0x3d,0x4f,
	0xc2,0xb7,0x25,0x37,0xba,0x3e,0x70,0x77,0x4b,0x4b,0x58,0xbf,0x76,0x32,0xb9,0xa4,
	0x50,0xb3,0x25,0x35,0x54,0x37,0xc2,0x2d,0x21,0x45,0xbf,0x76,0xc1,0x61,0xb5,0xa7,
	0x70,0xb8,0x25,0x39,0x6c,0x39,0x70,0x23,0x21,0x4c,0xc0,0x72,0xc1,0x51,0x77,0xac,
	0xb2,0xb5,0x45,0x3b,0x60,0x37,0xc2,0x2d,0x21,0x41,0x3d,0x7e,0xc1,0x31,0xba,0xa4,
	0x60,0xb5,0x37,0xb1,0x38,0xc2,0x4a,0x51,0x23,0xbb,0x68,0xbf,0xa8,0x32,0x54,0xa7,
	0x70,0xb6,0x25,0x34,0xba,0x46,0x70,0xa1,0x21,0x5c,0x6d,0x3a,0xc1,0x43,0x71,0x71,
	0xb7,0xb2,0xbb,0x73,0x24,0x32,0xc2,0x2d,0x21,0x48,0x5d,0x2a,0xc1,0x53,0x71,0xb0,
	0xb3,0x58,0xbb,0x7b,0x33,0x72,0x75,0x50,0xa4,0x59,0x40,0x3f,0x56,0xc2,0x46,0x51,
	0x6a,0xbb,0x78,0xc0,0xb8,0x31,0x79,0xa8,0xc2,0xb3,0x78,0x47,0x44,0xc2,0x3a,0x51,
	0x6b,0xbb,0x54,0xc0,0x36,0x32,0x49,0xa3,0xa2,0xb4,0x45,0x36,0x44,0x39,0xc2,0x25,
	0x48,0xbb,0x3c,0xbf,0x46,0x32,0xb4,0xaa,0x50,0xba,0x25,0x34,0x2c,0x41,0x70,0x73,
	0x3d,0x50,0xbc,0x34,0x30,0x36,0xc2,0x7b,0x4d,0xbc,0x34,0xbf,0x36,0x32,0x68,0xa4,
	0x70,0xb6,0x35,0xa1,0x32,0xc2,0x52,0x51,0x69,0x69,0x78,0xc0,0xa8,0x31,0x25,0xa5,
	0x40,0xb9,0x45,0x36,0x50,0x5f,0x70,0x21,0x44,0xbc,0x78,0xbf,0xa8,0x33,0x77,0xa3,
	0x50,0xb7,0x45,0x36,0x50,0x5f,0x70,0x7d,0x4e,0x49,0x54,0xc0,0xb8,0x32,0x74,0xa3,
	0x50,0xb9,0x25,0x37,0xc2,0x5e,0xc2,0x7d,0x47,0x2a,0xa2,0xbf,0x56,0x32,0x2f,0xaa,
	0xc2,0xb5,0x45,0x35,0x34,0x3c,0x70,0x73,0x3d,0x50,0xbb,0xa6,0x6c,0x33,0x70,0x7d,
	0x46,0x49,0x40,0xbf,0x36,0x32,0x6f,0xaa,0xa2,0xb6,0x35,0xa1,0x32,0xc2,0x52,0x51,
	0x28,0x2b,0x48,0xbf,0xa4,0x44,0x71,0x70,0xa9,0x3b,0xbf,0x38,0xc1,0x43,0x71,0x21,
	0xb7,0x38,0xbd,0x74,0x6c,0x4b,0xc2,0x75,0x21,0x56,0xbf,0x3e,0xc1,0xb3,0x7c,0xab,
	0xa2,0xb4,0x75,0xa1,0x32,0xc2,0x5e,0x51,0x59,0xbc,0x50,0xbf,0xa4,0x26,0x7e,0x70,
	0xa5,0x59,0x41,0x3f,0xa3,0xc2,0x31,0x50,0x70,0xb3,0x31,0x70,0x7a,0xc2,0x53,0x6a,
	0xb4,0x60,0xbd,0x54,0x38,0x33,0x70,0x21,0x21,0x43,0x3d,0xaa,0xc1,0x73,0x72,0x61,
	0xb3,0x58,0xbc,0x3b,0x32,0x76,0x77,0x30,0xb2,0x3b,0x2d,0x50,0xc1,0xad,0x71,0x6d,
	0x62,0x40,0xbb,0x7b,0x37,0x76,0x77,0x30,0xab,0x59,0x3b,0xc1,0x7e,0xc2,0x59,0x66,
	0x64,0x60,0xbd,0x7b,0x37,0x76,0x77,0x30,0xb1,0x59,0x3b,0x2f,0x7e,0xc2,0x5a,0x51,
	0x29,0x29,0xae,0xc0,0xa8,0x32,0x40,0xa5,0x70,0xb6,0x37,0xa9,0x5f,0xc2,0x41,0x59,
	0xb7,0x30,0xbb,0xa6,0x5c,0x31,0xc2,0x25,0x21,0x50,0xaf,0x24,0xc1,0x7b,0x71,0x59,
	0xb7,0x30,0xbb,0x74,0x64,0x48,0x70,0x73,0x3d,0x50,0xbe,0x5b,0x33,0xb4,0x74,0x70,
	0xaf,0x3f,0x6d,0xae,0xc1,0x43,0x72,0x46,0x61,0x50,0xbd,0x3b,0x35,0xba,0x24,0x30,
	0xaa,0x3a,0x4d,0x34,0xc1,0x43,0x72,0x3e,0x62,0x48,0xbd,0x5b,0x35,0xba,0x24,0x30,
	0xaf,0x3f,0x2d,0xae,0xc1,0x3b,0x72,0x34,0xb3,0xba,0xbc,0x5b,0x35,0x28,0x24,0x70,
	0xa9,0x3e,0x5e,0x40,0xc1,0x5b,0x72,0x41,0xb5,0xaa,0xbe,0x5b,0x33,0x26,0x73,0x70,
	0xa5,0x59,0x39,0x6f,0x48,0xc2,0x41,0x53,0x65,0x28,0xbe,0xad,0x34,0x50,0x72,0xc2,
	0xb2,0x59,0x41,0x57,0x7b,0xc2,0x49,0x6a,0xb7,0x78,0xbb,0x7b,0x35,0xa8,0x72,0x50,
	0xb1,0x59,0x41,0x57,0x7b,0xc2,0x3d,0x68,0xb7,0x78,0xbc,0x5b,0x34,0x4c,0x71,0x70,
	0xa7,0x59,0x3d,0xb1,0x55,0xc2,0x52,0x51,0x5d,0x2b,0x54,0xbf,0x46,0x32,0x29,0xae,
	0x30,0xb3,0x76,0x6f,0x33,0xc2,0x31,0x51,0xb3,0x3f,0x7c,0xc0,0x2e,0x33,0x3c,0xb2,
	0x60,0xb5,0x35,0x67,0x3c,0xc2,0x4e,0x51,0x70,0x6c,0x58,0xc0,0x46,0x31,0xc0,0xa6,
	0xa2,0xb4,0x76,0x67,0x23,0xc2,0x56,0x51,0x6f,0x4b,0x58,0xc0,0x76,0x33,0x41,0xa3,
	0x60,0xb6,0x45,0x38,0xba,0x3f,0x70,0x71,0x48,0x69,0x30,0xbf,0xb4,0x52,0x71,0x30,
	0xa4,0x59,0x3e,0x47,0x51,0xc2,0x31,0x3f,0xc2,0xb7,0x45,0x39,0x7c,0x6e,0xc2,0xa1,
	0x42,0x4a,0x74,0xbf,0x46,0x32,0x22,0xa3,0x70,0xb3,0x75,0x4f,0x32,0xc2,0x36,0x51,
	0x75,0x6c,0xae,0xbf,0x72,0x32,0x71,0x70,0xa7,0x59,0x3e,0x47,0x35,0xc2,0x52,0x51,
	0x41,0x49,0x38,0xc0,0x56,0x32,0x5b,0xa8,0x50,0xb5,0x35,0x37,0x32,0xc2,0x42,0x51,
	0x65,0x6a,0x3c,0xc0,0x36,0x31,0x71,0xa3,0x50,0xb6,0x25,0x36,0x5c,0x45,0xc2,0x73,
	0x31,0xc2,0xbb,0x7b,0x34,0x22,0xa7,0x70,0xa6,0x38,0x30,0xc0,0xb8,0x32,0x78,0xab,
	0x70,0xb3,0x76,0x27,0x48,0xc2,0x3e,0x51,0x27,0x69,0x54,0xbf,0x36,0x32,0xbe,0xb3,
	0xb2,0xb6,0x75,0x4f,0x35,0xc2,0x6e,0x51,0x76,0xbc,0x48,0xbf,0xa4,0x64,0x73,0x50,
	0xa3,0x59,0x3f,0x67,0x7e,0xc2,0x36,0x51,0x68,0x2b,0x4c,0xbf,0x26,0x32,0x2a,0xa4,
	0x40,0xb3,0x45,0x36,0xb6,0x47,0x70,0x77,0x47,0x69,0x54,0xbf,0x46,0x32,0x21,0xa7,
	0xa2,0xb6,0x45,0x35,0x2c,0x35,0x70,0x75,0x21,0x48,0xbf,0x74,0xc1,0x71,0x2c,0xaa,
	0x40,0xb5,0x45,0x37,0x28,0x79,0xc2,0x27,0x43,0x29,0x3c,0xc0,0xb8,0x32,0xaa,0xb2,
	0xb2,0xb8,0x36,0x77,0x35,0xc2,0x42,0x51,0x26,0xbc,0x48,0x56,0xc1,0xb1,0x71,0x26,
	0x67,0xb2,0xbc,0x73,0x58,0x31,0xc2,0xa1,0x21,0x4a,0x3f,0x54,0xc1,0x3b,0x71,0x79,
	0x61,0x48,0xbd,0x3b,0x33,0x62,0x76,0xc2,0xa9,0x3f,0x5d,0x4a,0xc1,0xbd,0x71,0xa4,
	0xb3,0x40,0xbe,0x5b,0x34,0x52,0x7a,0x50,0xa7,0x3a,0x6e,0x40,0xc1,0x39,0xbe,0xae,
	0x70,0xb3,0x45,0x37,0x78,0x39,0xc2,0xa1,0x4b,0xbc,0xc2,0xbf,0x72,0xbe,0x24,0x50,
	0xa5,0x35,0x50,0xbf,0x72,0x3c,0x24,0x70,0xa5,0x59,0x41,0xa1,0xbd,0xc2,0x41,0x6f,
	0x6a,0x38,0xbc,0x34,0x44,0x39,0x70,0x71,0x21,0x62,0x6d,0x34,0xc1,0x23,0x71,0x2b,
	0xb8,0x40,0xbc,0x34,0xb2,0x35,0x70,0x73,0x21,0x4c,0x6e,0x42,0xc1,0x3b,0x71,0xa8,
	0xb3,0x40,0xbd,0x3b,0x33,0xc0,0x7e,0x30,0xa3,0x3a,0x6d,0x34,0xc1,0x71,0xae,0xa5,
	0x70,0xb4,0x75,0xb9,0x32,0xc2,0x42,0x51,0x73,0xbb,0x38,0xc0,0x46,0x32,0xa4,0xa4,
	0x30,0xb3,0x37,0xa9,0x3c,0xc2,0x39,0x55,0x61,0x40,0xbc,0x33,0x24,0x32,0x70,0x2d,
	0x21,0x57,0x2f,0x4a,0xc1,0x41,0x26,0xa5,0xc2,0xb4,0x36,0xb9,0x50,0xc2,0x35,0x70,
	0xb3,0x30,0xbb,0xa5,0xa6,0x6e,0x70,0x78,0x3c,0xc2,0xbd,0x4b,0x33,0x2c,0x75,0x30,
	0xa6,0x3b,0x5f,0x54,0xc1,0xbd,0x71,0x75,0xb4,0x70,0xbb,0xa5,0xa2,0x3d,0x70,0x29,
	0x40,0x70,0xbe,0x5b,0x35,0xbc,0x28,0xc2,0xa5,0x33,0xa2,0xc0,0xa8,0x32,0x34,0xa5,
	0xb2,0xb6,0x45,0x35,0x5c,0x31,0xc2,0x7d,0x21,0x4e,0x3f,0x58,0xc1,0x31,0xb7,0xa4,
	0xb2,0xb4,0x45,0x38,0x68,0x37,0xc2,0x2d,0x4a,0x29,0x44,0xbf,0x56,0x33,0x39,0xa5,
	0xb2,0xb4,0x75,0x6f,0x43,0xc2,0x3e,0x51,0xbd,0x49,0x44,0xbf,0x56,0x32,0x3e,0xae,
	0x70,0xb5,0x36,0x58,0x4b,0xc2,0x62,0x51,0x2b,0x49,0x44,0xc0,0xa8,0x32,0x6c,0xb3,
	0xc2,0xb4,0x76,0x47,0x43,0xc2,0x6a,0x51,0x54,0xbd,0x58,0xbf,0xb8,0x32,0xa8,0xa3,
	0xa2,0xb4,0x45,0x35,0x70,0x40,0xc2,0x79,0x44,0x4b,0x54,0xbf,0x56,0x33,0x58,0xa4,
	0x70,0xb4,0x45,0x39,0xae,0x3a,0x70,0x77,0x42,0x49,0x38,0xbf,0xb4,0x7e,0x73,0xc2,
	0xa7,0x3e,0xaf,0x74,0xc1,0x43,0x72,0x4d,0x63,0x78,0xbb,0x3b,0x32,0x7c,0x26,0xc2,
	0xa4,0x37,0x70,0xbf,0x42,0x38,0x7b,0x70,0xa7,0x3a,0x5e,0xac,0xc1,0x73,0x71,0x2d,
	0x63,0x78,0xbc,0x73,0x3c,0x38,0x70,0x79,0x4b,0x2a,0x38,0xbf,0xb8,0x33,0x5e,0xa3,
	0xa2,0xba,0x25,0x37,0x60,0x5e,0xc2,0x21,0x44,0xbf,0x34,0xc0,0x26,0x32,0x66,0xa4,
	0xa2,0xba,0x25,0x35,0x5c,0x31,0xc2,0x21,0x21,0x42,0x6e,0x68,0xc1,0x61,0x71,0xa4,
	0xb2,0xb9,0x25,0x39,0x5c,0x31,0xc2,0x7b,0x21,0x58,0x6e,0x64,0xc1,0x43,0x72,0x30,
	0x63,0x50,0xbb,0x7b,0x33,0x7a,0x77,0xc2,0xaa,0x3e,0x4e,0x62,0xc1,0x5b,0x72,0x30,
	0x63,0x50,0xbb,0x7b,0x33,0xb2,0x79,0x30,0xa4,0x59,0x40,0x4f,0x2a,0xc2,0x4e,0x51,
	0x5a,0x49,0xb2,0xc0,0xa8,0x32,0x55,0xad,0x60,0xb4,0x76,0x58,0x43,0xc2,0x46,0x51,
	0x65,0x49,0x58,0xbf,0x56,0x32,0x58,0xa6,0x70,0xb6,0x45,0x35,0xba,0x59,0xc2,0x7d,
	0x4b,0x2b,0x54,0xc0,0xa8,0x33,0x68,0xb4,0xa2,0xb5,0x45,0x34,0x7c,0x37,0xc2,0x21,
	0x21,0x44,0x3f,0xa4,0xc1,0xbb,0xad,0xa3,0x70,0xba,0x25,0x3b,0xb2,0x3a,0x70,0x21,
	0x21,0x45,0x3d,0x3a,0xc1,0x3b,0x72,0x6d,0xb3,0x70,0xbd,0x5b,0x34,0x7a,0x72,0x50,
	0xa6,0x3c,0x6d,0x56,0xc1,0x6b,0x71,0xa5,0xbb,0xba,0xbd,0x3b,0x33,0xae,0x74,0x70,
	0xab,0x59,0x3a,0x6f,0x2f,0xc2,0x36,0x51,0x6b,0x4a,0x2c,0xc0,0x46,0x32,0x56,0xba,
	0xa2,0xb6,0x25,0x35,0xb2,0x60,0x70,0xa1,0x42,0x49,0x38,0xc0,0x66,0x33,0x5f,0xab,
	0xc2,0xb9,0x25,0x35,0xb6,0x60,0xc2,0x73,0x21,0x4a,0x6d,0x56,0xc1,0x49,0x21,0xa9,
	0x40,0xb4,0x38,0xb9,0x32,0xc2,0x46,0x51,0x68,0x4b,0xc2,0xbf,0x41,0x56,0xc2,0x27,
	0x71,0x48,0x60,0xc0,0x22,0x3c,0x72,0x50,0xab,0x59,0x3e,0x2f,0x2f,0xc2,0x4d,0x6e,
	0xb3,0x50,0xbe,0x5b,0x35,0x3a,0xaf,0xc2,0xa3,0x59,0x35,0x70,0x32,0xc2,0x39,0x58,
	0x64,0x78,0xbb,0x53,0x30,0x34,0x31,0x30,0xa7,0xab,0x40,0x27,0xa8,0xc2,0x4d,0x56,
	0x61,0x58,0xbc,0x5b,0x35,0x72,0x22,0xc2,0xb1,0x59,0x42,0x67,0x2c,0xc2,0x52,0x51,
	0x6c,0x6b,0x54,0xc0,0x62,0x6a,0x72,0x50,0xac,0x59,0x42,0x67,0x2c,0xc2,0x49,0x53,
	0xb8,0x28,0xbb,0x7b,0x34,0xb0,0x25,0xc2,0xb1,0x3d,0xaf,0x3c,0xc1,0x63,0x72,0x33,
	0xb8,0x28,0xbc,0x74,0x54,0x43,0x70,0x75,0x21,0x4c,0x4d,0x5c,0xc1,0xa5,0x71,0x2c,
	0xb3,0x58,0xbc,0xa6,0xba,0x55,0x70,0xa1,0x21,0x48,0xa1,0x3c,0xc1,0x61,0xba,0xa5,
	0xc2,0xb5,0x38,0x37,0x71,0xc2,0x6e,0x51,0x61,0x29,0x7c,0xc0,0x46,0x31,0xb3,0xab,
	0x40,0xb4,0x38,0x6f,0x48,0xc2,0x35,0x49,0x70,0xb9,0x25,0x35,0x78,0x45,0xc2,0x7d,
	0x4c,0x49,0x2c,0xbf,0x36,0x34,0x67,0xb4,0x60,0xb6,0x76,0x3f,0x7b,0xc2,0x6e,0x51,
	0x5c,0xbb,0x2c,0xc0,0x26,0x33,0x3e,0xa3,0x50,0xb4,0x75,0xb9,0x7a,0xc2,0x31,0x45,
	0xc2,0xb7,0x45,0x37,0x6c,0x55,0xc2,0x21,0x4e,0x69,0x54,0xbf,0xa8,0x33,0x2d,0xac,
	0x70,0xb5,0x38,0x57,0x5d,0xc2,0x52,0x51,0x57,0x29,0xb2,0xbf,0xa4,0x44,0x71,0x70,
	0xab,0x59,0x3d,0x2f,0x7a,0xc2,0x6a,0x51,0x4a,0x49,0x58,0xbf,0x56,0x32,0xbd,0xac,
	0xb2,0xb7,0x38,0xb9,0x5e,0xc2,0x62,0x51,0x23,0x69,0x38,0xc0,0x36,0x32,0x6b,0xac,
	0xb2,0xb6,0x36,0x37,0x43,0xc2,0x3a,0x51,0x75,0x2b,0x7c,0xc0,0x76,0x32,0xb3,0xac,
	0x30,0xb7,0x36,0x37,0x3f,0xc2,0x6a,0x51,0x27,0x4d,0x70,0xc0,0x52,0x52,0x74,0x30,
	0xa3,0x59,0x3e,0x60,0x33,0xc2,0x51,0x59,0x61,0xba,0xbc,0x7b,0x36,0xc2,0x23,0x50,
	0xaf,0x59,0x3d,0x57,0xa2,0xc2,0x52,0x51,0x6c,0x29,0x44,0xc0,0xa8,0x32,0x41,0xa4,
	0xb2,0xba,0x45,0x36,0xa2,0x57,0xc2,0x25,0x21,0x5b,0x3d,0x4e,0xc1,0xb5,0x71,0xa1,
	0xb6,0xa2,0xbc,0x74,0x40,0x54,0x70,0xa1,0x21,0x4a,0x6e,0x3a,0xc1,0x4b,0x72,0x4c,
	0xb3,0x58,0xbd,0x3b,0x33,0x58,0x71,0x70,0xaa,0x59,0x3e,0x5f,0x5f,0xc2,0x5e,0x51,
	0x6e,0xbb,0x44,0xc0,0x36,0x32,0x42,0xac,0x60,0xba,0x25,0x38,0x68,0x32,0xc2,0x23,
	0x21,0x53,0x4e,0x46,0xc1,0x61,0x71,0xac,0x50,0xb7,0x45,0x3d,0x54,0x3a,0xc2,0x21,
	0x21,0x41,0x3e,0x44,0xc1,0x43,0x72,0x39,0xbd,0x60,0xbb,0x52,0x3c,0xc2,0x35,0x5a,
	0xb3,0x48,0xbb,0x74,0xb2,0x33,0x70,0x7d,0x45,0xbb,0x3c,0xbf,0x62,0xb2,0x73,0xc2,
	0xa4,0x59,0x3e,0xa2,0x46,0xc2,0x51,0x61,0xb3,0x40,0xbe,0x7b,0x33,0x4a,0x71,0x70,
	0xa7,0x59,0x38,0xc1,0xa1,0xc2,0x3d,0x57,0x61,0x40,0xbd,0x54,0x68,0x33,0x70,0x77,
	0x48,0x4d,0x3c,0xbf,0x52,0x24,0x79,0x50,0xa3,0x3e,0x2d,0x52,0xc1,0x6b,0x71,0xa7,
	0xb7,0xa2,0xbc,0x74,0x28,0x57,0xc2,0x25,0x21,0x52,0x4d,0x4a,0xc1,0x61,0x24,0xa3,
	0x50,0xb6,0x36,0x3f,0x38,0xc2,0x4d,0x5a,0xb3,0x39,0x3c,0xc0,0x5e,0x32,0x27,0xb5,
	0xa2,0xba,0x25,0x38,0x68,0x32,0xc2,0x73,0x43,0x69,0x38,0xbf,0x22,0x26,0x71,0xc2,
	0xa3,0x75,0xa2,0xbf,0x7a,0x40,0x72,0x70,0xa4,0x3e,0xbf,0x3e,0xc1,0x4b,0x71,0xb3,
	0x65,0x28,0xbb,0x33,0x40,0x37,0x70,0x75,0x48,0x6a,0x48,0xbf,0x66,0x32,0xc0,0xb3,
	0xa2,0xb3,0x74,0xa2,0xc1,0x31,0x30,0xa3,0x70,0xb4,0x37,0x77,0x58,0xc2,0x45,0x5c,
	0x61,0x48,0xbc,0x54,0x30,0x33,0x70,0x77,0x4b,0x2c,0x58,0xc0,0xb8,0x32,0x33,0xab,
	0x50,0xb3,0x37,0xa1,0x33,0xc2,0x4d,0x52,0xb3,0x40,0xbc,0x5b,0x34,0x6a,0xa9,0xc2,
	0xa3,0x59,0x39,0x67,0x32,0xc2,0x35,0x52,0xb5,0x50,0xbc,0xad,0x33,0x32,0x75,0xc2,
	0xab,0x3f,0x5f,0xb2,0xc1,0x2b,0x71,0xbd,0x6a,0x40,0xbc,0xa5,0x24,0x3b,0xc2,0x79,
	0x4a,0x49,0x44,0xc0,0x32,0x5a,0x76,0x70,0xa3,0x3a,0x6d,0x34,0xc1,0x51,0x25,0xa5,
	0x30,0xb7,0x45,0x36,0x78,0x61,0x70,0x7d,0x4d,0x4d,0x78,0xbf,0x56,0x32,0xc2,0xa3,
	0xb2,0xb8,0x75,0xb1,0x33,0xc2,0x35,0x52,0xb3,0x40,0xbc,0x53,0x5c,0x32,0x70,0x7d,
	0x48,0x29,0x44,0xc0,0x42,0x32,0x75,0xc2,0xa5,0x59,0x3a,0xb9,0x6e,0xc2,0x39,0x57,
	0xb3,0x48,0xbb,0xad,0x34,0x42,0xa6,0x30,0xa8,0x3f,0xaf,0x3e,0xc1,0x49,0x2e,0xa3,
	0x30,0xb4,0x76,0x27,0x6e,0xc2,0x36,0x51,0x4e,0x29,0x4c,0xbf,0x42,0x4a,0x71,0x30,
	0xa5,0x59,0x40,0x4f,0x62,0xc2,0x3d,0x56,0xb3,0x48,0xbc,0xa6,0x24,0x76,0xc2,0x73,
	0x21,0x4c,0x4d,0x7c,0xc1,0x5b,0x71,0x7e,0xb3,0x50,0xbb,0xa4,0x74,0xc2,0x4d,0x54,
	0xb8,0xb2,0xbd,0x3b,0x33,0x5e,0x78,0x50,0xa9,0x40,0x5e,0x68,0xc1,0x6b,0x71,0xba,
	0x61,0x30,0xbd,0x5b,0x33,0x66,0x71,0x30,0xa6,0x3e,0x4d,0x3a,0xc1,0x4b,0x71,0x29,
	0xb4,0xba,0xbb,0xa5,0x48,0x35,0xc2,0x71,0x21,0x5d,0x2d,0x38,0xc1,0x51,0xb3,0xa3,
	0xa2,0xb5,0x78,0x27,0x5a,0xc2,0x32,0x51,0x6d,0x49,0x44,0xbf,0xa4,0x22,0x24,0x30,
	0xab,0x59,0x49,0x3f,0x3f,0xc2,0x3a,0x51,0x55,0xbb,0xb6,0xc0,0x32,0x30,0x72,0x50,
	0xa7,0x59,0x43,0xaa,0x55,0xc2,0x62,0x51,0x41,0x69,0x6c,0xc0,0xa8,0x32,0x44,0xa5,
	0x30,0xb5,0x35,0xc1,0x32,0xc2,0x3e,0x51,0x67,0x49,0x58,0xc0,0x66,0x32,0x72,0xa4,
	0xb2,0xb3,0x45,0x37,0x48,0x59,0x70,0x75,0x21,0x4f,0x2f,0x54,0xc1,0x23,0x71,0xa3,
	0xb3,0xba,0xbb,0x7b,0x33,0x7a,0x79,0xc2,0xa7,0x40,0x2d,0x4a,0xc1,0x73,0x71,0xba,
	0xbc,0x38,0xbb,0x73,0x74,0x78,0xc2,0x75,0x46,0xbc,0xb6,0xbf,0x52,0xa8,0x29,0x70,
	0xad,0x3c,0x2f,0x5c,0xc1,0x23,0x71,0xa9,0xb3,0x70,0xbe,0x34,0x5c,0x56,0x70,0x73,
	0x21,0x50,0x5d,0x48,0xc1,0x7b,0x71,0x76,0x61,0x40,0xbb,0x3b,0x34,0xaa,0x73,0x30,
	0xab,0x3a,0x2d,0x34,0xc1,0x53,0x72,0x45,0x6a,0x68,0xbb,0x3b,0x32,0xaa,0x73,0x30,
	0xa7,0x40,0x6e,0xa2,0xc1,0x33,0x71,0xb7,0x6a,0x68,0xbe,0x53,0x70,0x31,0xc2,0x79,
	0x21,0x54,0x5d,0x36,0xc1,0xa5,0x71,0xb7,0x61,0xa2,0xbb,0x54,0x68,0x52,0xc2,0x2f,
	0x21,0x50,0x40,0x68,0xc1,0x4b,0x71,0x51,0x67,0x50,0xbb,0x32,0xb6,0xc2,0x35,0x52,
	0xb3,0xb2,0xbb,0x53,0x34,0x62,0xc2,0x73,0x49,0x2e,0x70,0xbf,0x66,0x32,0xc2,0xa6,
	0x50,0xb4,0x45,0x38,0x54,0x3c,0xc2,0x79,0x21,0x3c,0x6e,0x7c,0xc1,0x63,0x72,0x4b,
	0xb4,0x78,0xbe,0x34,0xb6,0x3a,0x70,0x75,0x21,0x54,0x6e,0x7c,0xc1,0xa5,0x72,0x4b,
	0xb4,0x78,0xbb,0x33,0x5c,0x34,0xc2,0x75,0x4a,0x49,0x38,0xbf,0x62,0x56,0x71,0x70,
	0xb2,0x59,0x3e,0x27,0xa8,0xc2,0x46,0x51,0x79,0x69,0x2d,0x32,0xc1,0x4d,0x30,0xa4,
	0x50,0xb5,0x45,0x37,0x78,0xaf,0xc2,0x77,0x21,0x3d,0x2e,0x54,0xc1,0x49,0xa1,0xa5,
	0xa2,0xb5,0x78,0x6f,0x6b,0xc2,0x6d,0x6a,0xb7,0x68,0xbc,0xad,0x32,0x2c,0x77,0x70,
	0xab,0x3a,0x7e,0x6a,0xc1,0x53,0x71,0xb7,0x61,0x58,0xbb,0xa4,0xae,0xc2,0x46,0x51,
	0x7a,0x29,0xa6,0xbf,0xa4,0x3e,0x71,0x70,0xa5,0x59,0x3d,0x77,0x4d,0xc2,0x4a,0x51,
	0x52,0x29,0x38,0xc0,0x36,0x32,0x57,0xa6,0x40,0xb6,0x37,0x57,0x7b,0xc2,0x6e,0x51,
	0x61,0xbb,0x38,0xc0,0x26,0x32,0x2d,0xa5,0xc2,0xb6,0x37,0x3f,0x42,0xc2,0x52,0x51,
	0x79,0xbe,0x6c,0xc0,0x76,0x32,0x39,0xa4,0x50,0xb6,0x45,0x36,0x38,0x56,0x70,0x2d,
	0x21,0x48,0x7d,0x58,0xc1,0x23,0x71,0xa7,0x61,0xa2,0xbc,0x7b,0x33,0x66,0x71,0x30,
	0xab,0x59,0x49,0x77,0x3a,0xc2,0x32,0x51,0x67,0xbd,0x74,0xc0,0x76,0x32,0x44,0xb9,
	0xc2,0xb8,0x45,0x37,0x48,0x35,0xc2,0x75,0x21,0x44,0x70,0x7e,0xc1,0x51,0xa1,0xa6,
	0xa2,0xb4,0x45,0x38,0x70,0x3a,0xc2,0x73,0x4b,0x6b,0x2c,0xbf,0x62,0x58,0x71,0x30,
	0xa5,0x59,0x44,0xa1,0x37,0xc2,0x31,0x5e,0xb3,0x40,0xbc,0xa5,0x40,0x31,0xc2,0x7b,
	0x21,0x59,0x7d,0x6a,0xc1,0x31,0x7c,0xa3,0x50,0xb5,0x36,0x48,0x31,0xc2,0x5a,0x51,
	0x5b,0x2c,0x38,0xc0,0x32,0x2c,0x74,0x70,0xa9,0x59,0x46,0x37,0x33,0xc2,0x52,0x51,
	0x55,0x69,0x5c,0xbf,0xa4,0x6e,0x23,0x30,0xa5,0x59,0x40,0x47,0x4b,0xc2,0x5d,0x52,
	0xb3,0x40,0xbe,0x3b,0x34,0x46,0x73,0x70,0xa4,0x31,0x70,0xbf,0x46,0x32,0x2f,0xa4,
	0x30,0xb3,0x25,0x35,0x6c,0x32,0x77,0xc2,0xb0,0xab,0x39,0x57,0x69,0xc2,0x31,0x3b,
	0xc2,0xb5,0x35,0xb9,0x34,0xc2,0x3a,0x51,0x6d,0x49,0x50,0xbf,0x52,0xc2,0x71,0x54,
	0x70,0xb5,0xb7,0x39,0xb6,0x33,0xc2,0x7d,0x41,0xbb,0x38,0xbf,0x56,0x32,0x7b,0xa8,
	0x30,0xb3,0x45,0x35,0x40,0x31,0xc2,0xa1,0x21,0x42,0xbf,0x3a,0xc1,0x39,0xb3,0xa3,
	0x60,0xb9,0x45,0x35,0xaa,0x3b,0xc2,0x73,0x21,0x39,0x3d,0x34,0xc1,0xad,0x71,0xa9,
	0x61,0x58,0xbb,0xa6,0x48,0x35,0x70,0x79,0x21,0x54,0x40,0x66,0xc1,0x4b,0x71,0x58,
	0xbf,0x48,0xbb,0x33,0x68,0x33,0x70,0x77,0x46,0x69,0x68,0xbf,0x41,0x38,0xc2,0x77,
	0x46,0x69,0x68,0xbf,0x52,0x28,0xa2,0x30,0xac,0x59,0x3a,0x57,0x46,0xc2,0x49,0x64,
	0x61,0x70,0xbb,0x5b,0x34,0xac,0x2c,0x30,0xaa,0x59,0x3c,0x37,0xbd,0xc2,0x6a,0x51,
	0x6c,0xbb,0x30,0xc0,0x36,0x32,0xc2,0xa5,0x50,0xba,0x38,0xa1,0x63,0xc2,0x4a,0x51,
	0x7c,0xbb,0x30,0xbf,0x32,0x38,0x7a,0x30,0xa7,0x40,0x3f,0x5c,0xc1,0x63,0x71,0xb2,
	0xb4,0x68,0xbd,0x74,0xaa,0x4a,0x70,0x7d,0x21,0x51,0x4d,0x2e,0xc1,0x61,0x2a,0xa4,
	0x30,0xb9,0x45,0x3c,0x68,0xad,0xc2,0x25,0x21,0x3f,0xaf,0x3a,0xc1,0x43,0x71,0x21,
	0x6a,0x50,0xbd,0x74,0x2c,0x33,0x70,0x79,0x21,0x5b,0x5f,0x44,0xc1,0xb5,0x71,0xb1,
	0xb4,0x50,0xbc,0x33,0xc2,0xa1,0x70,0x21,0x21,0x67,0xaf,0x3a,0xc1,0x33,0x71,0x75,
	0xb3,0x40,0xbc,0x74,0x2c,0x43,0x70,0x75,0x21,0x57,0x3d,0xb2,0xc1,0x63,0x72,0x39,
	0x62,0x48,0xbc,0x74,0x7c,0x5f,0x70,0x75,0x21,0x66,0xaf,0x24,0xc1,0x73,0x71,0x23,
	0x6b,0x78,0xbc,0xad,0x34,0xa8,0x23,0x30,0xa4,0x59,0x44,0x37,0x68,0xc2,0x3a,0x51,
	0x5e,0xbd,0x74,0xc0,0x32,0x34,0x76,0xc2,0xa6,0x59,0x3e,0xa9,0x43,0xc2,0x3e,0x51,
	0x7d,0x4a,0x30,0xbf,0x56,0x32,0x55,0xa4,0x40,0xb6,0x77,0x4f,0x33,0xc2,0x4e,0x51,
	0x2c,0x2a,0x58,0xbf,0x36,0x32,0xb0,0xae,0x50,0xb5,0x37,0xb9,0x5a,0xc2,0x42,0x51,
	0x2c,0x70,0x34,0xbf,0x76,0x31,0x2a,0xa4,0x40,0xb7,0x45,0x35,0x48,0x34,0x70,0x79,
	0x4c,0x49,0x3c,0xbf,0x56,0x34,0x68,0xa6,0x70,0xb9,0x45,0x35,0x48,0x34,0x70,0x77,
	0xa3,0x49,0xaf,0x33,0x32,0xc2,0x36,0x51,0x71,0x4a,0x48,0xc0,0x36,0x32,0x62,0xa3,
	0xa2,0xb4,0x45,0x39,0xb2,0x76,0x70,0x7d,0x21,0x57,0x4d,0x3a,0xc1,0x61,0x2a,0xa3,
	0x60,0xb3,0x25,0x37,0x7c,0x24,0x70,0x7b,0x21,0x55,0x6d,0x4e,0xc1,0xb5,0x71,0x28,
	0x61,0x50,0xbb,0x3b,0x38,0x66,0x75,0xc2,0xab,0x59,0x39,0xa1,0x37,0xc2,0x41,0x58,
	0xbe,0x78,0xbb,0x7b,0x37,0x78,0x74,0x30,0xab,0x59,0x3a,0xa2,0x33,0xc2,0x4a,0x51,
	0x6d,0x6a,0x34,0xbf,0x56,0x32,0x51,0xa4,0xb2,0xba,0x45,0x36,0x2c,0x33,0x70,0x75,
	0x4d,0x2c,0xaa,0xbf,0x26,0x32,0xa1,0xaf,0x60,0xba,0x38,0x47,0x3b,0xc2,0x39,0x53,
	0x61,0x58,0xbc,0x33,0x68,0x32,0x70,0x77,0x3b,0x30,0xbd,0x54,0xaa,0x32,0x70,0x2b,
	0x71,0x40,0x30,0xbf,0x46,0x33,0x6f,0xa3,0xb2,0xb6,0x21,0x38,0xba,0xc2,0x36,0x51,
	0x7a,0x29,0x78,0xc0,0xa7,0x32,0x6e,0xc2,0xa4,0x31,0x70,0xc0,0x26,0x31,0x2a,0xaf,
	0x60,0xba,0x37,0xa9,0xa5,
} ;

#ifndef DX_NON_NAMESPACE

}

#endif // DX_NON_NAMESPACE

#endif // DX_NON_FILTER

#endif // DX_NON_DIRECT3D9
