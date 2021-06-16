﻿
// module_5_0511_Chan_1Doc.h: Cmodule50511Chan1Doc 클래스의 인터페이스
//


#pragma once

struct Complex {
	double Re;
	double Im;
};

class Cmodule50511Chan1Doc : public CDocument
{
protected: // serialization에서만 만들어집니다.
	Cmodule50511Chan1Doc() noexcept;
	DECLARE_DYNCREATE(Cmodule50511Chan1Doc)

	// 특성입니다.
public:

	// 작업입니다.
public:

	// 재정의입니다.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

	// 구현입니다.
public:
	virtual ~Cmodule50511Chan1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

	// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 검색 처리기에 대한 검색 콘텐츠를 설정하는 도우미 함수
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
public:
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);

	unsigned char* m_InputImage; //입력 영상 버퍼
	int m_width;
	int m_height;
	int m_size;
	virtual BOOL OnSaveDocument(LPCTSTR lpszPathName);
	void OnDownSampling();

	unsigned char* m_OutputImage; //입력 영상 버퍼
	int m_Re_width;
	int m_Re_height;
	int m_Re_size;
	void OnUpSampling();
	void OnQuantization();
	afx_msg void OnSumConstant();
	afx_msg void OnSubConstant();
	afx_msg void OnMulConstant();
	afx_msg void OnDivConstant();
	afx_msg void OnAndOperate();
	afx_msg void OnOrOperate();
	afx_msg void OnXorOperate();
	afx_msg void OnGammaCorrection();
	afx_msg void OnNegaTransform();
	afx_msg void OnBinaryztion();
	afx_msg void OnStressTransform();
	afx_msg void OnHistoStretch();
	afx_msg void OnEndInSearch();
	afx_msg void OnHistoSpec();
	afx_msg void OnHistoEqual();
	afx_msg void OnHistogram();
	afx_msg void OnEmbossing();
	double** OnMaskProcess(unsigned char* Target, double Mask[3][3]);
	double** OnScale(double** Target, int height, int width);
	double** Image2DMem(int height, int width);
	double** m_tempImage;
	afx_msg void OnBlurr();
	afx_msg void OnGaussianFilter();
	afx_msg void OnSharpening();
	afx_msg void OnHpfSharp();
	afx_msg void OnLpfSharp();
	afx_msg void OnDiffOperatorHor();
	afx_msg void OnHomogenOperator();
	afx_msg void OnLaplacian();
	afx_msg void OnNearest();
	afx_msg void OnBilinear();
	afx_msg void OnMeanSub();
	afx_msg void OnMedianSub();
	afx_msg void OnTranslation();
	afx_msg void OnMirrorHor();
	afx_msg void OnMirrorVer();
	afx_msg void OnRotation();
	double DoubleABS(double X);
	void OnBubleSort(double* A, int MAX);
	void OnSwap(double* a, double* b);
	afx_msg void OnFrameSum();
	afx_msg void OnFrameSub();
	afx_msg void OnFrameMul();
	afx_msg void OnFrameDiv();
	afx_msg void OnFrameAnd();
	afx_msg void OnFrameOr();
	afx_msg void OnFrameComb();
	afx_msg void OnBinaryErosion();
	afx_msg void OnGrayErosion();
	afx_msg void OnBinaryDilation();
	afx_msg void OnGrayDilation();
	afx_msg void OnLowPassFilter();
	afx_msg void OnHighPassFilter();
	afx_msg void OnMeanFilter();
	afx_msg void OnMaxFilter();
	afx_msg void OnMedianFilter();
	afx_msg void OnMinFilter();
	afx_msg void OnFft2d();
	afx_msg void OnIfft2d();
	afx_msg void OnLpfFrequency();
	afx_msg void OnHpfFrequency();
	void OnFft1d(Complex* X, int N, int Log2N);
	void OnShuffle(Complex* X, int N, int Log2N);
	void OnButterfly(Complex* X, int N, int Log2N, int mode);
	int OnReverseBitOrder(int index, int Log2N);
	Complex** m_FFT;
	void OnIfft1d(Complex* X, int N, int Log2N);
	Complex** m_IFFT;
};
