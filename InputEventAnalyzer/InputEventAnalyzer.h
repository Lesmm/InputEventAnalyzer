
// InputEventAnalyzer.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CInputEventAnalyzerApp:
// �йش����ʵ�֣������ InputEventAnalyzer.cpp
//

class CInputEventAnalyzerApp : public CWinApp
{
public:
	CInputEventAnalyzerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CInputEventAnalyzerApp theApp;