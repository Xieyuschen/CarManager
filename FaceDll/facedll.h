
#pragma once
#ifdef FaceLIBDLL
#define FACEAPI _declspec(dllexport)
#else
#define FACEAPI  _declspec(dllimport)
#endif
//����include��Ҫ�õ���ͷ�ļ�
class FACEAPI FaceRecognizer
{
public:
	FaceRecognizer();
	~FaceRecognizer();
	void ConfirmTest();
};