#pragma once
#include "CubeMan_Light.h"
#include "Obj.h"

class CubeMan_Walk :
	public CubeMan_Light
{
public:
	CubeMan_Walk();
	virtual ~CubeMan_Walk();

	virtual void Destroy() override;
	virtual void Update() override;

	LRESULT InputProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	inline void SetWalkingMap(const Obj* map){ walkingMap = map; }

protected:
	const Obj* walkingMap = nullptr;
};

