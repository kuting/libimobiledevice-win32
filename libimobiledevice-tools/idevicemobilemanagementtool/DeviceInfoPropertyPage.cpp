// DeviceInfoPropertyPage.cpp : implementation file
//

#include "stdafx.h"
#include "idevicemobilemanagementtool.h"
#include "DeviceInfoPropertyPage.h"
#include "afxdialogex.h"

#include "DeviceIDProvider.h"

// CDeviceInfoPropertyPage dialog

IMPLEMENT_DYNAMIC(CDeviceInfoPropertyPage, CMFCPropertyPage)

CDeviceInfoPropertyPage::CDeviceInfoPropertyPage()
	: CMFCPropertyPage(CDeviceInfoPropertyPage::IDD)
	, m_DomainName(_T(""))
	, m_Key(_T(""))
	, m_SimpleMode(FALSE)
	, m_XmlOutput(FALSE)
	, m_Debug(FALSE)
{

}

CDeviceInfoPropertyPage::~CDeviceInfoPropertyPage()
{
}

void CDeviceInfoPropertyPage::DoDataExchange(CDataExchange* pDX)
{
	CMFCPropertyPage::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_DEVICE_INFO_DEVICE_ID_COMBO, m_DeviceIDCombo);
	DDX_Text(pDX, IDC_DEVICE_INFO_DOMAIN_NAME_EDIT, m_DomainName);
	DDV_MaxChars(pDX, m_DomainName, 150);
	DDX_Text(pDX, IDC_DEVICE_INFO_KEY_EDIT, m_Key);
	DDV_MaxChars(pDX, m_Key, 150);
	DDX_Check(pDX, IDC_DEVICE_INFO_SIMPLE_OPTION, m_SimpleMode);
	DDX_Check(pDX, IDC_DEVICE_INFO_XML_OPTION, m_XmlOutput);
	DDX_Check(pDX, IDC_DEVICE_INFO_DEBUG_OPTION, m_Debug);
	DDX_Control(pDX, IDC_DEVICE_INFO_SUBMIT_BUTTON, m_GoButton);
}


BEGIN_MESSAGE_MAP(CDeviceInfoPropertyPage, CMFCPropertyPage)
	ON_BN_CLICKED(IDC_DEVICE_INFO_SUBMIT_BUTTON, &CDeviceInfoPropertyPage::OnBnClickedDeviceInfoSubmitButton)
END_MESSAGE_MAP()


// CDeviceInfoPropertyPage message handlers


void CDeviceInfoPropertyPage::OnBnClickedDeviceInfoSubmitButton()
{
	
}

BOOL CDeviceInfoPropertyPage::OnInitDialog()
{
	CMFCPropertyPage::OnInitDialog();

	FillDeviceIDCombo();

	return TRUE;  // return TRUE unless you set the focus to a control
}

void CDeviceInfoPropertyPage::FillDeviceIDCombo()
{
	UpdateData(FALSE);

	//m_DeviceIDCombo.AddString(_T("Automatic detection"));
	//m_DeviceIDCombo.SetItemData(0, -1);

	//CDeviceIDProvider deviceIDProvider;
	//std::vector<CString> *listOfDevices = deviceIDProvider.GetDeviceIDList();
	//
	//int index = 0;
	//for (auto iterator = listOfDevices->cbegin(); iterator != listOfDevices->end(); iterator++) {
	//	CString value = *iterator;

	//	m_DeviceIDCombo.AddString(value);
	//	m_DeviceIDCombo.SetItemData(index + 1, index);

	//	index++;
	//}

	//delete listOfDevices;

	UpdateData(TRUE);
}
