#pragma once
typedef float vec_t;
typedef vec_t vec4_t[4];
typedef int(*DrawEngineText_t)(char* Text, int NumOfChars, void* Font, float X, float Y, float scaleX, float scaleY, float unk1, vec4_t Color, int unk2);
typedef int(*DrawRotatedPic_t)(ScreenMatrix* scmatrix, float x, float y, float w, float h, float angle, vec4_t color, int* shader);
typedef void* (*RegisterFont_t)(char* szName);
typedef void(__cdecl* DrawEngineRadar_t)(int unk1, int disableRotation, int unk2, RadarHud* radar, int* shader, vec4_t color);
typedef void(__cdecl* OverlayPackage_t)(int a1, int a2, int a3, RadarHud* radar, int shader, vec4_t color);
typedef void(*OverlayEnemy_t)(int a1, int a2, int a3, RadarHud* hud, vec4_t color);
typedef void(*OverlayFriendly_t)(int a1, int a2, int a3, RadarHud* hud, vec4_t color);
//TODO Maybe add these again
//typedef void(*OverlayTurret_t)(int a1, int a2, int a3, CRadarHud* hud, vec4_t color);
//typedef void(*OverlayHeli_t)(int a1, int a2, int a3, CRadarHud* hud, vec4_t color);
//typedef void(*OverlayLocal_t)(int a1, int a2, int a3, CRadarHud* hud, vec4_t color);
//typedef void(*OverlayPlane_t)(int a1, int a2, int a3, CRadarHud* hud, vec4_t col);
typedef int* (*RegisterShader_t) (char* ShaderName);
typedef ScreenMatrix* (__cdecl* GetScreenMatrix_t)();
typedef void(__cdecl* DrawNameTagsOverhead_t)(int LocalClientNum, Entity_T EntityToDraw, float Value);

//
typedef int(__cdecl* RegisterTag_t)(char* Tag);


