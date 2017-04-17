#ifndef _GAME_H_
#define _GAME_H_
#include "IScene.h"
/********************************
* 作成者    ： 杉山 涼
* クラス概要 ： ゲームの内容を管理する
*********************************/

class Game : public IScene {

private:
	Game();		//コンストラクタ
	~Game();	//デストラクタ

public:
	void Initialize() override;
	void Update() override;
	void Render() override;
	void Finalize() override;

};
#endif // !_GAME_H_

