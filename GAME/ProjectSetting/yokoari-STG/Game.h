#ifndef _GAME_H_
#define _GAME_H_
#include "IScene.h"
/********************************
* �쐬��    �F ���R ��
* �N���X�T�v �F �Q�[���̓��e���Ǘ�����
*********************************/

class Game : public IScene {

private:
	Game();		//�R���X�g���N�^
	~Game();	//�f�X�g���N�^

public:
	void Initialize() override;
	void Update() override;
	void Render() override;
	void Finalize() override;

};
#endif // !_GAME_H_

